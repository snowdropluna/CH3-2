#include <stdio.h>
#include <stdlib.h>
long recursive_function(int base, int exponent);

int main(void) 
{
	int a,b;
	//double ans;

	printf("請輸入ab兩數，將輸出a^b\n");
	scanf_s("%d,%d", &a, &b);


	printf("%d^%d = %d\n",a,b,recursive_function(a, b));

	system("pause");
	return 0;
}

long recursive_function(int base, int exponent)
{  
	if (exponent == 0) 
	{
		return 1;
	}
	else if (exponent == 1) 
	{
		return base;
	}
	else 
	{
		return base * recursive_function(base, exponent - 1);
	}
}