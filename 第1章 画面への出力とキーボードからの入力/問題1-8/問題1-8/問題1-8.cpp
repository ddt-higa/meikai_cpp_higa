//演習1-8 int型の変数に実数値の初期化子を与えるとどうなるか。プログラムを作成して確認せよ。

#include<iostream>

using namespace std;

int main()
{
	//inputIntegerはint型変数（1.5で初期化）
	int inputInteger = 1.5;

	//integer
	cout << "inputIntegerの値は" << inputInteger << "です。\n";
}

	//実行した結果、int型の変数に実数値を与えるとint型で返ることを確認