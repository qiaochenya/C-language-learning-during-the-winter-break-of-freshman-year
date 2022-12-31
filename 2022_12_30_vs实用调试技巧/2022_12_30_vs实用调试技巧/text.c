#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//对栈区的分析

//在for里面定义i是c++的代码风格不是c的

//int main()
//{
//	//2022vs和以前版本不一样栈区是先放低地址在放高地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	system("pause");
//	for (i = 0; i <= 12; i++)	//vs以前版本死循环的原因；局部变量都是放到栈上的，1：栈的默认先用高地址后用低地址的空间，2；数组随着下标的增长，地址是由低到高变化
//	{
//		printf("hehe\n");	//而现在版本要将i定义到数组后面才会死循环
//		arr[i] = 1;
//	}
//	system("pause");	//Debug会报错，而Release不会报错
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//调用堆栈

//void text2()
//{
//	printf("hehe\n");
//}
//void text1()
//{
//	text2();
//}
//void text()
//{
//	text1();
//}
//int main()
//{
//	text();
//	return 0;
// }

//实现代码1！+2！+......+n！

//int main()
//{
//	int n = 0;
//	int count1 = 1;
//	int count = 0;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		count1 = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			
//			count1 = j * count1;
//		}
//		count = count1 + count;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//strcpy库函数的实现,strcpy函数拷贝会把/0也拷贝过去

//自己实现的
void my_strcpy(char arr1[], char arr2[])
{
	int i = 0;
	for (i = 0; arr2[i] != '\0'; i++)
	{
		arr1[i] = arr2[i];
	}
	arr1[i] = '\0';
}

//鹏哥写的
void my_strcpys(char* dest, char* src)	//比较挫
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;	//最后的'\0'
}

void my_strcpyss(char* dest, char* src)	//还不够好
{
	if (dest != NULL && src != NULL)	//要进行空指针的判断
	{
		while (*dest++ = *src++);
	}
}

void my_strcpysss(char* dest, const char* src)	//const可以让这个值固定，不会把目的地和出发点搞反
{
	assert(dest != NULL);	//断言可以发现错误
	assert(src != NULL);
	while (*dest++ = *src++);	//搞反就编译不过去
}

char* my_strcpyssss(char* dest, const char* src)	//这里选择返回一个地址
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[] = { "*****************" };
	char arr2[] = { "qiaochenya" };
	//my_strcpyssss(arr1, arr2);
	//printf("%s\n", arr1);
	printf("%s\n", my_strcpyssss(arr1, arr2));	//返回地址作用于这里，可以作为另一个函数的参数
	return 0;
}

//const的用法

//int main()
//{
//	const int i = 0;	//只在这里加const仍然可以通过指针去改
//	const int* p = &i;	//如果指针也加上const就会报错
//	/*int** pp = &p;
//	**pp = 20;*/	//二级指针仍然可以改
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int i = 0, n = 0;
//	int* const p = &i;
//	p = &n;	//const放里面指向p就不可以改p的地址
//	return 0;
//}

//满分写strlen

//int my_strlen(const char* arr)	//加上const
//{
//	int count = 0;
//	assert(arr != NULL);	//加上断言
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}