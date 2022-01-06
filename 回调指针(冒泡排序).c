#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include<stdlib.h>
//int int_cmp(const void* p1, const void* p2)
//{
//    if (*(int*)p1 > *(int*)p2)
//    {
//        return 1;
//    }
//    else if (*(int*)p1 == *(int*)p2)
//    {
//        return 0;
//    }
//    else
//    {
//        return -1;
//    }
//}
//
//void swap(void* p1, void* p2, int size)
//{
//    int i = 0;
//    for (i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);
//        *((char*)p1 + i) = *((char*)p2 + i);
//        *((char*)p2 + i) = tmp;
//    }
//}
//
//void bubble(void* base, int count, int size, int(*cmp)(const void*, const void*))
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (cmp((char*)base + size * j, (char*)base + size * (j + 1)) > 0)
//            {
//                swap((char*)base + size * j, (char*)base + size * (j + 1), size);
//            }
//        }
//    }
//}
//
//int str_cmp(const void* p1, const void* p2)
//{
//    return strcmp((char*)(*(int*)p1), (char*)(*(int*)p2));
//}
//
//int main()
//{
//    //int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    char* arr[] = { "dddd", "bbbb", "cccc", "aaaa" };
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(char*), str_cmp);
//    for (i = 0; i < 4; i++)
//    {
//        printf("%s\n", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//void test()
//{
//
//}
struct stu
{
	char name[20];
	int age[10];
}s;
//void qsort(void* base,
//	       size_t num,
//	       size_t width,
//	       int(*cmp)(const void* e1, const void* e2)
//          );
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1 - *(float*)e2));
}
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//±È½Ï
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//½»»»
//			}
//		}
//	}
//}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_float(const void* e1, const void* e2)
{
	/*if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;*/
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]),cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
	//struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
	//int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	 return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
int main()
{
	
	//float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	
	//system("pause");
	//test1();
	//test2();
	test3();
	return 0;
}