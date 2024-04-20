#include<stdio.h>

int UCLN(int u, int v);
float giatrituyetdoi(float x);
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
float giatrituyetdoi(float x)
{
	if (x < 0)
	{
		x = -x;
	}
	return x;
}


long giaithua(int n)
{
    if(n == 0)
        return 1;
    else
        return n*giaithua(n-1);
}

float khoangcach(float Ax, float Ay, float Bx, float By)
{
    return sqrt( (Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By) );
}

int main()
{
	int a = UCLN(30, 20);
	float b = giatrituyetdoi(-30);
	int c = giaithua(15);
	int Ax = 1, Ay =3, Bx = 4, By =8;
	float d = khoangcach(Ax, Ay, Bx, By);
	printf("UCLN CUA 30 va 20: %d \n", a);
    printf("gia tri tuyet doi cua -30: %f \n", b );
    printf("gia thua cua 15: %ld \n" , c );
    printf("Khoang cach giua 2 diem A(1;3) va B(4;8) la AB = %f \n", d  );


	return 0;
}
