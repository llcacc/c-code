#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Easy_count 10
#define	ROWS 11
#define	COLS 11
#define	ROW 9
#define	COL 9
void initboard(char board[ROWS][COLS],int rows,int cols,char set);
void display(char board[ROWS][COLS], int rows, int cols);
void set(char[ROWS][COLS], int row, int col, int cou);
void find(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void open(char board[ROWS][COLS], char show[ROWS][COLS], int x, int y);



