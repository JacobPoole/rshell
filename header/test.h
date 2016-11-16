#ifndef TEST_H
#define TEST_H

#include <sys/stat.h>
#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;

class Test 
{
    public:
        Test() { }
        void execute(string command, string path, bool &prev_cmd);
};

#endif
