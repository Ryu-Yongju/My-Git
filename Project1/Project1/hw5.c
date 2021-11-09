#include <stdio.h>

int main(void)
{
	int num[5];
	int i;

	printf("5개의 정수를 입력하세요: ");
	scanf_s("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	printf("홀수 출력:");
	for (i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 1)
			printf(" %d", num[i]);
	}
	printf("\n짝수 출력:");
	for (i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0)
			printf(" %d", num[i]);
	}
	return 0;
}