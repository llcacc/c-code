#include"game.h"
void menu()
{
	printf("*****************************\n");
	printf("********  1. play  **********\n");
	printf("********  0. quit  **********\n");
	printf("*****************************\n");

}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	display(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		display(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
			break;
		computermove(board, ROW, COL);
		display(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == 'O')
	printf("���Ӯ\n");
	else if (ret == 'X')
		printf("����Ӯ\n");
	else if (ret == 'p')
		printf("ƽ��\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}