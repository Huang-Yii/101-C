#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int f1(int x) {
	x++;
	return x;
}
void f2(int s[], int len) {
	s[0] = 99;
}
void main() {
	int x = 12;
	int y = f1(x);

	int arr[] = { 11,22,33,44,55 };
	f2(arr,5);

	int c = 1;
	system("pause");
}