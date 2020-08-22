#include<stdio.h>
int main()
{
	int a, b, c, N;


	printf("Enter your collect point :",&a);
	scanf_s("%d", &a);
	printf("Enter your midterm scaore :",&b);
	scanf_s("%d", &b);
	printf("Enter your final term score : ",&c);
	scanf_s("%d", &c);
	int sum;

	sum = a + b + c;

	N = sum;


	if (N >= 80)
	{
		printf("Your Grade is A!!");
	}
	else
	{
		if (N <= 79 && N >= 75)
		{
			printf("Your Grade is B+!!");
		}
		else
		{
			if (N <= 74 && N >= 70)
			{
				printf("Your Grade is B!!");

			}
			else
			{
				if (N <= 69 && N >= 65)
				{
					printf("Your Grade is C+!!");
				}
				else
				{
					if (N <= 64 && N >= 60)
					{
						printf("Your Grade is C!!");
					}
					else
					{
						if (N <= 59 && N >= 55)
						{
							printf("Your Grade is D+!!");

						}
						else
						{
							if (N <= 54 && N >= 50)
							{
								printf("Your Grade is D!!");
							}
							else
							{
								printf("Your Grade is F!!");
							}

						}
					}
				}
			}
		}
	}
	return 0;
}




























	