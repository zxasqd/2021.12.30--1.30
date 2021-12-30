#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 6;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	float f = 5.5;
//
//
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
////}
//void maopao(int arr[], int sz)
//{
//	int n = 0;
//	for (n = 0; n <= sz - 1; n++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - n; j++)
//		{
//			if (arr[j] >arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int get(int a)
//{
//	int i = 0;
//	int count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=get(a);
//	printf("%d\n", count);
//	return 0;
//}
//int get(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=get(a);
//	printf("%d\n", count);
//	return 0;
//}
//void hannuo(int n, char one, char two, char three)
//{
//	if (n == 1)
//	{
//		printf(" %c->%c ", one, three);
//	}
//	else
//	{
//		hannuo(n - 1, one, three, two);
//		printf(" %c->%c ", one, three);
//		hannuo(n - 1, two, one, three);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hannuo(n, 'A', 'B', 'C');
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
//		return jump(n - 1) + jump(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count=jump(n);
//	printf("%d\n", count);
//	return 0;
//}
//int free(int a, int b)
//{
//	int tmp = a ^ b;
//	int count=0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int count=free(a, b);
//	printf("%d", count);
//	return 0;
//}
/*void print(int m)
{
	int i = 0;
	printf("奇数位:\n");
	for (i = 31; i >= 1; i = i - 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("偶数位:\n");
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");

}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	r*///eturn 0;
//}
//int main()
//{
//	int a = -1;
//	printf("%d\n", a >>8);
//	return 0;
//}
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + my_strlen(p+1);
//	}
//	else
//	   return 0;
//}
//void fan(char arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";	
//	int n=my_strlen(arr);
//	fan(arr,n);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	char* p = (char*) & a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int panduan()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int a = panduan();
//	if (a == 0)
//	{
//		printf("大端\n");
//	}
//	else
//	{
//		printf("小端\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	int ret = 1;
//	int sum = 0;
//	for (a = 1; a <= 3; a++)
//	{
//		ret = ret * a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//无符号char的类型是0--255
//有符合char的类型是-128--127
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟内关机，输入我是猪，可取消关机,请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}