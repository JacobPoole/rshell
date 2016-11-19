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

	else 
	{
		//execute command
		cmd->execute(cmd_str, prev_cmd);
	}

