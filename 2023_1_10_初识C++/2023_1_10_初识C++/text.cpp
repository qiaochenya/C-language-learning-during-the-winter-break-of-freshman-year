#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
//#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<bitset>
#include<algorithm>
using namespace std;

//新加的bool变量

//int main()
//{
//	bool a1 = true;
//	bool a2 = (bool) - 1;
//	bool a3 = (bool)0;
//	cout << a1 << " " << a2 << " " << a3 << " " << endl;
//	return 0;
//}

//新加的字符串变量string和函数

//int main()
//{
//	//string s1 = "hello ";
//	//string s2 = "world";
//	//string s3 = s1 + s2;	//可以直接相加，不用strcat
//	//cout << s3 << endl;
//
//	//string s1;
//	//getline(cin, s1);	//可以读一整行 
//	//cout << s1 << endl;
//	//cout << s1.length() << endl;	//读取字符串的长度
//
//	//获得子串
//	string s = "hello world!";
//	string s_sub = s.substr(6);	//一个参数就是那个字符向后数的子串
//	s_sub = s.substr(1, 2);
//	//printf("%s\n", s_sub);	//%s打印的是char*,而string是另一种
//	cout << s_sub << endl;
//	return 0;
//}

//结构体可以不用加struct就可以直接命名

//struct stu
//{
//	string name;
//	int age;
//};
//int main()
//{
//	stu s = { "qiaochen",12 };
//	cout << s.name << " " << s.age << endl;
//	return 0;
//}

//c++中的&引用

//void add(int& b)	//&可以免去c中传指针的麻烦
//{
//	b++;
//}
//int main()
//{
//	int a = 9;
//	add(a);
//	cout << a << endl;
//
//	return 0;
//}

//vector

//int main()
//{
//	vector<int>v;
//	v.resize(10);
//	v.push_back(1);
//	v[0] = 1;
//	for (auto p = v.begin(); p != v.end(); p++)
//		cout << *p << " ";
//	return 0;
//}

//set集合

//int main()
//{
//	set<int>s;	//无需给它指定大小
//	s.insert(3);
//	s.insert(2);
//	s.insert(1);
//	for (auto p = s.begin(); p != s.end(); p++)	//迭代器
//		cout << *p << " ";
//	cout << endl;
//	cout << (s.find(3) != s.end()) << endl;
//	cout << (s.find(2) != s.end()) << endl;
//	s.erase(1);
//	cout << (s.find(1) != s.end()) << endl;
//	return 0;
//}

//map

//int main()
//{
//	map<string, int>m;
//	m["hello"] = 4;
//	m["world"] = 3;
//	cout << "hello :" << m["hello"] << endl;
//	for (auto p = m.begin(); p != m.end(); p++)
//	{
//		cout << p->first << ": " << p->second << endl;
//	}
//	cout << m.size() << endl;
//	return 0;
//}

//栈,不能使用迭代器

//int main()
//{
//	stack<int>s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.pop();	//出栈
//	cout << s.top() << endl;
//	cout << s.size() << endl;
//	return 0;
//}

//队列,出队从头出

//int main()
//{
//	queue<int>s;
//	for (int i = 0; i < 10; i++)
//	{
//		s.push(i);
//	}
//	cout << "队首为：" << s.front() << "队尾为：" << s.back() << endl;
//	s.pop();	//出队
//	cout << "队首为：" << s.front() << "队尾为：" << s.back() << endl;
//	s.push(11);
//	cout << "队首为：" << s.front() << "队尾为：" << s.back() << endl;
//	cout << s.size() << endl;
//	return 0;
//}

//bitset

//int main()
//{
//	bitset<5>s(19);	//100011
//	cout << s << endl;
//	for (int i = 0; i < s.size(); i++)
//	{
//		cout << s[i] << " ";	//反过来存
//	}
//	cout << "\n";
//	
//	cout << "s中是否存在1：" << s.any() << endl;
//	cout << "s是否不存在1：" << s.none() << endl;
//	cout << "s中1的个数：" << s.count() << endl;
//	cout << "s的元素个数为：" << s.size() << endl;
//	cout << "小标0元素是否为1：" << s.test(0) << endl;
//
//	s.flip();
//	cout << s << endl;
//
//	unsigned long a = s.to_ulong();
//	cout << a << endl;
//
//	string m = "101001000";
//	bitset<5>b(m, 0, 5);
//	cout << b << endl;
//	return 0;
//}

//sort函数的使用

//int main()
//{
//	vector<int>v(10);
//	for (int i = 9; i >= 0; i--)
//	{
//		v[i] = 10 - i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << "\n";
//	sort(v.begin(), v.end());
//	for (int i = 0; i < 10; i++)
//	{
//		cout << v[i] << " ";
//	}
//}

//bool cmp(int x, int y)
//{
//	return x > y;
//}
//int main()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	//如果要降序的话就要添加cmp
//	sort(v.begin(), v.end(), cmp);
//	//cmp返回值为真就不交换，假就交换
//	cout << endl;
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	return 0;
//}

//结构体排序

//struct stu
//{
//	string name;
//	int age;
//};
//bool cmp(stu x, stu y)
//{
//	if (x.age != y.age)
//		return x.age > y.age;
//	else
//		return x.name > y.name;
//}
//int main()
//{
//	stu s[3] = { {"zhangsan",12},{"lisi",15},{"wangwu",18} };
//	sort(s, s + 3, cmp);
//	for (int i = 0; i < 3; i++)
//	{
//		cout << (s + i)->name << ":" << s[i].age << endl;
//	}
//}

//c++的for

//int main()
//{
//	int arr[10] = { 1 };
//	for (auto& i : arr)	//加了&就会对原数组进行更改
//	{
//		i++;
//	}
//	for (auto i : arr)
//	{
//		cout << i << " ";
//	}
//	return 0;
//}

//to_string将数字转化为字符变量

//int main()
//{
//	string s = to_string(11);
//	printf("%s\n", s.c_str());	//记住
//	cout << s << endl;
//	return 0;
// }

//stoi,stod

int main()
{
	int a = stoi("11");
	cout << a << endl;
	double b = stod("3.14");
	cout << b << endl;
	return 0;
}