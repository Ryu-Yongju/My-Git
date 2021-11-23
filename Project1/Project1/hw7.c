#include <stdio.h>
#include <math.h>

void Standard_Deviation(int param[])
{
	int average, dev, i;
	double sum = 0;
	double result;

	average = (param[0] + param[1] + param[2] + param[3] + param[4]) / 5;
	for (i = 0; i < 5; i++)
	{
		dev = param[i] - average;
		sum += pow(dev, 2);
	}
	result = sum / 5;
	printf("%.3lf", sqrt(result));
}

int main(void)
{
	int arr[5];

	printf("Enter 5 real number : ");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	Standard_Deviation(arr);

	return 0;
}