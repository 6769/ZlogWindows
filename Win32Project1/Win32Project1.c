#include "stdafx.h"
#include "zlog.h"


void log_switch(enum logswitch n);

int main(void)
{
	log_switch(ON);

	dzlog_info("hello, zlog");
	dzlog_debug("debugherer  [%d]",time(0));

	log_switch(OFF);
	return 0;
}

