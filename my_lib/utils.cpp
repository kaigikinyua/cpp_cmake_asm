/*PURPOSE -> This file contains utilities:
    1.Storing the configuration of the application ie.debug or production
    2.logging to the console
    3.logging to the log file
*/

#include<iostream>
#include<string>
#include<ctime>

namespace Configs{
    const bool consoleLogs=true;
    const bool productionMode=false;
    const std::string logParentFolder="./Data/Logs/";
    const std::string sessionFile="./Logs/Session_"+std::to_string(time(NULL))+".txt";
};

class Log{
    public:
    static void message(std::string message){
        std::cout<<message<<std::endl;
    }
    static void success(std::string message){
        std::cout<<"Success: "<<message<<std::endl;
    }
    static void warning(std::string message){
        std::cout<<"Warning: "<<message<<std::endl;
    }
    static void error(std::string message){
        std::cout<<"Error: "<<message<<std::endl;
    }
    static void consoleLog(std::string message,int code=1){
        //code 0-success 1-just console log 2-warning 3-error
        if(code<0 || code>3){Log::message(message);}
        switch(code){
            case 0:
                Log::success(message);
                break;
            case 1:
                Log::message(message);
                break;
            case 2:
                Log::warning(message);
                break;
            case 3:
                Log::error(message);
                break;
        }
    }
};


class File{
    private:
    static bool fileExists(std::string filePath){
        return true;
    }
    public:
    static bool writeToLogFile(std::string message){
        if(File::fileExists("testFile")==false){
            //create logfile
        }
        //read current data from log file
        //write data to log file
        return false;
    }
};