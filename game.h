#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);
//打印棋盘
void displayboard(char board[ROW][COL], int row, int col);
//玩家下棋
void playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void computermove(char board[ROW][COL], int row, int col);
//判断输赢
char iswin(char board[ROW][COL], int row, int col);