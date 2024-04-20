#include <stdio.h>
#include <stdlib.h>

int main()
{
	float chieudai;
	float chieurong;
	float chuvi;
	float dientich;
	printf("Chu vi cua hinh chu nhat co chieu dai ");
	scanf("%f", &chieudai);
	printf(" va chieu rong ");
	scanf("%f", &chieurong);
	printf(" la ");
	chuvi = (chieudai + chieurong)*2;
	printf("%.1f\n", chuvi);

	printf("--------------------------------------\n");

	printf("Dien tich cua hinh chu nhat co chieu dai ");
	scanf("%f", &chieudai);
	printf(" va chieu rong ");
	scanf("%f", &chieurong);
	printf(" la ");
	dientich = chieudai * chieurong;
	printf("%.1f", dientich);
	getchar();
	return 0;
}
