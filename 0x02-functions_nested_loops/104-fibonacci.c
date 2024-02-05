#include"main.h"
#include<stdio.h>
int main(void)
{
	long double num1 = 1, num2 = 2, num3 = 0;
	int i = 0;

	while(i <= 96)
	{
		if (i == 0)
			printf("%.Lf, %.Lf, ",num1, num2);
	       num3 = num1 + num2;
	       if (i == 96)
	       {
		       printf("%.Lf\n", num3);
		       break;
	       }
	       printf("%.Lf, ", num3);
	       num1 = num2;
	       num2 = num3;
	       i++;
	}
	return (0);
}	
