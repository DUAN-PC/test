// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <locale.h>
#include <bitset>
#define PI 3.14159;
#define S(a,b) a*b

using namespace std;
#ifndef DEBUG
int j = 1;

#endif // DEBUG
int zhuanhuan() {
	int a = \
		8;
	double b = static_cast <double> (a + 1.1);
	cout << b << endl;
	double c = (double)a + 1.5;
	cout << c << endl;
	return 0 + 2 + 3 + 9;
}
int str() {
	char ch = 'a';
	cout << ch << endl;
	string a = "aaa";
	string b = "bbb";
	string c = a;
	a = b;
	b = c;
	cout << a << b << endl;
	a = "ccc";
	b = "ddd";
	a.swap(b);
	cout << a << b << endl;
	setlocale(LC_ALL, "chs");
	char* aa = "五十六个人，五十六枝花，五十六个兄弟姐妹是一家䬕";
	//#汉字是以两个字节为单位存储的，所以50长度就是25，可是，如果有比较复杂的字符就有可能是三个字符了， 比如：䬕 直接报错？？。这样便统计不清，怎么办呢？？
	string s = aa;
	cout << s <<endl;
	char* ab = "我的";
	string d = ab;
	cout << d <<endl;
	s.insert(2, d);
	cout << s<<endl;
	cout << s.size() << endl;
	cout << s.length() << endl;
	cout << s.empty() << endl;
	return 0;
}
int main()
{
	cout << j << endl;
	cout << "Hello World!\n";
	int m;
	cin >> m;
	cout << m << endl;
	for (int i = 0; i <= 100; i++)
	{
		cout << i << endl;
	}
	cout << PI;
	cout << endl;
	int I = 0;
	while (I < 100)
	{
		I++;
		cout << I << endl;
	}
	cout << S(78, 5) << endl;
	double x;
	x = 2.0 + 5.9;
	x = static_cast <int> (x);
	cout << x << endl;
	int num;
	cout << "请输入多个正整数，按0退出" << endl;
	cin >> num;
	int total = 0;
	total = total + num;
	int total1 = 0;
	int total2 = 0;
	while (num != 0) {
		cout << "请输入多个正整数，按0退出" << endl;
		cin >> num;
		if (num >= 0) {
			total1++;
		}
		else {
			total2++;
		}

		total = total + num;
	}
	cout << total << "有" << total1 << "个正整数" << "有" << total2 << "个不是正整数" << "1个0" << endl;
	cout << zhuanhuan() << endl;
	str();
	int y = 0;
	cout << "请输入宇宙超级无敌比较值( 可以为2，就执行if)";
	cin >> y;
	if ((1 == 1) && (2 == y)) {
		cout << "a";
	}
	else if ((9 == 9) || (true == false)) {
		cout << "1145==)" << endl;
	}	
	bool p = true;
	int zz = 0;
	cout << "请输入宇宙超级无敌比较值( 可以为0、1)";
	cin >>zz;
	(bool)zz;
	cout <<zz<<endl;
	int o = 0b101011; 
	int_fast64_t b = 0b10010100011001010101011101000010111001011100011011000;
	int yu = 0b111110;
	cout << b << endl;
	cout << bitset<6>((o & yu)) << "比" << endl;
	/*/&将非二进制数转换为二进制，并且进行运算
	假设如果 A = 60，且 B = 13，现在以二进制格式表示，它们如下所示：

A = 0011 1100

B = 0000 1101
A&B则是将 二进制数各位进行比较 如果此位都为1则返回1否则返回0，倒像&&
A&B=0000 1100
| 则是将 二进制数各位进行比较 与||一样 |的运算法则是如果此位有一个为1，就返回1，否则返回 0
A|B = 0011 1101
^ (必须是英文输入法) 则是将 二进制数各位进行比较 如果两个值不相同，则异或结果为1。如果两个值相同，异或结果为0. 0 0 = 0 ;0 1 = 0; 1 0 = 0; 1 1 =0
A^B = 0011 0001
~按位取反运算 把0变1,1变0 
~A  = 1100 0011
	*/
	return EXIT_SUCCESS;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
//2146500
//1858000
//2249250