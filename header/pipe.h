#ifndef PIPE_H
#define PIPE_H

#include <stdio.h>
#include <sys/wait.h>
#include <cerrno>
#include <fcntl.h>
#include <cstring>
#include <boost/tokenizer.hpp> 

using namespace std;

class Pipe
{
    public:
        Pipe() { }
        void execute(string command, bool &prev_cmd);
};

#endif
