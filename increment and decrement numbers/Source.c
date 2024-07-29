#include<stdio.h>
int odd(int num);
void even(int num);
int num;
void main(void)
{
	odd(1);
}
int odd(int num)
{
	if (num == 10)
	{
		printf(" %d", 9);
		return 0;
	}
	else if (num % 2 == 0)
	{
		even(num);
	}
	else
	{
		printf(" %d", num + 1);
		odd(num +1);
	}
}
void even(int num)
{
	printf(" %d", num - 1);
	odd(num +1 );
}