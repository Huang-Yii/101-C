#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//
//	printf("%s\n", arr);
//
//	return 0;
//}



//实现一个函数，判断一个数是不是素数。
//
//利用上面实现的函数打印100到200之间的素数。

//	STANDARD ANSWER	:

//include<math.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (0 == n%i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

//MY ANSWER:

//#include<stdio.h>
//
//int judge(int a)
//{
//	int j = 0;
//	for (j = 2; j <= a / 2; j += 1)
//	{
//		if (a%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0, flag = 0,count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		flag = judge(i);
//		if (flag)
//		{
//			count++;
//			printf("%4d", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//函数判断1000~2000的闰年，打印
//
//#include<stdio.h>
//int is_leap_year(int n)
//{
//	//最简单的写法
//	//return((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//	if (n % 4 != 0)
//		return 0;
//	else if (n % 100 != 0)
//		return 1;
//	else if (n % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int y = 0,count=0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\n%d\n", count);
//}

//#include"sub.h"
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n",sub(a, b));
//
//	return 0; 
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}



//#include<stdio.h>
//int judge(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//
//{
//	int n = 0;
//	int flag = 0;
//	scanf("%d", &n);
//	flag = judge(n);
//	if (flag)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//实现一个函数来交换两个整数的内容。

//#include<stdio.h>
//void exchange(int *x, int *y)
//{
//	int t = 0;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange(&a,&b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。


//#include<stdio.h>
//void print_table(int a)
//{
//	int j = 0;
//	int i = 0;
//	int mul = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			mul = j*i;
//			printf("%5d*%d=%d", j, i, mul);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}


//递归方式实现打印一个整数的每一位

//#include<stdio.h>
//
//void print_digit(int n)
//{
//	if (n > 9)
//	{
//		print_digit(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print_digit(num);
//
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//#include<stdio.h>
//int a = 1;
//int factorial(int num)
//{
//	if (num > 1)
//	{
//		a *= num;
//		return factorial(num - 1);
//	}
//	return a;
//}
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//
//	sum = factorial(n);
//	printf("%d! = %d\n", n, sum);
//
//	return 0;
//}


//#include<stdio.h>
//int a = 1;
//int factorial(int num)
//{
//	while(num>1)
//	{
//		a *= num;
//		num--;
//	}
//	return a;
//}
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//
//	sum = factorial(n);
//	printf("%d! = %d\n", n, sum);
//
//	return 0;
//}



//递归和非递归分别实现strlen

//#include<stdio.h>
//int my_strlen(char *a)
//{
//	int count = 0;
//	for (; *a != '\0'; a++)
//		count++;
//	return count;
//}
//
//int main()
//{
//	char a[20] = { '\0' };
//	gets(a);
//
//	printf("count = %d\n", my_strlen(a));
//
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char *a)
//{
//	static int count = 0;
//	static int i = 1;
//	if (*a != '\0')
//	{
//		my_strlen(a+i);
//		count++;
//		i++;
//	}
//	return count;
//}
//
//int main()
//{
//	char a[20] = { '\0' };
//	//gets(a);
//	scanf("%s", a);
//	printf("count = %d\n", my_strlen(a));
//
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。

//#include<stdio.h>
//void reverse_string(char *a, int b)
//{
//	static int j = 0, t = 0;
//	if (j < b)
//	{
//		t = a[j];
//		a[j] = a[b];
//		a[b] = t;
//		j++; b--;
//		reverse_string(a, b);
//	}
//}
//int my_strlen(char *a)
//{
//	static int count = 0;
//	static int i = 1;
//	if (*a != '\0')
//	{
//		my_strlen(a+i);
//		count++;
//		i++;
//	}
//	return count;
//}
//int main()
//{
//	char a[20] = { '\0' };
//	scanf("%s", a);
//	reverse_string(a, my_strlen(a) - 1);
//	printf("%s\n", a);
//
//	return 0;
//}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//#include<stdio.h>
//int DigitSum(int n)
//{
//	static sum = 0;
//	sum += n % 10;
//	if (n > 9)
//	{
//		DigitSum(n / 10);
//	}
//
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", DigitSum(a));
//
//	return 0;
//}



//编写一个函数实现n的k次方，使用递归实现。

//#include<stdio.h>
//int Fun(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n*Fun(n, k - 1);
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", Fun(n, k));
//
//	return 0;
//}



//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//
//	return 0;
//}

#include<stdio.h>
int Fib(int n)
{
	int a = 1, b = 1, c = 0;
	if (n <= 2)
		return 1;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Fib(n));

	return 0;
}