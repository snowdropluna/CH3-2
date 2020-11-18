#include <stdio.h>
#include<stdlib.h>

void hanoi_tower(int disk, char peg1, char peg2, char peg3);

int main(void) 
{
	int a;
	printf("請輸入有幾個磁盤:");
	scanf_s("%d", &a);

	hanoi_tower(a, 'A', 'B', 'C');

	system("pause");
	return 0;
}
void hanoi_tower(int disk, char peg1, char peg2, char peg3)
{
	if (disk == 1)
	{
		printf("移動1個圓盤，從%c移動到%c\n", peg1, peg3);
	}
	else 
	{
		hanoi_tower(disk - 1, peg1, peg3, peg2);
		printf("移動1個圓盤，從%c移動到%c\n", peg1, peg3);
		hanoi_tower(disk - 1, peg2, peg1, peg3);
	}

}