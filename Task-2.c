#include <stdio.h>

int paint_string(int x)
{
	int space = 1;
	int step = 1;
	int half = 1;
	half = x / 2;
	step = half;
	space = half;
	if (x % 2 == 0)
	{
		space -= 1;
	}
	for (int i = 0; i <= x; i++)
	{
		for (int i1 = 0; i1 <= x; i1++)
		{
			if (i1 < space || i1 > step)
			{
				printf(" ");
			}
			else
			{
				printf("\44");
			}
		}
		if (x % 2 != 0 && i < half)
		{
			space--;
			step++;
		}
		else if (x % 2 == 0 && i < half - 1)
		{
			space--;
			step++;
		}
		else if (x % 2 == 0 && i >= half)
		{
			space++;
			step--;
		}
		else if (x % 2 != 0)
		{
			space++;
			step--;
		}
		printf("\n");
	}
}

int main()
{
	int a = 1;
	while (a == 1)
	{
		int x = 1;
		printf("Enter x: ");
		scanf_s("%d", &x);
		if (x == 0)
		{
			break;
		}
		paint_string(x);
	}
	getchar(); getchar();
	return 0;
}