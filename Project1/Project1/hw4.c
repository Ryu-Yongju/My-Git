# include <stdio.h>

void bin(num)
{
	if (num / 2 == 0)
	{
		printf("%d", num);
		return;
	}
	bin(num / 2);
	printf("%d", num % 2);
}
int main(void)
{
	int num;

	printf("Please enter a number: ");
	scanf_s("%d", &num);
	bin(num);
	return 0;
}