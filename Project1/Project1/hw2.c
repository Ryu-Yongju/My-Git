#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double km;

	printf("Please enter kilometers: ");
	scanf("%lf", &km);
	printf("%.1f km is equal to %.1f", km, km / 1.609);
	return 0;
}