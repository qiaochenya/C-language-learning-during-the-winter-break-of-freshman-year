#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//如何定义一个结构体

//struct 结构体关键字，stu结构体标签

//struct stu	//相当于图纸
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;	//是三个结构体全局变量

//typedef struct stu	//重新起名字typedef
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	struct stu s;	//盖房子，且s是局部变量
//	stu a = { "张三",12,"13058416598","男" };	//初始化结构体像数组一样用括号{}
//	return 0;
//}

//还可以结构体套结构体

//struct S
//{
//	char arr[10];
//};
//struct T
//{
//	char name[10];
//	struct S s;
//};
//int main()
//{
//	struct T t = { "张三",{"男"} };
//	printf("%s ", t.name);
//	printf("%s ", t.s.arr);
//	return 0;
//}

//结构体的传参

typedef struct stu	
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
void print1(stu s)
{
	printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("tele:%s\n", s.tele);
	printf("sex:%s\n", s.sex);
}
void print2(stu* s)
{
	printf("name:%s\n", s->name);
	printf("age:%d\n", s->age);
	printf("tele:%s\n", s->tele);
	printf("sex:%s\n", s->sex);
}
int main()
{
	stu s = { "张三",12,"13620580982","男" };
	print1(s);
	print2(&s);	//这个更好，空间浪费不严重
	return 0;
}