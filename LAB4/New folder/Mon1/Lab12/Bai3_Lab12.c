#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct 
{
	int feet;
	int inch;
} distance_t;
distance_t* addDistance(distance_t* d1, distance_t* d2)
{
	distance_t d;
	distance_t* pD = &d;
	pD->feet = d1->feet + d2->feet;
	pD->inch = d1->inch + d2->inch;
	return pD;
}
int main()
{
	distance_t d1, d2;
	distance_t* pD1, * pD2, *res;
	pD1 = &d1;
	pD2 = &d2;
	printf("Nhap d1 feet: "); scanf("%d", &pD1->feet);
	printf("Nhap d1 inch: "); scanf("%d", &pD1->inch);
	printf("Nhap d2 feet: "); scanf("%d", &pD2->feet);
	printf("Nhap d2 feet: "); scanf("%d", &pD2->inch);
	res = addDistance(pD1, pD2);
	printf("Tong khoang cach la: %d feet, %d inch\n", res->feet, res->inch);
	return 0;
}