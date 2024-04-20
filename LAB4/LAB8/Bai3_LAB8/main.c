#include<stdio.h>
#include<stdlib.h>
int* elementNumber(int n);

int count = 2;
int main()
{

	char c;
	int input;
	do
	{
		int* p = NULL;
		int n;
		printf("Nhap vao so: ");
		scanf("%d", &n);
		if(n <=0)
            printf("khong co so nguyen to \n");
        else if(n ==1)
            printf("co mot so nguyen to la 1 \n");
        else if ((n == 2) || (n == 3))
            printf("co hai so nguyen to la 1 va %d \n", n);
        else{
            p = elementNumber(n);

            for (int i = 0; i <= count-1; i++)
            {
                if (*(p + i) > 0)
                {
				printf("So nguyen to thu %d = %d\n", i + 1, *(p + i));
                }
            }
        }

		free(p);
        count = 2;
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);



	return 0;
}
int* elementNumber(int n)
{
	static int* arr;
	arr = (int*)malloc(n * sizeof(int));
	*arr = 2;
	*(arr + 1) = 3;
	//int count = 2;
	for (int i = 4; i <= n; i++)
	{
		//neu i la so le
		if (i % 2 != 0)
		{
			for (int j = 2; j <= i/2; j++)
			{
				if (i % j == 0)
				{
					break;
				}
				if (j == i / 2)
				{
					*(arr + count) = i;
					count++;
					//printf("count: %d \n", count);
				}
			}
		}
	}
	return arr;
}
