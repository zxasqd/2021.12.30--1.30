#define _CRT_SECURE_NO_WARNINGS 1prin

#include<stdio.h>

//int main()
//{
//	//strlen
//	if (strlen("abc") - strlen("abcdefg") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

#include<assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//strcat
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr1,sizeof(arr1));
//	printf("%s\n", arr1);
//	return 0;
//}
//
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	int ret = *dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//strcmp
#include<string.h>

//int main()
//{
//	char* p1 = "qbc";
//	char* p2 = "abc";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

char my_strcmp(char* p1, char* p2)
{

}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "qwert";
	int ret = my_strcmp(arr1,arr2);
	printf("%d\n", ret);
	return 0;
}