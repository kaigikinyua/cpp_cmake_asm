#pragma once

namespace Configs{
    const bool consoleLogs=true;
    const bool productionMode=false;
    const std::string logParentFolder="./Data/Logs/";
    const std::string sessionFile="./Logs/Session_"+std::to_string(time(NULL))+".txt";
};


class Log{
    public:
    static void message(std::string message);
    static void success(std::string message);
    static void error(std::string message);
    static void warning(std::string message);
    static void consoleLog(std::string message,int code);
};

class File{
    private:
    static bool fileExists(std::string filePath);
    public:
    static bool writeToLogFile(std::string message);
};