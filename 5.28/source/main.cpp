#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	char char1, char2;

	printf("����^��r���j�p�g�ഫ\n");
	printf("�п�J�@�^��r��:");
	scanf("%c", &char1);

	if (char1 >= 97 && char1 <= 122) 
	{
		char2 = char1 - 32;
		printf("�ഫ���j�g��%c\n", char2);
	}
	else if (char1 >= 65 && char1 <= 90) 
	{
		char2 = char1 + 32;
		printf("�ഫ���p�g��%c\n", char2);
	}
	else 
	{
		printf("�������@�^��r��\n");
	}


	system("pause");
	return 0;
}