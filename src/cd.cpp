#include "../headers/base.h"
#include "../headers/cd.h"
#include <unistd.h>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

Cd :: Cd(){
}

void Cd :: run (string a, bool & b){
	//creating an object
	char * home = getenv("HOME");
	char * curr = getenv("PWD");
	string currr = getenv("PWD");
	char * old = getenv("OLDPWD");
	bool empty = false;
	
	
	if(a == "")
		empty = true;	

	if(chdir(a.c_str()) == -1){
		if(empty){
			chdir(home);
			setenv("PWD", home, 1);
			setenv("OLDPWD", curr, 1);
		}
		else if(a == "-" && strncmp("OLDPWD","",2) != 0){
			chdir(old);
			setenv("PWD", old, 1);
			setenv("OLDPWD", currr.c_str(), 1);
		}
		else{
			perror("YOUR DIRECTORY IS FALSE");
			b = false;
			return;
		}
	}
	else{
		string stringcurr = curr;
		if(stringcurr.find_last_of("/") == stringcurr.size()-1){
			stringcurr.substr(stringcurr.size()-2);
		}
		if(a == ".."){
			setenv("OLDPWD", curr, 1);
			int lastoccur = stringcurr.find_last_of("/");
			string newcurr = stringcurr.substr(0,lastoccur);
			setenv("PWD",newcurr.c_str(),1);
		}
		else if(a == "."){
			//Does Nothing
		}
		else{
			setenv("OLDPWD", curr, 1);
			//setenv("PWD", a.c_str(),1);
			setenv("PWD",strcat(strcat(curr,"/"),a.c_str()), 1);
		}
	}	

	cout << "PWD = " << getenv("PWD") << endl;
	cout << "OLDPWD = " << getenv("OLDPWD") << endl;
}

