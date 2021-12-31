#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//	char arr[] = "abcdefg";
//	char* p = arr;
//	*p = 'w';
//	printf("%s", p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	return 0;
//}
//char* (*pa)[5]
//int main()
//{
//	char arr[] = "abcdefg";
//	char* pc = arr;
//	printf("%s", arr);
//	printf("%s", pc);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdefg";
//	const char* p1 = "abcdefg";
//	const char* p2 = "abcdefg";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* p[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",*(p[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,9,10 };
//	int(*p)[10] = arr;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ",p[i][j]);
//			//printf("%d",*(p[i] + j));
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//void hannuo(int a, int one, int two,int three)
//{
//	if (a == 1)
//	{
//		printf(" %c->%c ", one, three);
//	}
//	else
//	{
//		hannuo(a - 1, one, three, two);
//		printf(" %c->%c ", one, three);
//		hannuo(a - 1, two, one, three);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	hannuo(a,'A','B','C');
//	return 0;
//}
//int jump(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return jump(n - 2) + jump(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count=jump(n);
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int* p = &a;
//	if (*p == 1)
//	{
//		printf("xiao¶Ë\n");
//	}
//	else
//	{
//		printf("da¶Ë\n");
//	}
//	return 0;
//}
//int get(int a)
//{
//	int n = 0;
//	int count=0;
//	for (n = 0; n < 32; n++)
//	{
//		if (((a >> n) & 1) == 1)
//		{
//			count++;
//		}		
//	}
//	return count;
//}
//int get(int a)
//{
//	int count = 0;
//	while(a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=get(a);
//	printf("%d", count);
//	return 0;
//}
//int dree(int a, int b)
//{
//	int tmp = a ^ b;
//	int i = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int count=dree(a, b);
//	printf("%d\n", count);
//	return 0;
//}
//void get(int a)
//{
//	int i = 0;
//	printf("ÆæÊı:");
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		printf("%d ", (a>> i) & 1);
//	}
//	printf("\n");
//	printf("Å¼Êı:");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	get(a);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("%d ", arr1[2]);
//	printf("%d ", arr2[2]);
//	return 0;
//}
