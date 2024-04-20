#include<stdio.h>

int main()
{
	enum Company
	{
		GOOGLE,
		FACEBOOK,
		XEROX,
		YAHOO,
		EBAY,
		MICROSOFT
	};
	enum Company com = GOOGLE;
	printf("%d", com);
	return 0;
}