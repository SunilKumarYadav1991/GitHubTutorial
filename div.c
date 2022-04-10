// example division file.
#include<stdio.h>

float div(float arg1, float arg2)
{
	if(arg2==0)
	{
		printf("divide by zero condition\n");
		return -1;
	}
	return arg1/arg2;
}
