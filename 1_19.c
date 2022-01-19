#define _CRT_SECURE_NO_WARNINGS 1


#include<assert.h>
#include<stdio.h>
#include<string.h>

//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, char* src)
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

//int my_strcmp(constchar* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		p1++;
//		p2++;
//	}
//	if (*p1 == '\0')
//		return 0;
//	if (*p1 > *p2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdfe";
//	int ret=my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}


//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)dest;
//	while (*src == '\0')
//		return (char*)dest;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)src;
//		while (s1 && s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "def";
//	char* ret=my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}
//menmcpy
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 9,8,7,6,5,4,3 };
//	memcpy(arr1, arr2,8);
//	printf("%d\n", arr1);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[]={ 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"张三",20},{"李四",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4,arr3,sizeof(arr3));
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, sizeof(arr1));
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	char arr[10] = " ";
//	memset(arr, '%', 8);
//	return 0;
//}
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;		
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr[] = { 1,2         ,8,9,10 };
//	//                  ,3,4,5,6,7
//	//                   1,2,3,4,5
//	//3,4,5,6,7,6,7,8,9,10
//	my_memmove(arr + 2, arr, 20);
//	printf("%d\n", arr[2]);
//	return 0;
//}
