#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void text(int arr[])
//{
//	printf("%I64d\n", sizeof(arr) / sizeof(arr[0]));	//64位下8/4=2，而32位则是1
//}
//int main()
//{
//	int arr[] = { 0 };
//	text(arr);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%s\n", arr);
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	return 0;
//}

//另一种写法

//int main()
//{
//	const char* p = "abcdef";	//"abcdef‘是一个常量字符串
//	*p = 'w';	//这种写法是错误的
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//笔试题

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");	//常量字符串同一个地址
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");	//地址肯定不同
//	}
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	return 0;
//}

//指针数组

//int main()
//{
//	int arr1[5] = { 0 };	//数组初始化一个才会自动把后面变成0
//	int arr2[5] = { 1,1,1,1,1 };
//	int arr3[5] = { 2,2,2,2,2 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针 -用来存放整个数组的地址

//int main()
//{
//	char* arr[5] = { NULL };
//	char* (*p1)[5] = &arr;
//
//	int arrs[5] = { 0 };
//	int(*p2)[5] = &arrs;
//	return 0;
//}

//数组指针的用法

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);	//可以将(*pa)理解为arr，arr[i]来访问数组
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));	//arr就是首元素地址
//	}
//	printf("\n");
//	//上面都麻烦，还不如这样
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));	//*的优先级高于+记得用括号
//	}
//	return 0;
//}

//主要用于二维数组

void print1(int arr[][3], int x, int y)	//原始做法
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[3], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", (*(p + i))[j]);	//也可以这样
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][3] = { {0,0,0},{1,1,1},{2,2,2} };
	print1(arr, 3, 3);	//二维数组的首元素就是第一行的一维数组
	printf("\n");
	print2(arr, 3, 3);
	return 0;
}