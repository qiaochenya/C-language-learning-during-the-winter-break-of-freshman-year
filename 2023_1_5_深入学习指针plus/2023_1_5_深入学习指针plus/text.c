#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//冒泡排序

//void bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)	//趟数
//	{
//		for (int j = 0; j < sz-1-i; j++)	//多少对
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//qsort的用法

//int tmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), tmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int tmp(const void* e1, const void* e2)
//{
//	if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else if (*(float*)e1 == *(float*)e2)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	float arr[] = { 0.5F,7.8F,10.2F,36.6F,0.2F };	//在 C 语言中，如果不指定数据类型，那么小数常量会被认为是 double 类型的。 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), tmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//
//	return 0;
//}

//结构体用qsort

//struct stu
//{
//	char name[20];
//	int age;
//};
//int tmp(const void* e1, const void* e2)
//{
//	return ((struct stu*)e2)->age - ((struct stu*)e1)->age;	//反过来减就是倒序
//}
//int tmp_name(const void* e1, const void* e2)
//{
//	return strcmp((*(struct stu*)e2).name,(*(struct stu*)e1).name);
//}
//int main()
//{
//	struct stu s[3] = { {"张三",14},{"李四",19},{"赵六",60} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), tmp);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//	printf("\n");
//	//比较名字如何比较呢？
//	qsort(s, sz, sizeof(s[0]), tmp_name);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//	return 0;
//}

//如何自己写一个qsort函数

swap(char* buf1, char* buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *buf2;
		*buf2 = *buf1;
		*buf1 = temp;
		buf1++;
		buf2++;
	}
}
my_qsort(void* base, int sz, int width, int(*cmp)(const void*, const void*))
{
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz-1-i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int tmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), tmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}