#include<stdio.h>
#include<string.h>
#define FILENAME "test.txt"
#define FILENAME1 "test1.txt"
#define FILENAME2 "test2.txt"
int main()
{
    char oldname[100];
	char newname[100];
	char folder[100] ;
	char buffer[100] ;

    printf("Hay nhap ten file can doi\n");
	scanf("%s", oldname);
	printf("Nhap ten moi: ");
	scanf("%s", &newname);
	strcat(folder, newname);
	strcat(folder, ".txt");
	rename(FILENAME, folder);


	printf("Nhap ten file can xoa: \n");
	scanf("%s", buffer);
	remove(buffer);

	return 0;
}
