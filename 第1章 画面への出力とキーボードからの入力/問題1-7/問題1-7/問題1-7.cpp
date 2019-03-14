//演習1-7 三つのint型変数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ。

#include <iostream>

using namespace std;

int main()
{
	//aはint型の変数
	int a;
	//bはint型の変数
	int b;
	//cはint型の変数
	int c;

	//aに値を代入
	a = 1 + 1;
	//bに値を代入
	b = 3;
	//cに値を代入
	c = 2 ^ 2;

	//a,b,cの合計を表示
	cout << "aとbとcの合計値は" << a + b + c << "です。\/";
	//a,b,cの平均値を表示
	cout << "aとbとcの合計値は" << (a + b + c) / 3 << "です。\/";
}

//実行結果から、3値の合計値と平均値を確認