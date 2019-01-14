#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("*********1.play  *********\n");
	printf("*********0.quit  *********\n");
	printf("**************************\n");
}
void game()
{
	char board[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(board, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	display(show, ROW, COL );
	set(board, ROWS, COLS,Easy_count);
	display(board, ROW, COL);
	find(board, show, ROWS, COLS);
	

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu(); 
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
}