#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//答案是16,sizeof(数组名)-计算的是数组总大小-单位是字节-4*4=16
//	printf("%d\n", sizeof(a + 0));//答案是4/8,数组名这里表示首元素地址,a+0还是首元素地址,地址的大小就是4或8个字节（32位平台是4个字节，64位平台是8个字节）
//	printf("%d\n", sizeof(*a));//答案是4,数组名这里表示首元素地址，*a就是首元素,sizeof（*a）就是4个字节
//	printf("%d\n", sizeof(a+1));//答案是4或8,数组名这里表示首元素的地址,a+1就是第2个元素的地址，地址的大小就是4或8个字节
//	printf("%d\n", sizeof(a[1]));//答案是4,第二个元素的大小
//	printf("%d\n", sizeof(&a));//答案是4或8,&a取出的是数组的地址,但数组的地址那也是地址,地址的大小就是4或8个字节
//	printf("%d\n", sizeof(*&a));//答案是16,&a数组的地址,数组的地址解引用访问数组,sizeof计算的大小就是数组的大小
//	printf("%d\n", sizeof(&a+1));//答案是4或8,&a是数组的地址,&a+1虽然地址跳过整个数组,但还是地址,大小是4或8个字节
//	printf("%d\n", sizeof(&a[0]));//答案是4或8,&a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//答案是4或8,&a[0]+1是第二个元素的地址
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr));//答案是6,sizeof计算的是数组的大小,6*1=6字节
//	printf("%d\n", sizeof(arr+0));//答案是4或8,arr是首元素的地址，arr+0还是首元素的地址,地址的大小是4或8个字节
//	printf("%d\n", sizeof(*arr));//答案是1,arr是首元素的地址,*arr就是首元素,首元素字符大小是一个字节
//	printf("%d\n", sizeof(arr[1]));//答案是1
//	printf("%d\n", sizeof(&arr));//答案是4或8,&arr虽然是数组的地址，但也是地址,地址大小是4或8个字节
//	printf("%d\n", sizeof(&arr+1));//答案是4或8,&arr+1是跳过整个数组后的地址,地址大小是4或8个字节
//	printf("%d\n", sizeof(&arr[0]+1));//答案是4或8,第二个元素的地址
//	return 0;
//}
#include<assert.h>
//int my_strlen(const char *p)
//{
//	assert(p!=NULL);
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
#include<string.h>
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);
	reverse(arr+k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
int main()
{
	char arr[] = "abcdefg";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}