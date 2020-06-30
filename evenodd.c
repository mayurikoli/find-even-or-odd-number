#include<stdio.h>
int main()
{
	int number;
	scanf("%d", &number);
	if(number & 1 == 1)
	{
		printf("%d is Odd number\n", number);
	}
	else
	{
		printf("%d is Even number\n", number);
	}
	return 0;
}

