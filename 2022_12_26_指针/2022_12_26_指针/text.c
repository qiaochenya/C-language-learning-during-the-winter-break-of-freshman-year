#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main(int argc, char* argv[])
//{
//    printf("argc = %d\n", argc);
//    argv++;
//    while (*argv) 
//    {
//        if (strcmp(*argv, "Aa") == 0) {
//            argv++;
//            printf("A for apple\n");
//        }
//        else if (strcmp(*argv, "Bb") == 0) {
//            argv++;
//            printf("B for ball\n");
//        }
//        else if (strcmp(*argv, "Cc") == 0) {
//            argv++;
//            printf("C for cat\n");
//        }
//        else if (strcmp(*argv, "Dd") == 0) {
//            printf("in d\n");
//            argv++;
//            printf("D for dog\n");
//        }
//    }
//}

//指针类型的意义

//int main()
//{
//
//	int a = 0x11223344;
//	//int* p = &a;
//	//*p = 0;
//	char* b = &a;
//	*b = 0; //指针类型决定了指针进行解引用操作时候，能够访问空间的大小
//	return 0;
//}

//指针类型决定了:指针走一步走多远

//int main()
//{
//	int a = 0x44332211;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//指针对数组的应用

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//野指针1.未初始化 2.指针的越界 3.执政指向的空间释放

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++) //12就越界了
//	{
//		p++;
//	}
//	return 0;
//}

//int* text()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = text();
//	*p = 20; //门牌号还是那个住户换了 
//	return 0;
//}

//指针的运算

//指针的加减

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++; 
//	}
//	return 0;
//}

//指针的比较大小

//int main()
//{
//	char arr[5] = { "abcde" };
//	for (char* p = arr; p < &arr[5];)
//	{
//		*p++ = '0';	//如果没加‘’，单纯0的话是不可显示的字符
//	}
//	for (char* p = arr; p < &arr[5]; p++)
//	{
//		printf("%c ", *p);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	for (int* i = &arr[5]; i > &arr[0];)
//	{
//		*--i = 1;	//*号要放在++和--前面
//	}
//	for (int* i = arr; i < &arr[5]; i++)
//	{
//		printf("%d ", *i);
//	}
//	return 0;
//}

//指针减去指针

//int main()
//{
//	int arr[5] = { 0 };
//	printf("%lld\n", &arr[5] - &arr[0]);
//	printf("%d", arr[3]);
//	return 0;
//}

//实现自己的strlen

//long long int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[5] = { "bit" };
//	long long int len = my_strlen(arr);
//	printf("%lld\n", len);
//	return 0;
//}

//数组与指针

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);	//取出的是整个数组的地址
//	printf("\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	return 0;
//}

//二级指针的套娃

//int main()
//{
//	int a = 6;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}

//指针数组-本质上是数组-用来存放指针

int main()
{
	int a = 1, b = 2, c = 3;
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}