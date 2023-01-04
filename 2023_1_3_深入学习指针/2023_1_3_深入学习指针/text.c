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

//void print1(int arr[][3], int x, int y)	//原始做法
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[3], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);	//也可以这样
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][3] = { {0,0,0},{1,1,1},{2,2,2} };
//	print1(arr, 3, 3);	//二维数组的首元素就是第一行的一维数组
//	printf("\n");
//	print2(arr, 3, 3);
//	return 0;
//}

//函数指针 - 存放函数地址的指针,&函数名和直接函数名获得的都是函数的指针

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int, int) = add;	//(int x,int y)里面的x，y可写可不写
//	//可以&add，也可以直接add，add本身是个地址
//	printf("%d\n", (*p)(3, 2));
//	printf("%d\n", p(3, 2));	//*就是个摆设
//	printf("%d\n", add(3, 2));
//	//printf("%d\n", *p(3, 2));	//error,()的优先级高于*所以不能*5
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("qiaochenya");
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	printf("%c\n", *p);	//存的是第一个字符的地址
//	return 0;
//}

//阴间代码void(*signal(int, void(*)(int)))(int)进行简化

//typedef void(*pfun)(int);
//pfun signal(int, pfun);

//函数指针数组 - 用来存放函数指针的数组

//计算器

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*parr[4])(int, int) = { add,sub,div,mul };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*(parr[i]))(2, 3));
//	}
//	return 0;
//}

//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组，能够存放4个my_strcpy函数的地址

//char* my_strcpy(char* dest, const char* src)
//{
//	;
//}
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*pff[4])(char*, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };
//	return 0;
//}

//计算器plus

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void cal(int(*p)(int, int))
//{
//	int x = 0, y = 0;
//	printf("请输入两个操作数:>");
//	scanf_s("%d %d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.Add         2.Sub*****\n");
//	printf("*****3.Mul         4.Div*****\n");
//	printf("********** 0. exit **********\n");
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请输入>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			cal(Add);
//			break;
//		case 2:
//			cal(Sub);
//			break;
//		case 3:
//			cal(Mul);
//			break;
//		case 4:
//			cal(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			rewind(stdin);
//			break;
//		}
//	} while (input);
//	return 0;
//}

//计算器plus,代码更简洁

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.Add         2.Sub*****\n");
//	printf("*****3.Mul         4.Div*****\n");
//	printf("********** 0. exit **********\n");
//}
//int main()
//{
//	int(*par[])(int, int) = { NULL,Add,Sub,Mul,Div };
//	int input;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请输入>:");
//		scanf_s("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			printf("请输入操作数:>");
//			scanf_s("%d %d", &x, &y);
//			printf("%d\n", par[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误请重新输入\n");
//			rewind(stdin);
//		}
//	}while (input);
//	return 0;
//}

//回调函数

void print(char* str)
{
	printf("%s\n", str);
}
void text(void(*p)(char*))
{
	printf("hehe\n");
	p("haha");
}
int main()
{
	text(print);
	return 0;
}