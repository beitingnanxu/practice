#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<Windows.h>
#include<time.h>
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	int guess;
	while (1)
	{
		printf("�������\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("small\n");
		}
		else if (guess > ret)
		{
			printf("big\n");
		}
		else
		{
			printf("right\n");
			break;
		}
	}
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("haha");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}