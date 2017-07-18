
#include <stdio.h>

int checking_num(int num)
{
	int x1 = num / 1000 % 10;
	int x2 = num / 100 % 10;
	int x3 = num / 10 % 10;
	int x4 = num % 10;

	if (x1 == x2 && x1 != x3 && x1 != x4 && x3 != x4)
	{
		return 1;
	}
	else if (x1 == x3 && x1 != x2 && x1 != x4 && x2 != x4)
	{
		return 1;
	}
	else if	(x1 == x4 && x1 != x2 && x1 != x3 && x2 != x3)
	{
		return 1;
	}
	else if	(x2 == x3 && x2 != x1 && x2 != x4 && x1 != x4)
	{
		return 1;
	}
	else if	(x2 == x4 && x2 != x1 && x2 != x3 && x3 != x1)
	{
		return 1;
	}
	else if	(x3 == x4 && x3 != x1 && x3 != x2 && x2 != x1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main ()
{
	int num = 1000;
	int count = 0;
	while (num <= 9999)
	{
		count += checking_num(num);
		if (checking_num(num) == 1)
		{
			printf("%d\n", num);
		}
		num++;
	}
	printf("%d\n", count);// 3888
	


	getchar(); getchar();
	return 0;
}
