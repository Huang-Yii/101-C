#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�������������ð������

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



//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

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



//������A�е����ݺ�����B�е����ݽ��н�����������һ����

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