<<<<<<< Updated upstream
#include "../headerse/parser.h"
#include <stdio.h>
#include <unistd.h>
#include <iostream>
=======
#include "../header/parser.h"
#include <stdio.h>
#include <unistd.h>
>>>>>>> Stashed changes

using namespace std;

int main()
{
<<<<<<< Updated upstream
	//get host name and user id
	string cmd;
	string user_id;
	bool prev_cmd = true;
	char hostname[100];
	
	//FIXME:instantiate object of type parse
	
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
		//FIXME: need a line of code for parsing here
	}

	return 0;
=======
    Parser* cmds = new Parser();
    string command;     //Used for user input
    string login;       //Get the login name of the user
    bool previous = true;
    if (getlogin() == NULL)
    {
        login = "";
        perror("get login failed"); //getlogin() failed
    }
    else
    {
        login = getlogin();         //getlogin() success
    }
    char host[100];                     //Get the user's hostname
    if (gethostname(host, 100) == -1)
    {
        perror("get host name failed"); //gethostname() failed
    }
    while (true)                        //Loop until exit called
    {
        if (getlogin() != NULL)     //Just display "$ " if getlogin() failed
        {
            cout << login << "@" << host;
        }
        cout << "$ ";
        getline(cin, command);      //Get user input
        cmds->parse(command, previous);
    }
    return 0;
>>>>>>> Stashed changes
}
