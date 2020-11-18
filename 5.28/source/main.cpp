#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	char char1, char2;

	printf("執行英文字元大小寫轉換\n");
	printf("請輸入一英文字元:");
	scanf("%c", &char1);

	if (char1 >= 97 && char1 <= 122) 
	{
		char2 = char1 - 32;
		printf("轉換的大寫為%c\n", char2);
	}
	else if (char1 >= 65 && char1 <= 90) 
	{
		char2 = char1 + 32;
		printf("轉換的小寫為%c\n", char2);
	}
	else 
	{
		printf("此不為一英文字元\n");
	}


	system("pause");
	return 0;
}