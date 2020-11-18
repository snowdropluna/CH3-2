#include <stdio.h>
#include<stdlib.h>

void hanoi_tower(int disk, char peg1, char peg2, char peg3);

int main(void) 
{
	int a;
	printf("�п�J���X�ӺϽL:");
	scanf_s("%d", &a);

	hanoi_tower(a, 'A', 'B', 'C');

	system("pause");
	return 0;
}
void hanoi_tower(int disk, char peg1, char peg2, char peg3)
{
	if (disk == 1)
	{
		printf("����1�Ӷ�L�A�q%c���ʨ�%c\n", peg1, peg3);
	}
	else 
	{
		hanoi_tower(disk - 1, peg1, peg3, peg2);
		printf("����1�Ӷ�L�A�q%c���ʨ�%c\n", peg1, peg3);
		hanoi_tower(disk - 1, peg2, peg1, peg3);
	}

}