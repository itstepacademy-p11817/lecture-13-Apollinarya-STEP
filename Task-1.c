#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int a = 1;
	int answer = 1;
	int level = 1;

	while (a == 1)
	{
		int mistake = 0;
		//Level
		int x = 1;
		printf("Enter your level ");
		scanf_s("%d", &level);
		if (level == 0)
		{
			break;
		}
		for (int i = 1; i <= level; i++)
		{
			x *= 10;
		}
		int num1 = rand() % x + 1;
		int num2 = rand() % x + 1;
		int result = (num1 * num2);
		//task
		printf("Number one is %d     Number two is %d\n", num1, num2);

		while (answer != result)
		{
			printf("Enter your answer: ");
			scanf_s("%d", &answer);
			if (answer == 0)
			{
				break;
			}
			else if (answer == result)
			{
				printf("You are right.\nNumber of mistakes: %d\n\n\n", mistake);
			}
			else
			{
				mistake++;
				printf("Try again.\n");
			}
		}
	}

	getchar(); getchar();
	return 0;
}

