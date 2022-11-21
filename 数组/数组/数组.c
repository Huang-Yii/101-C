#define _CRT_SECURE_NO_WARNINGS 1

//实现一个对整形数组的冒泡排序

//#include<stdio.h>
//void Sort(int a[],int n)
//{
//	int i = 0, j = 0, t = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 1; j < n - i;j++)
//		if (a[j] < a[j - 1])
//		{
//			t = a[j - 1];
//			a[j - 1] = a[j];
//			a[j] = t;
//		}
//	}
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	Sort(a, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//	return 0;
//}



//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//#include<stdio.h>
//void init(int a[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//		a[i] = 0;
//}
//void print(int a[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//}
//void reverse(int a[], int n)
//{
//	int i = 0, t = 0;
//	while (i < n)
//	{
//		t = a[i];
//		a[i] = a[n - 1];
//		a[n - 1] = t;
//		i++; n--;
//	}
//}
//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	reverse(a, 10);
//	print(a, 10);
//	init(a, 10);
//	print(a, 10);
//	return 0;
//}



//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

void Exchange(char a[], char b[])
{
	int i = 0, t = 0;
	for (i = 0; a[i] != '\0' || b[i] != 0; i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
}
int main()
{
	char m[20] = "congratulations";
	char n[20] = "hello";
	Exchange(m, n);
	printf("m = %s\nn = %s\n", m, n);

	return 0;
}