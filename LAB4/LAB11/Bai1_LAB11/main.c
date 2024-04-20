#include<stdio.h>

int main()
{
	char x= 0;
	int y = 1;
	float z = 3.0;

	char* px = &x;
	int* py = &y;
	float* pz = &z;

        *px =12;
        *py =23;
        *pz = 2323.42;

	printf("Dia chi cua px la %p, dia chi va gia tri cua bien x la %p, %d \n", &px, px, *px);
	printf("Dia chi cua py la %p, dia chi va gia tri cua bien y la %p, %d \n", &py, py, *py);
	printf("Dia chi cua pz la %p, dia chi va gia tri cua bien z la %p, %0.2f \n", &pz, pz, *pz);


	return 0;
}
