#include "rshell.h"
#include "../header/and.h"
#include <string>

using namespace std;

void And::execute(string cmd_str, bool &prev_cmd)
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
}
