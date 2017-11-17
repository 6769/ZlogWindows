

#include "stdafx.h"
#include "zlog.h"


void log_switch(enum logswitch n)
{
	int rc = 0;
	switch (n)
	{
	case ON:
		rc = dzlog_init(DEFAULT_CONFIG_FILENAME, "my_cat");
		if (rc)
		{
			printf("init failed 0\n");
			exit(1);
		}
		break;
	case OFF:
		zlog_fini();
		break;
	}
}
