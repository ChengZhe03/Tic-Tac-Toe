#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);
//��ӡ����
void displayboard(char board[ROW][COL], int row, int col);
//�������
void playermove(char board[ROW][COL], int row, int col);
//��������
void computermove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char iswin(char board[ROW][COL], int row, int col);