#include<iostream>
#include<fstream>

//research about the following
//1. How to make the clog append to an existing file and not ovewrite it

int main(int args,char *arg[]){
    
    std::cout<<"Logging test"<<std::endl;
    std::ofstream log("./logs/test_01.log");
    std::clog.rdbuf(log.rdbuf());
    std::clog<<"This is a warning message"<<std::endl;
    log.close();
    
    return 0;
}