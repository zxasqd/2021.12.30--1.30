#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//����16,sizeof(������)-������������ܴ�С-��λ���ֽ�-4*4=16
//	printf("%d\n", sizeof(a + 0));//����4/8,�����������ʾ��Ԫ�ص�ַ,a+0������Ԫ�ص�ַ,��ַ�Ĵ�С����4��8���ֽڣ�32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽڣ�
//	printf("%d\n", sizeof(*a));//����4,�����������ʾ��Ԫ�ص�ַ��*a������Ԫ��,sizeof��*a������4���ֽ�
//	printf("%d\n", sizeof(a+1));//����4��8,�����������ʾ��Ԫ�صĵ�ַ,a+1���ǵ�2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4��8���ֽ�
//	printf("%d\n", sizeof(a[1]));//����4,�ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));//����4��8,&aȡ����������ĵ�ַ,������ĵ�ַ��Ҳ�ǵ�ַ,��ַ�Ĵ�С����4��8���ֽ�
//	printf("%d\n", sizeof(*&a));//����16,&a����ĵ�ַ,����ĵ�ַ�����÷�������,sizeof����Ĵ�С��������Ĵ�С
//	printf("%d\n", sizeof(&a+1));//����4��8,&a������ĵ�ַ,&a+1��Ȼ��ַ������������,�����ǵ�ַ,��С��4��8���ֽ�
//	printf("%d\n", sizeof(&a[0]));//����4��8,&a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1));//����4��8,&a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr));//����6,sizeof�����������Ĵ�С,6*1=6�ֽ�
//	printf("%d\n", sizeof(arr+0));//����4��8,arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ,��ַ�Ĵ�С��4��8���ֽ�
//	printf("%d\n", sizeof(*arr));//����1,arr����Ԫ�صĵ�ַ,*arr������Ԫ��,��Ԫ���ַ���С��һ���ֽ�
//	printf("%d\n", sizeof(arr[1]));//����1
//	printf("%d\n", sizeof(&arr));//����4��8,&arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ,��ַ��С��4��8���ֽ�
//	printf("%d\n", sizeof(&arr+1));//����4��8,&arr+1���������������ĵ�ַ,��ַ��С��4��8���ֽ�
//	printf("%d\n", sizeof(&arr[0]+1));//����4��8,�ڶ���Ԫ�صĵ�ַ
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