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
//extern int g_val;//��������
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
//	int arr1[10] = { 0 };//ʮ��Ԫ��
//	const int n = 10;//const���κ�nΪ������
//	int arr2[n] = { 0 };//�Ա���
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 0 };//ʮ��Ԫ��
//	int n = 10;
//	int arr2[n] = { 0 };//����
//	//n�Ǳ�������������Ӧ������ʱ���
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
//enum Sex//enumΪö�ٹؼ���
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	//�˴�s�Ŀ���ȡֵֻ������
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



//շת����������Լ��

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



//��ӡ1000�굽2000��֮�������

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



//дһ�����룺��ӡ100~200֮�������

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


//�����������е����⣿��

/*
˼·��
������������������1���Լ�֮�⣬��û��������Լ�����������Ϊ���������巽ʽ����
*/


//����һ���Գ���
int main()
{
	int i = 0;
	int count = 0;


	// ���ѭ��������ȡ100~200֮����������ݣ�100�϶��������������i��101��ʼ
	for (i = 101; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ��������[2, i)֮���ÿ������ȥ��i����ֻҪ��һ�����Ա���������������
		int j = 0;
		for (j = 2; j<i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}

		// ����ѭ������֮�����j��i��ȣ�˵��[2, i��֮����������ݶ����ܱ�i��������iΪ����
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}


//����������ȱ�ݣ�����iһ������ݣ��϶�����i�ı������������������û����������㣬��˿��Բ�������
// ��ʽ�����Ż�
// ��������ÿ�õ�һ�����ݣ�ֻ��Ҫ����䣺[2, i/2]�������Ƿ���Ԫ�ؿ��Ա�2i�������ɣ�����˵��i��������
int main()
{
	int i = 0;//
	int count = 0;


	for (i = 101; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
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
���������ǰ�����һЩ�ظ������ݣ����Ż���
���i�ܹ���[2, sqrt(i)]֮�������������������i��������
ԭ����� m �ܱ� 2 ~ m-1 ֮����һ������������������ӱض���һ��С�ڻ����sqrt(m)����һ�����ڻ���� sqrt(m)��
*/
int main()
{
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
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


//����4
/*
�����Է������Ż���ֻҪi����[2, sqrt(i)]֮����κ�������������i������������ʵ���ڲ���ʱi���ô�101�𽥵�����200����Ϊ����2��3֮�⣬�����������������ڵ�����ͬʱΪ����
*/


int main()
{
	int i = 0;
	int count = 0;


	for (i = 101; i <= 200; i += 2)
	{
		//�ж�i�Ƿ�Ϊ����
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
