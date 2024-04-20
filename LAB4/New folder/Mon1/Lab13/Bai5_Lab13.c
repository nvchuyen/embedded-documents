#include<stdio.h>
#include<string.h>
#define FILENAME "C://Users//admin//Desktop//test.txt" 
#define FILENAME1 "C://Users//admin//Desktop//test1.txt"
#define FILENAME2 "C://Users//admin//Desktop//test2.txt"
int main()
{
	char newname[100];
	char folder[100] = "C://Users//admin//Desktop//";
	printf("Nhap ten moi: ");
	scanf("%s", &newname);
	strcat(folder, newname);
	strcat(folder, ".txt");
	rename(FILENAME, folder);


	remove(FILENAME1);

	return 0;
}