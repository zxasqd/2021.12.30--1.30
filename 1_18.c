#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	int a = 1;
//	while (a--)
//	{
//		printf("%d\n",a);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,4,3,5 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "hello";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* pp1, const char* pp2)
//{
//	assert(pp1 && pp2);
//	while (pp1 == pp2)
//	{
//		if (pp1 == '\0')
//		{
//			return 0;
//		}
//		pp1++;
//		pp2++;
//	}
//	if (*pp1 > *pp2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "qwer";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (count)
//	{
//		count--;
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (count)
//	{
//		count--;
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "hello";
//	char arr2[] = "bit";
//	my_strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strncmp(char* p1, char* p2, size_t count)
//{
//	assert(p1 && p2);
//	while (count)
//	{
//		count--;
//		while (*p1 == *p2)
//		{
//			if (p1 == '\0')
//			{
//				return 0;
//			}
//			p1++;
//			p2++;
//		}
//		if (*p1 > *p2)
//			return 1;
//		else
//			return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abert";
//	int ret=my_strncmp(arr1, arr2, 3);
//	if (ret == 0)
//		printf("相等\n");
//	else if (ret > 0)
//		printf("arr1大\n");
//	else
//		printf("arr2大\n");
//	return 0;
//}
//
//int main()
//{
//	char a = 'C';
//	char c = tolower(a);
//	printf("%c\n", c);
//	return 0;
//}
//
//int main()
//{
//	char* p1 = "abcdefgabcdefg";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("字符串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1==*s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (p2 == '\0')
//		return (char*)p1;
//	while (cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("找不到\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}