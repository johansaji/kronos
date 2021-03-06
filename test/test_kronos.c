#include <stdio.h>
#include <log4c.h>
#include <log4c/appender.h>
#include <kronos.h>

int main(){
  kronos_init("./kronos.conf");
  // mycat = log4c_category_get("test.jim");
  //  log4c_category_log(mycat, LOG4C_PRIORITY_ERROR, "Debugging app 1 - loop");
    KRONOS_LOG(KRONOS_FATAL, "test.jim", "%s", "Test");
    KRONOS_LOG(KRONOS_ALERT, "test.jim", "%s", "Test");
    KRONOS_LOG(KRONOS_CRIT, "test.jim", "%s", "Test");
    KRONOS_LOG(KRONOS_ERROR, "test.jim", "%s", "Test");
    KRONOS_LOG(KRONOS_WARNING, "test.jim", "%s", "Test");
    KRONOS_LOG(KRONOS_NOTICE, "test.jim", "%s", "Test");
    KRONOS_LOG(KRONOS_INFO, "test.jim", "%s", "Test");
    KRONOS_LOG(KRONOS_DEBUG, "test.jim", "%s", "Test");
    KRONOS_LOG(KRONOS_TRACE, "test.jim", "%s", "Test");

    log4c_fini();

    
return 0;
}
