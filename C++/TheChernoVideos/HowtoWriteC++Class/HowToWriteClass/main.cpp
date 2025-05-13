#include "log.h"


int main()
{
    Log log;
    log.setLevel(log.LogLevelWarning);
    log.warn("Hello!");
    log.error("Hello!");
    log.info("Hello!");
    return 0;
}
