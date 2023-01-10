#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//实现strlen函数

//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	/*int len = my_strlen("abcdef");
//	printf("%d\n", len);*/
//	if (strlen("abc") - strlen("abcdef") > 0)	//strlen的返回是size_t无符号数
//		printf("hehe\n");
//	else
//		printf("haha\n");
//}

//实现strcpy函数

//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char *p = str1;
//	while (*str1++ = *str2++);
//	return p;
//}
//int main()
//{
//	char arr[] = "aasljdksajd";
//	char* p = "qiao";
//	my_strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}

//实现strcat函数

char* my_strcat(char* str1, const char* str2)
{
	assert(str1 && str2);
	char* p = str1;
	while (*str1++);	//它是先解引用，然后即使是0，也会++再跳出去
		str1--;
	while (*str1++ = *str2++);	//后置++先使用后++
	return p;
}
int main()
{
	char arr1[30] = { "hello" };
	char* arr2 = " world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

//实现strcmp函数

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "qiaoasdasdassa";
//	char* p2 = "qiao";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr1[7] = "abcdef";
//	char arr2[] = "aaaaaaa";
//	strncpy(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}

//实现strstr函数
//KMP算法

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return s1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s2 == *s1))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "qiaochenya";
//	char arr2[] = "chen";
//	char* p = my_strstr(arr1, arr2);
//	printf("%s\n", p);
//	return 0;
//}

//strtok的用法
//每次在标记那里改成'\0'，并且会记住那个位置
//除了第一次后面每次第一个参数都传空指针
//如果找不到标记函数就会返回一个空指针，否则返回记录的位置

//int main()
//{
//	char arr1[] = "674166088@qq.com";
//	char* arr2 = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr1, arr2); ret != NULL; ret = strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror用法

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");	//打开一个文件并读
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("success\n");
//	}
//	return 0;
//}

//字符分类函数和字符转换函数

//int main()
//{
//	char ch = '6';
//	int ret = isdigit(ch);	//如果是就返回一个不是0的值，不是就返回0
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[] = "Qiao chen";
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		if (isupper(arr[i]) == 0)
//		{
//			arr[i] = toupper(arr[i]);	//这个函数返回的是一个字符
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}