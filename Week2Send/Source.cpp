#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input_1,input_2;
	int input_3 = input_2 + input_1;
	scanf("%d %d", &input_1, &input_2);
	while (input_1 >= 0 && input_2 >= 0)
	{
		if (input_3 > 20)
		{
			printf(">< so much");
			return 0;
		}
		else
		{
			printf("-_- little bit");
			return 0;
		}
	}
	return 0;
}