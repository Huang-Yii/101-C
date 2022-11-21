#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//
//	return 0;
//}




//#include<stdio.h>
//
//extern int g_val;//声明变量
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	const int num = 10;
//	num = 20;
//	printf("num=%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 0 };//十个元素
//	const int n = 10;//const修饰后，n为常变量
//	int arr2[n] = { 0 };//仍报错
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 0 };//十个元素
//	int n = 10;
//	int arr2[n] = { 0 };//报错
//	//n是变量，方括号内应填常量，故报错
//	return 0;
//}

//#include<stdio.h>
//#define MAX 10000
//int main()
//{
//	int n = MAX;
//	printf("n=%d\n", n);
//	return 0;
//}

//#include<stdio.h>
//enum Sex//enum为枚举关键字
//{
//	//这种枚举类型的变量的未来可能取值
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	//此处s的可能取值只有三种
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello";
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//
//
//	return 0;
//}



//辗转相除法求最大公约数

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d %d", &a, &b);
//
//	while (c!=0)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", a);
//	return 0;
//}



//打印1000年到2000年之间的闰年

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//
//	for (i = 1000; i <= 2000; i+=4)
//	{
//		if (i % 100 != 0)
//			printf("%d  ", i);
//	}
//
//	return 0;
//}



//写一个代码：打印100~200之间的素数

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 100;
//	int flag = 1;
//	for (a = 100; a <= 200; a++)
//	{
//		flag = 1;
//		for (i = 2; i < a; i++)
//		{
//			if (a%i == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//			printf("%d ", a);
//	}
//	return 0;
//}


//解析（好像有点问题？）

/*
思路：
素数：即质数，除了1和自己之外，再没有其他的约数，则该数据为素数，具体方式如下
*/


//方法一：试除法
int main()
{
	int i = 0;
	int count = 0;


	// 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
	for (i = 101; i <= 200; i++)
	{
		//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
		int j = 0;
		for (j = 2; j<i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}

		// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}


//上述方法的缺陷：超过i一半的数据，肯定不是i的倍数，上述进行了许多没有意义的运算，因此可以采用如下
// 方式进行优化
// 方法二：每拿到一个数据，只需要检测其：[2, i/2]区间内是否有元素可以被2i整除即可，可以说明i不是素数
int main()
{
	int i = 0;//
	int count = 0;


	for (i = 101; i <= 200; i++)
	{
		//判断i是否为素数
		//2->i-1
		int j = 0;
		for (j = 2; j <= i / 2; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		//...
		if (j>i / 2)
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}




/*
方法二还是包含了一些重复的数据，再优化：
如果i能够被[2, sqrt(i)]之间的任意数据整除，则i不是素数
原因：如果 m 能被 2 ~ m-1 之间任一整数整除，其二个因子必定有一个小于或等于sqrt(m)，另一个大于或等于 sqrt(m)。
*/
int main()
{
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i++)
	{
		//判断i是否为素数
		//2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		//...
		if (j>sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}


//方法4
/*
继续对方法三优化，只要i不被[2, sqrt(i)]之间的任何数据整除，则i是素数，但是实际在操作时i不用从101逐渐递增到200，因为出了2和3之外，不会有两个连续相邻的数据同时为素数
*/


int main()
{
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数
		//2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		//...
		if (j>sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\ncount = %d\n", count);
	return 0;
}
