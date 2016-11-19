#ifndef EXECUTABLE_H
#define EXECUTABLE_H

#include <cstring>
#include <stdio.h>
#include <cerrno>
#include <sys/wait.h>
#include <boost/tokenizer.hpp>
#include "rshell.h"

using namespace std;

class Executable : public Rshell
{
    public:
        Executable() { }
        void execute(string cmd_str, bool &prev_cmd);
	void run (string, bool);
};

#endif
