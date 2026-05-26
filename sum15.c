#include<stdio.h>
int main()
{
	for (int i = 1;i <= 1000;i++)
	{
		int number = i;
		int sum = 0;
		while (number != 0)
		{
			int temp = number % 10;
			sum = sum + temp;
			number=number / 10;
		}
		if (sum == 15)
		{
			printf("%d\n", i);
		}
	}
}
