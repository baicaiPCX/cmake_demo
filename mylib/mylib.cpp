#include"mylib.h"

#include<iostream>

void print_mylib(){
#ifdef COMPILE_THIS
    std::cout<<"Hello World,defined COMPILE_THIS!";
#else
    std::cout<<"Hello World!"<<std::endl;
#endif
}