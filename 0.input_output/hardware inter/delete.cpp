// #include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    //make sure \\ need to be used at '\'
    if (remove("D:\\programings\\1.c++\\0.Intro to c++\\done c++ hardware interaction\\a.txt") != 0)
        perror("Error deleting file");
    else
        puts("File successfully deleted");
    return 0;
}