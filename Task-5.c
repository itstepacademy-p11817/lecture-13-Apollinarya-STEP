/*Пользователь вводит число.Определить количество цифр в этом числе, посчитать их сумму и среднее арифметическое.
Определить количество нулей в этом числе.Общение с пользователем организовать через меню*/

#include <stdio.h>
int length_of_num(int x)// kolichestvo cifr
{
	int length = 0;
	while (x > 0)
	{
		x /= 10;
		length++;
	}
	return length;
}

float operations_with_num(int num, int operation_number)
{
	int sum = 0;
	float average = 0.0;
	int del = 1; // delitel'
	int length = length_of_num(num); // podschet kolichestva cifr v chisle
	int count_zero = 0;
	for (int i = 1; i <= length; i++)
	{
		int remain = num / del % 10;
		if (remain == 0)
		{
			count_zero++; // nachislenie nulej
		}
		sum += remain; // vychislenie summy
		del *= 10;
	}
	average = sum / (length * 1.0); // vychislenie srednego arifmeticheskogo
	if (operation_number == 1)// vozvrat nuzhnogo znachenija v zavisimosti ot zaprosa pol'zovatel'a
	{
		return length;
	}
	else if (operation_number == 2)
	{
		return sum;
	}
	else if (operation_number == 3)
	{
		return average;
	}
	else if (operation_number == 4)
	{
		return count_zero;
	}
	return 0;
}

int main()
{
	int user_num = 1;
	while (user_num != 0)
	{
		printf("\n\nEnter your number (press \"0\" to exit) ");
		scanf_s("%d", &user_num);
		if (user_num == 0)
		{
			break;
		}
		int length = 1;
		int sum = 1;
		float average = 1.0;
		int count_zero = 1;
		int operation_num = 1;
		printf("\nIf you want to count length of your number press \"1\"\nIf you want to count sum of each digit in your number press \"2\"\n");
		printf("If you want to count average of digits in your number press \"3\"\nIf you want to count amount of zero digit in your number press \"4\"\n");
		printf("Operation number: ");
		scanf_s("%d", &operation_num);
		while (operation_num != 0)
		{
			if (operation_num == 1)
			{
				length = operations_with_num(user_num, operation_num);
				printf("\nLength: %d\n", length);
			}
			else if (operation_num == 2)
			{
				sum = operations_with_num(user_num, operation_num);
				printf("\nSum: %d\n", sum);
			}
			else if (operation_num == 3)
			{
				average = operations_with_num(user_num, operation_num);
				printf("\nAverage: %.2f\n", average);
			}
			else if (operation_num == 4)
			{
				count_zero = operations_with_num(user_num, operation_num);
				printf("\nZero: %d\n", count_zero);
			}
			else
			{
				printf("There is no such option. Try again or press \"0\" to exit");
				scanf_s("%d", &operation_num);
				continue;
			}
			printf("\nDo you want to count something else? (press \"0\" to exit) ");
			scanf_s("%d", &operation_num);
		}
	}

	getchar(); getchar();
	return 0;
}