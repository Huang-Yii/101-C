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



//ʵ��һ���������ж�һ�����ǲ���������
//
//��������ʵ�ֵĺ�����ӡ100��200֮���������

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


//�����ж�1000~2000�����꣬��ӡ
//
//#include<stdio.h>
//int is_leap_year(int n)
//{
//	//��򵥵�д��
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


//ʵ��һ�������������������������ݡ�

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


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���


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


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

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



//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

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


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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



//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

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



//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1

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