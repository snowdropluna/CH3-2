#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(int n);

int main(void) 
{
	unsigned int parameter;
	 
	printf("�п�J�n��X�X�����O���ƦC:");
	scanf_s("%d", &parameter);

	

	printf("\n���t�ί��X���̤j�O���ƦC�Ȭ�%d", fibonacci(parameter));

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