#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	time_t rawtime = time(NULL);
	struct tm* info;
	info = localtime(&rawtime);
	printf("%d", info->tm_year + 1900);
	return 0;
}