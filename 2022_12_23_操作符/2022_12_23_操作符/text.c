#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//第一天学习

//int main()
//{
//	int a = 16;
//	//int b = a >> 2;
//	printf("%d", a >> 1);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, ret = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 != (b >> i) & 1)
//		{
//			ret++;
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	printf("%d", a >> 1);
//	return 0;
//}

//面试题进行交换

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	//a = b + a; //这种方法会溢出
//	//b = a - b;
//	//a = a - b;
//	a = a ^ b;
//	b = a ^ b; //这种方法虽然不会溢出，但效率低
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//统计一个数里面的二进制1的个数

//int main()
//{
//	int num = 0, count = 0;
//	scanf("%d", &num);
//
//	//while (num)
//	//{
//	//	if (num % 2 != 0)
//	//	{
//	//		count++;    //存在问题，不能算负数
//	//	}
//	//	num = num / 2;
//	//}
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	printf("%d", count);
//	return 0;
//}

//sizeof的用法

//int main()
//{
//	int a = 1;
//	int* p = &a;
//	char b = 'c';
//	int arr[10] = { 0 };
//	printf("%lld\n", sizeof(a));
//	printf("%lld\n", sizeof(p));
//	printf("%lld\n", sizeof(b));
//	printf("%lld\n", sizeof(arr));
//	return 0;
//}

//第二天的学习

//按位或

//int main()
//{
//	/*int a = 10;
//	short b = 0;
//	printf("%lld\n", sizeof(b = a + 5)); //并不进行计算，而且最终结果仍向b看齐
//	printf("%d\n", b);*/
//	int a = 0;
//	printf("%d", ~a);
//	return 0;
//}

//要把其中一个数的二进制其中一个0变1,或者将其反回来

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	//如果要把它还原回去
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//	return 0;
//}

//前置和后置++和--

//int main()
//{
//	int a = 9;
//	//printf("%d\n", ++a);
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//360笔试题

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//||一个为真后面就不算了
//	//i = a++ && ++b && d++;//&&一个为假后面就不算了
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

// 结构体 struct 和int float一样是一种内型用来创建变量

//struct stu
//{
//	char name[20];
//	int age;
//	char ID[20];
//};
//int main()
//{
//	//类型名就叫struct stu
//	struct stu s1 = { "张三",20,"5112221010536" };//使用struct stu创建了一个学生s1，并初始化
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);  //3
//	
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/  //2
//
//	//较为罗嗦
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.ID);*/  //1
//	return 0;
//}

//c语言中的类型自动转换

//int main()
//{
//	char a = 3, b = 127, c = 0;
//	//00000011 -a
//	//01111111 -b
//	//char a = 1, b = 100, c = 0;
//	//相加后00000000000000000000000010000010
//	//10000010 -c
//	c = a + b;
//	//要以第一个数补齐
//	//11111111111111111111111110000010 -补码
//	//11111111111111111111111110000001 -反码
//	//10000000000000000000000001111110 -原码
//	printf("%d\n", c);
//	return 0;
//}

//只要涉及表达式运算就会发生整型提升

int main()
{
	char c = 1;
	printf("%lld\n", sizeof(c));
	printf("%lld\n", sizeof(+c)); //4
	printf("%lld\n", sizeof(!c));
	return 0;
}