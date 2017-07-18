#include <stdio.h>

int length_of_num(long long x)// kolichestvo cifr
{
	int length = 0;
	while (x > 0)
	{
		x /= 10;
		length++;
	}
	return length;
}

long long removing(int x, int y, long long num) // nahozhdenie i udalenie 3 i 6 v dannom sluchae
{
	long long result = 0;
	long long del = 1; // delitel'
	long long mult = 1; // peremennaja dl'a umnozhenija ostatka
	int condition_minus = 0; // opredelenie znaka chisla i privedenie k polozhitel'nomu
	if (num < 0)
	{
		num *= -1;
		condition_minus = 1;
	}
	int length = length_of_num(num); // podschet kolichestva cifr v chisle
	for (int i = 1; i <= length; i++)
	{
		int remain = num / del % 10;
		if (remain != 3 && remain != 6)
		{
			result += remain * mult; // ostatok umnozhaets'a na mnozhtel' mult i pribavl'aets'a k rezultatu
			mult *= 10; // uvelichivaets'a dl'a sledujushego chisla
		}
		del *= 10;
	}
	if (condition_minus == 1) // vozvrat znaka
	{
		result *= -1;
	}
	return result;
}

int main()
{
	int a = 1;
	long long user_number = 1;
	while (a == 1)
	{
		printf("Enter number (max length = 19) ");
		scanf_s("%lli", &user_number);
		
		if (user_number == 0)//vyhod iz cikla
		{
			break;
		}
		printf("Number is %lli\n", removing(3, 6, user_number));// vypolnenie funkcii
	}
	getchar(); getchar();
	return 0;
}
