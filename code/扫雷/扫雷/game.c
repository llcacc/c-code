#include"game.h"
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <=row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=row ; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void set(char board[ROWS][COLS], int row, int col, int cou)
{
	int x = 0;
	int y = 0;
	while (cou)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			cou--;
		}
	}
}
int fun(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y] + board[x - 1][y + 1] + board[x][y + 1] + board[x + 1][y + 1]
		+ board[x + 1][y] + board[x + 1][y - 1] + board[x][y - 1] + board[x - 1][y - 1] - 8*'0';
}
void open(char board[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (board[x][y + 1] == '0')
	{
 		int count = 0;
		count = fun(board, x, y + 1) + '0';
		if (count == '0')
		{
			show[x][y + 1] = ' ';
			open(board, show, x, y + 1);
		}
		else
		{
			show[x][x + 1] = count;
		}
	}
	//if (board[x - 1][y] == '0')
	//{
	//	int count = 0;
	//	count = fun(board, x - 1, y) + '0';
	//	if (count == '0')
	//	{
	//		show[x - 1][y] = ' ';
	//		/*open(board, show, x - 1, y);*/
	//	}
	//	else
	//	{
	//		show[x - 1][y] = count;
	//	}

	//}
	//if (board[x - 1][y + 1] == '0')
	//{
	//	int count = 0;
	//	count = fun(board, x - 1, y + 1) + '0';
	//	if (count == '0')
	//	{
	//		show[x - 1][y + 1] = ' ';
	//		/*open(board, show, x - 1, y);*/
	//	}
	//	else
	//	{
	//		show[x - 1][y + 1] = count;
	//	}
	//}

	//if (board[x + 1][y + 1] == '0')
	//{
	//	int count = 0;
	//	count = fun(board, x + 1, y + 1) + '0';
	//	if (count == '0')
	//	{
	//		show[x + 1][y + 1] = ' ';
	//		/*open(board, show, x + 1, y + 1);*/
	//	}
	//	else
	//	{
	//		show[x + 1][y + 1] = count;
	//	}
	//}
	//if (board[x + 1][y] == '0')
	//{
	//	int count = 0;
	//	count = fun(board, x + 1, y) + '0';
	//	if (count == '0')
	//	{
	//		show[x + 1][y] = ' ';
	//		open(board, show, x + 1, y);
	//	}
	//	else
	//	{
	//		show[x + 1][y] = count;
	//	}
	//}
	//if (board[x + 1][y - 1] == '0')
	//{
	//	int count = 0;
	//	count = fun(board, x + 1, y - 1) + '0';
	//	if (count == '0')
	//	{
	//		show[x + 1][y - 1] = ' ';
	//		/*open(board, show, x + 1, y-1);*/
	//	}
	//	else
	//	{
	//		show[x + 1][y - 1] = count;
	//	}

	//}
	//if (board[x - 1][y - 1] == '0')
	//{
	//	int count = 0;
	//	count = fun(board, x - 1, y - 1) + '0';
	//	if (count == '0')
	//	{
	//		show[x - 1][y - 1] = ' ';
	//		/*open(board, show, x - 1, y - 1);*/
	//	}
	//	else
	//	{
	//		show[x - 1][y - 1] = count;
	//	}	
	//}
	//if (board[x][y - 1] == '0')
	//{
	//	int count = 0;
	//	count = fun(board, x , y - 1) + '0';
	//	if (count == '0')
	//	{
	//		show[x ][y - 1] = ' ';
	//		/*open(board, show, x - 1, y - 1);*/
	//	}
	//	else
	//	{
	//		show[x ][y - 1] = count;
	//	}
	//}


}
void find(char board[ROWS][COLS],char show[ROWS][COLS],int row, int col)
{

	int x = 0;
	int y = 0;
	int win = ROW*COL-Easy_count;
	while (win)
	{
		printf("请输入要排查的坐标\n");
		scanf("%d%d", &x, &y);
		if (x<1 && x>row&&y<1 && y>col)
		{
			printf("坐标非法，重新输入\n");
		}
		else
		{
			if (board[x][y] == '1')
			{
				printf("你被炸死了\n");
				break;
			}
			else
			{
				int count = 0;
				count = fun(board, x, y) + '0';
				if (count == '0')
				{
					show[x][y] = ' ';
					open(board, show, x, y);
				}
				else
				{
					show[x][y] = count;
				}
				win--;
			}
		}
		display(show, ROW, COL);
	}
	
	if (win == 0)
	{
		display(show, ROW, COL);
		printf("恭喜你排雷成功\n");
		
	}
	
}
