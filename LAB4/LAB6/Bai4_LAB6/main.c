#include<stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .2
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
	int hour = 0;
	double grossPay = 0.0;
	double taxes = 0.0;
	double netpay = 0.0;

	char c;
	do
	{
		printf("Please input your working hour: ");
		scanf("%d", &hour);

		if (hour <= 40)
		{
			grossPay = hour * PAYRATE;
		}
		else
		{
			grossPay = 40 * PAYRATE;
			double overtimePay = (hour - 40) * (PAYRATE * 1.5);
			grossPay += overtimePay;
		}

		if (grossPay <= 300)
		{
			taxes = grossPay * TAXRATE_300;
		}
		else if (grossPay > 300  && grossPay <= 450)
		{
			taxes = 300 * TAXRATE_300;
			taxes += (grossPay - 300) * TAXRATE_150;
		}
		else if (grossPay > 450)
		{
			taxes = 300 * TAXRATE_300;
			taxes += 150 * TAXRATE_150;
			taxes += (grossPay - 450) * TAXRATE_REST;
		}
		netpay = grossPay - taxes;

		printf("Your gross pay this week is: %.2f\n", grossPay);
		printf("Your taxes this week is: %.2f\n", taxes);
		printf("Your net pay this week is: %.2f\n", netpay);

		printf("Ban co muon tiep tuc?y/n: ");
		getchar();
		scanf("%c", &c);
		printf("-------------------------------------------\n");
	} while (c != 110);
	return 0;
}
