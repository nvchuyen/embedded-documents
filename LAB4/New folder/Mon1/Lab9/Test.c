#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(void)
{
	float a, b, c;
	char x;
	do
	{
		printf("a = ");
		scanf("%f", &a);

		printf("b = ");
		scanf("%f", &b);

		printf("c = ");
		scanf("%f", &c);

		printf("Nghiem cua phuong trinh: \n");

		SolveEqualtion(a, b, c);
		
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &x);
		printf("-------------------------------------------\n");
	} while (x != 110);
	return 0;
}