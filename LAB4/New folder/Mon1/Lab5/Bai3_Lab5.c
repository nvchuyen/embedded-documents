#include<stdio.h>
int main()
{
	float temperature;
	char c;
	do
	{
		printf("Nhap vao nhiet do: ");
		scanf("%f", &temperature);
		
		if (temperature < 0)
		{
			printf("Thoi tiet lanh cong\n");
		}
		else
		{
			if (temperature >= 0 && temperature < 10)
			{
				printf("Thoi tiet rat lanh\n");
			}
			else
			{
				if (temperature >= 10 && temperature < 20)
				{
					printf("Thoi tiet lanh\n");
				}
				else
				{
					if (temperature >= 20 && temperature < 30)
					{
						printf("Thoi tiet tuyet voi\n");
					}
					else
					{
						if (temperature >= 30 && temperature < 40)
						{
							printf("Thoi tiet nong\n");
						}
						else
						{
							printf("Thoi tiet rat nong\n");
						}
					}
				}
			}
		}
		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}