#include<stdio.h>

int main()
{
	int i = 5;
	float f = 5.0;
	char c = 'k';

	int* pI = &i;
	float* pF = &f;
	char* pC = &c;

	printf("Dia chi con tro int tro vao: %p\n", pI);
	printf("Gia tri tai dia chi con tro int tro vao: %d\n", *pI);

	printf("Dia chi con tro float tro vao: %p\n", pF);
	printf("Gia tri tai dia chi con tro float tro vao: %f\n", *pF);

	printf("Dia chi con tro char tro vao: %p\n", pC);
	printf("Gia tri tai dia chi con tro char tro vao: %c\n", *pC);

	return 0;
}