//关于游戏相关的函数声明，符号声明，头文件包含

#include<stdio.h>

//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);