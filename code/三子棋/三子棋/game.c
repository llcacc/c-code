#include"game.h"
void initboard(char board[ROW][COL],int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
			printf(" %c ",board[i][j]);
			if (j<col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("玩家走\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';
				break;
			}
			else
			{
				printf("坐标内有棋子\n");
			}
		}
		else
		{
			printf("坐标错误\n");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{	
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
			{
				board[x][y] = 'X';
				break;
			}
	}
}
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] != ' ')
		{
			return board[i][j + 2];
		}
	}
	for (j = 0; j < col; j++)
	{
		int i = 0;
		if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 2][j] != ' ')
		{
			return board[i + 2][j];
		}
	}
	for (i = 0; i < row; i++)
	{
		j = i;
		if (board[i][j] != ' '&&board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1]==board[i + 2][j + 2])
		{
			return board[i][j];
		}
	}
	for (i = 0; i < row; i++)
	{
		if (board[i][row - 1] == board[i + 1][row - 2] && board[i + 1][row - 2] == board[i + 2][row - 3] && board[i][row - 1] != ' ')
		{
			return board[i][row - 1];
		}
	}
	if (isfull(board, row, col) == 1)
	{
		return 'p';
	}
	else
		return 'c';
}
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}