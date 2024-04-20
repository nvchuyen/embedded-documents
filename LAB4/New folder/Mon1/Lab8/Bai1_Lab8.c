#include<stdio.h>

int UCLN(int u, int v);
float abs(float x);
float square(int x);
int UCLN(int u, int v)
{
	int temp;
	while (v!=0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	return u;
}
float abs(float x)
{
	if (x < 0)
	{
		x = -x;
	}
	return x;
}
float square(int x)
{
	const float epsilon = .00001;
	float guess = 1.0;
	if (x < 0)
	{
		guess = -1;
		printf("Khong the tinh can bac 2 cho so am.\n");
	}
	while (abs(guess * guess-x) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
	}
	return guess;
}
int main()
{
	int a = UCLN(30, 20);
	printf("%d", a);
	return 0;
}