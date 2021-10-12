#include <stdio.h>

int main(void)
{
	int count = 0, num = 0;

	printf("Please enter a number: ");
	scanf_s("%d", &num);
	for (int k = 1; k <= num; k++)
	{
		if (num % k == 0)
			count += 1;
	}
	if (count == 2)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");
	return 0;
}