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


//��n�Ľ׳�
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


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

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


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����

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

//�Ž⣺
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



//��10 �����������ֵ

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



//�˷��ھ���

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


//��������Ϸ

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
	//1.���������
	//����rand����
	int ret = rand() % 100 + 1;
	int num = 0;
	//2.������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if (num > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��С��\n");
		}
	}
}


int main()
{
	int input = 0;
	//����srand����
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
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
//	//��������Ϸ��ʵ��
//	//1�����������
//	//rand����������һ��0-32767֮�������
//	//��srand�����������ȥѡȡrand�з��ص������
//	//srand���� ʱ��� ʵ�������������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//
//	//2��������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else if (guess>ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//���ֲ���

//THE ANSWER:

//// ������������[left, right) ����
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); // rightλ�õ�����ȡ����
//
//	while (left<right) // rightλ��û�����ݣ��˴�����Ҫ���=
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid]>key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
//		{
//			right = mid; // rightλ�õ�����ȡ���������right=mid������Ҫ��1
//		}
//		else if (arr[mid]<key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
//		{
//			left = mid + 1; // leftλ�õ����ݿ���ȡ�������left=mid+1
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//
//	if (left >= right)
//		printf("�Ҳ���\n");
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left >= right)
//		printf("�Ҳ���\n");
//	return 0;
//}