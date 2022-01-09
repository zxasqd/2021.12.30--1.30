#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int i, sum;
//	for (i = 1; i < 6; i++)
//	{
//		sum += i;
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a > 50)
//	    printf("%d", a);
//	if (a > 40)
//		printf("%d", a);
//	if (a > 30)
//		printf("%d", a);
//	return 0;
//}
//int main()
//{
//	char c = 'A';
//	if ('0' <= c <= '9')
//		printf("yES");
//	else
//		printf("NO");
//	return 0;
//}
//int main()
//{
//	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, * p[4], i;
//	for (i = 0; i < 4; i++)
//		p[i] = &a[i * 3];
//	printf("%d\n", p[3][2]);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 20)
//	{
//		printf("%d", a);
//	}
//	else if (a > 10)
//	{
//		printf("%d", a);
//	}
//	else if(a>0)
//	{
//		printf("%d", a);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
////1
//11
//121
//1331
//14641
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}
