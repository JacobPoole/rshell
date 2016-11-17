#include "../header/parser.h"
#include <stdio.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int main()
{
	//get host name and user id
	string cmd;
	string user_id;
	bool prev_cmd = true;
	char hostname[100];
	
	//instantiate object of type parse
	Parser *cmd_string = new Parser();
	if (getlogin() == NULL)
	{
		user_id = "";
		perror("ERROR: could not log in");
	}

	else 
	{
		user_id = getlogin();
	}

	if (gethostname(hostname, 100) == -1)
	{
		perror("ERROR: could not get host name");
	}

	while (1)
	{
		//print out hostname and user id
		if (getlogin() != NULL)
		{
			cout << "[" <<  user_id << "@" << hostname << "]";
		}
		
		cout << "$ ";
		//get user input
		getline(cin,cmd);
		//parse
		cmd_string->parse(cmd, prev_cmd);
	}

	return 0;
}
