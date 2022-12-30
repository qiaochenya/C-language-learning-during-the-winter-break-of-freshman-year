#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//自己写的作业1

//void reserve(int arr[10])
//{
//	int str[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		str[i] = arr[9 - i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = str[i];
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	reserve(arr);
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//鹏哥写的作业1

//将数组反转交换的算法

//void Ints(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%2d", arr[i]);
//	}
//	printf("\n");
//}
//void Intss(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void reserve(int arr[], int sz)	
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Ints(arr, sz);
//	print(arr, sz);
//	Intss(arr, sz);
//	print(arr, sz);
//	reserve(arr, sz);
//	print(arr, sz);
//	//int sz = strlen(arr);	//strlen只能算字符串
//		//用这种方法算int型的
//	//printf("%d", sz);
//	return 0;
//}

//两个数组的交换

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 0,2,4,6,8 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int temp = 0;
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//指针题目

//int main()
//{
//	int a = 0x11223344;	//内存中倒着存进去，所以把44改成0了
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x", a);	//11223300
//	return 0;
//}

//阴间题目

//int i;	//全局变量不初始化就是0，而局部变量不初始化就是随机值
//int main()
//{
//	i--;
//	if (i > sizeof(i))	//sizeof默认返回的是一个无符号数，而-1的二进制为最高为1变成一个无符号数肯定很大
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;	//赋值的优先级高于逗号表达式
//	b += a++ + c;	//后置++ > +号 > +=
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}

//写一个函数返回参数二进制中1的个数,这种题都是求补码

//int search(int x)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)	//必须循环32次
//	{
//		if (((x>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int searchs(unsigned int x)	//强制类型转化为无符号就可以解决负号
//{
//	int count = 0;
//	while (x)
//	{
//		if (x % 2 == 1)
//		{
//			count++;
//		}
//		x /= 2;
//	}
//	return count;
//}
//int searchss(int x)	//最优解算法
//{
//	int count = 0;
//	while (x)	//有几个1就循环几次
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int y = search(x);
//	printf("%d\n", y);
//	//system("pause");
//	y = searchs(x);
//	printf("%d\n", y);
//	y = searchss(x);
//	printf("%d\n", y);
//	return 0;
//}

//写一个函数求两个数二进制为中不同位的个数

//int get_same_count(int x, int y)
//{
//	int count = 0;
//	int temp = x ^ y;	//相同为0，相异为1
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf_s("%d %d", &a, &b);
//	int count = get_same_count(a, b);
//	printf("%d\n", count);
//	return 0;
//}

//打印二进制中的奇数位和偶数位

//void print(int x)
//{
//	printf("奇数位\n");
//	for (int i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位\n");
//	for (int i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//乘法表

//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	for (int a = 1; a <= i; a++)
//	{
//		for (int b = 1; b <= a; b++)
//		{
//			printf("%2d *%2d=%-2d ", b, a, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印一个整数的每一位

//void print(int x)
//{
//	if (x < 10)
//	{
//		printf("%d ", x);
//	}
//	else
//	{
//		print(x / 10);
//		printf("%d ", x % 10);	//这步是最后才打印的
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf_s("%d", &x);
//	print(x);
//	return 0;
//}

//递归和非递归求n的阶乘

//int factorial(int x)
//{
//	if (x==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * factorial(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int count = 1;
//	if (n >= 0)
//	{
//		count = factorial(n);
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int count = 1;
//	while (n)
//	{
//		count = n * count;
//		n--;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//写一个函数将字符串逆序(用递归实现)且不能使用字符串的库函数

//long long int my_strlen(char arr[])
//{
//	char* left = &arr[0];
//	char* right = &arr[0];
//	while (*right != '\0')
//	{
//		right++;	//应该加到数组后面的后面一个再减去第一个数组元素的地址
//	}
//	long long int count = right - left;	//指针减去指针返回的是一个长长整型
//	return count;
//}
//void reserve(char arr[])
//{
//	char temp = arr[0];
//	long long int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reserve(arr + 1);
//	arr[len - 1] = temp;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	//gets_s(arr, 7);	//不会自动去截断
//	fgets(arr, 7, stdin);	//会自动截断
//	//long long int count = my_strlen(arr);
//	//printf("%lld\n", count);
//	reserve(arr);
//	printf("%s", arr);
//	return 0;
//}

//写一个递归函数，输入一个非负整数，返回组成它数字之和

//int digitsum(unsigned int x)
//{
//	int count = 0;
//	if (x >= 10)
//	{
//		return count = count + x % 10 + digitsum(x / 10);
//	}
//	else
//	{
//		return x;
//	}
//}
////更优解
//int digitsums(unsigned int x)
//{
//	if (x>9)
//	{
//		return digitsums(x / 10) + x % 10;
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	unsigned int x = 0;
//	scanf_s("%d", &x);
//	int count = digitsum(x);
//	printf("%d\n", count);
//	count = digitsums(x);
//	printf("%d\n", count);
//	return 0;
//}

//递归实现n的k次方 n^k=n*n^(k-1)

double Calculate(int n, int k)
{
	if (k<0)
	{
		return (1.0 / Calculate(n, -k));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Calculate(n, k - 1);
	}
}
int main()
{
	int n = 0, k = 0;
	scanf_s("%d %d", &n, &k);
	double count = Calculate(n, k);
	printf("%lf\n", count);
	return 0;
}