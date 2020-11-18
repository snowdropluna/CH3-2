#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(int n);

int main(void) 
{
	unsigned int parameter;
	 
	printf("請輸入要輸出幾次的費式數列:");
	scanf_s("%d", &parameter);

	

	printf("\n此系統能輸出的最大費式數列值為%d", fibonacci(parameter));

	puts("\n");
	system("pause");
	return 0;
}

unsigned long long int fibonacci(int n) 
{
	long long fib[50];
	int i;
	fib[0] = 0;
	fib[1] = 1;
	
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < n; i++)
	{
		printf("%d,", fib[i]);
	}
	return fib[47];
}