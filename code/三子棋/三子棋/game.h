#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3       //ÐÐ	 
#define COL 3        //ÁÐ
void initboard(char board[ROW][COL], int row, int col);
void display(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row,int col);
char iswin(char board[ROW][COL], int row, int col);
int isfull(char board[ROW][COL], int row, int col);



