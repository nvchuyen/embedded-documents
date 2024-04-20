#include<stdio.h>

int main(int argc, char *argv[])
{
	int numberofArguments = argc;
	char* argument1 = argv[0];
	char* argument2 = argv[1];
	char* argument3 = argv[2];
	int age;
	printf("Ban bao nhieu tuoi: ");
	scanf("%d", &age);
	printf("\n");
	printf("Xin chao %s, %d tuoi!!", argument2, age);
	getchar();
	return 0;
}