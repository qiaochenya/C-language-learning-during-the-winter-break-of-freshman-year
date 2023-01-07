#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>

//结果是什么

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);	//本来是int(*)[5]类型转化为int*，所以-1就是下一个数组的地址往前一位
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//指针加减跳过的字符仍然取决与指针的类型

//struct text
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}*p;
////结构体大小为20
//int main()
//{
//	p = (struct text*)0x0000000000100000;
//	printf("%p\n", p + 0x1);	//32位才是14，64位就变20了
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//难

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x\n", ptr1[-1]);
//	printf("%x\n", *ptr2);	//数据存储的小端倒着存，向前一个字符然后int访问4个字节
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//00 00 00 02
//	return 0;
//}

//逗号表达式的坑

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };	//注意逗号表达式，初始化为1，3，5，0，0，0
//	int* p;
//	p = a[0];
//	assert(p != NULL);
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p, %lld", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]=*(*(p+4)+2)首先先是数组指针一跳4步，后来一跳一步
//	//%p打印-4，就是打印补码，的16进制，地址是一个无符号数
//	//10000000 00000000 00000000 00000100	-原码
//	//11111111 11111111 11111111 11111011	-反码
//	//1111 1111 1111 1111 1111 1111 1111 1100	-补码
//	//	f    f    f    f    f    f    f    c
//	//不够前面自动补1
//	//FFFF FFFF FFFF FFFC
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","albaba" };	//里面每个变量类型都是char*，都是指向首元素的地址
//	char** pa = a;	//并没有&
//	pa++;	//跳过一个char*大小就是来到“at”
//	printf("%s\n", *pa);
//	return 0;
//}

//最复杂(阴间)

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);	//cpp自增的结果会保留
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//写一个函数来逆序字符串的内容

//void fan(char arr[], long long int sz)
//{
//	int left = 0;
//	long long int right = sz-1;
//	while (left<right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	gets_s(arr,20);	//将一整行全输入倒字符数组，scanf遇到空格就停止
//	long long int sz = strlen(arr);
//	//printf("%lld\n", sz);
//	fan(arr, sz);
//	//printf("%s\n", arr);
//	puts(arr);
//	return 0;
//}

//求2+22+222+222......等式子的和

//int main()
//{
//	int a = 0, n = 0;
//	scanf_s("%d %d", &a, &n);
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum + a;
//		a = a * 10 + 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//水仙花数

//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int temp = i;
//		int n = 0;
//		while (temp)
//		{
//			temp /= 10;
//			n++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum = sum +(int)pow(temp % 10, n);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印菱形

//int main()
//{
//	int x = 0;
//	scanf_s("%d", &x);
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 1; j < x - i; j++)
//		{
//			printf(" ");
//		}
//		for (float a = 0; a <= i; a+=0.5)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < x-1; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (float a = 0.5; a < x - 1 - i; a += 0.5)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水问题，1瓶汽水一元，两个空瓶子可以换一瓶汽水，给20元可以喝多少汽水

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	total = money;
//	empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//交换数组里面奇数和偶数的问题，前面是奇数，后面是偶数

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if (left < sz && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		if (right > 0 && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//转换类型的题目

//int main()
//{
//	unsigned char a = 200;
//	//11001000	-补码，这里其实是截断才变8位，原来32位
//	unsigned char b = 100;
//	//01100100
//	unsigned char c = 0;
//	c = a + b;
//	//相加先进行整型提升，因为是无符号所以补0
//	//00000000000000000000000011001000	-a
//	//00000000000000000000000001100100	-b
//	//00000000000000000000000100101100	-c
//	//再进行截断
//	//00101100	-c
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;	//取地址是取那个数据的低地址先
//	printf("%d\n", b);	//小端存储就是52，大端就是0
//	return 0;
//}

//10000000000000000000000010000001
//11111111111111111111111101111110
//11111111111111111111111101111111

//杨辉三角

//int main()
//{
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int a = 0; a < 10 - i; a++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%-4d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜凶手，3个人说真话1个人说假话
//A说不是我
//B说是C
//C说是D
//D说C在胡说

//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer < 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("凶手是:%c\n", killer);
//		}
//	}
//	return 0;
//}

//猜名次
//5位运动员参加跳水比赛，有人让他们预测比赛结果
//A说 B第二，我第三
//B说 我第二，E第四
//C说 我第一，D第二
//D说 C最后，我第三
//E说 我第四，A第一

int main()
{
	for (int a = 0; a <= 5; a++)
	{
		for (int b = 0; b <= 5; b++)
		{
			for (int c = 0; c <= 5; c++)
			{
				for (int d = 0; d <= 5; d++)
				{
					for (int e = 0; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1) && (a * b * c * d * e == 120))
						{
							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}