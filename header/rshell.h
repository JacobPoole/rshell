#ifndef __RSHELL_H__
#define __RSHELL_H__

#include <string>

using namespace std;

class Rshell
{
	public:
		Rshell() { }
		virtual void execute(string cmd, bool &prev_cmd) = 0;
};

#endif
