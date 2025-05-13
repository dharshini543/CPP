#ifndef LOG_H
#define LOG_H

class Log
{
public:
    const int LogLevelWarning = 1;
    const int LogLevelError = 0;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;
public:

    Log();
    void setLevel(int level);
    void warn(const char* message);
    void error(const char* message);
    void info(const char* message);

};

#endif // LOG_H
