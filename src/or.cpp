#include "rshell.h"
#include "../header/or.h"
#include <string>
#include <sstream>

using namespace std;

void Or::execute(string cmd_str, bool &prev_cmd)
{
	//error checking for prev command
	if (!prev_cmd)
	{
		prev_cmd = false;
	}

	//check for test command
	size_t keyword = cmd_str.find("test");
	size_t bracket = cmd_str.find("[");

	else if (keyword != string::npos || bracket != string::npos)
	{
		//test ojbect
		string test_cmd;
		stringstream ss(cmd_str);
		vector<string> tokens;

		//tokenize into token vector
		while (ss >> test_cmd) 
		{
			tokens.push_back(test_cmd);
		}

		//check to see if test command specifies a flag by looking for "-"
		size_t check = tokens.at(1).find('-');
		
		if (check != string::npos)
		{
			//instance of test class
		}

		else {
			cmd_str.append(" -e");
			//instace of test class starting at (1)
		}

	//execute normally (from assn 2)
	else 
	{
		//execute command
		cmd->execute(cmd_str, prev_cmd);
	}

