#include <stdio.h>
#include <stdlib.h>
void LCM(int a, int b);
int ANS;
int main(void) 
{
	int a, b;
	
	printf("�п�J��ӼƱN��X��̤p������(LCM):");
	scanf("%d%d", &a, &b);

	LCM(a, b);
	printf("�̤p������(LCM)=%d\n",ANS);

	system("pause");
	return 0;
}

void LCM(int a, int b) 
{
	int i,GCD;
	if (a > b) 
	{
		for (i = 1; i <= b; i++) 
		{
			if (a%i == 0 && b%i == 0) 
			{
				GCD = i;
			}
		}
	}
	else 
	{
		for (i = 1; i <= a; i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				GCD = i;
			}
		}
	}

	ANS = a * b / GCD ;
}