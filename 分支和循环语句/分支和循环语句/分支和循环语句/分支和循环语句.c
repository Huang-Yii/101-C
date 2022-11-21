#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n=0,num=0;
//	int i = 0, b = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		b *= i;
//		num += b;
//	}
//	printf("%d\n", num);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[3];
//	int i = 0, j = 0, max = 0;
//	max = arr[0];
//	for (i = 0; i < 3; i++)
//		scanf("%d", &arr[i]);
//	for (j = 0; j < 2; j++)
//	{
//		for (i = 0; i < 2;i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				max = arr[i+1];
//				arr[i + 1] = arr[i];
//				arr[i] = max;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//求n的阶乘
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a = 1;
//	int i = 0;
//	int arr[20] = { 0 };
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		a *= i;
//
//	printf("%d", a);
//
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int g = 0;
//	int s = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		g = i % 10 % 10;
//		s = i / 10 % 10;
//		if (g == 9)
//		{
//			count++;
//		}
//		else if (s == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果

//#include<stdio.h>
//int main()
//{
//	float a = -1;
//	float b = 0;
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < 100; i++)
//	{
//		a = -a;
//		b += 1;
//		sum += a / b;
//	}
//	printf("%f\n", sum);
//
//	return 0;
//}

//优解：
//#include <stdio.h>
//
//
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//求10 个整数中最大值

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	int max = a[0];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i]>max)
//			max = a[i];
//	}
//	printf("%d\n", max);
//
//	return 0;
//}



//乘法口诀表

//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%d ",j,i,i*j);
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}


//猜数字游戏

//THE ANSWER:

#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("********************************\n");
	printf("*******     1. play      *******\n");
	printf("*******     0. exit      *******\n");
	printf("********************************\n");
}


void game()
{
	//RAND_MAX-32767
	//1.生成随机数
	//讲解rand函数
	int ret = rand() % 100 + 1;
	int num = 0;
	//2.猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else if (num > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
		}
	}
}


int main()
{
	int input = 0;
	//讲解srand函数
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}


//MY ANSWER:

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("***************************\n");
//	printf("********* 1.play **********\n");
//	printf("********* 0.exit **********\n");
//	printf("***************************\n");
//}
//void game()
//{
//	//猜数字游戏的实现
//	//1）生成随机数
//	//rand函数返回了一个0-32767之间的数字
//	//用srand再生成随机数去选取rand中返回的随机数
//	//srand运用 时间戳 实现随机数的生成
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//
//	//2）猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else if (guess>ret)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//二分查找

//THE ANSWER:

//// 方法二，采用[left, right) 区间
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); // right位置的数据取不到
//
//	while (left<right) // right位置没有数据，此处不需要添加=
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid]>key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
//		{
//			right = mid; // right位置的数据取不到，因此right=mid，不需要减1
//		}
//		else if (arr[mid]<key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
//		{
//			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left >= right)
//		printf("找不到\n");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 0, mid = 0;
//	int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &n);
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid]<n)
//		{
//			left = mid;
//		}
//		else if (arr[mid]>n)
//		{
//			right = mid;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left >= right)
//		printf("找不到\n");
//	return 0;
//}