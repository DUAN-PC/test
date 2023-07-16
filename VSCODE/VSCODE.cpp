// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define PI 3.14159;
#define S(a,b) a*b


using namespace std;
#ifndef DEBUG
int j = 1;

#endif // DEBUG
int zhuanhuan() {
	int a =\
		8;
	double b= static_cast <double> (a+1.1);
	cout << b << endl;
	double c = (double)a + 1.5;
	cout << c <<endl;
	return 0+2+3+9;
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
	cout << x <<endl;
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
		if (num >= 0){
			total1++;
		}
		else {
			total2++;
		}

		total = total + num;	
	}
	cout << total <<"有"<<total1<<"个正整数" << "有" << total2 << "个不是正整数" <<"1个0" << endl;
	cout << zhuanhuan();
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