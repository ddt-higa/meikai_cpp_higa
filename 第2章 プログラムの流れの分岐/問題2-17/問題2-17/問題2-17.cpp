//演習2-17 変数aがdouble型で、変数bがint型であるとする。以下の代入によって、それぞれの変数の値はどのようになるか説明せよ。 a = b = 1.5;

#include<iostream>

using namespace std;

int main()
{
	//aを実数値として設定
	double a;
	//bを整数値として設定
	int b;
	//「a = b = 1.5」という代入式を展開
	a = b = 1.5;
	//代入処理後のaの値を表示
	cout << "aの値は" << a << "です。\n";
	//代入処理後のbの値を表示
	cout << "bの値は" << b << "です。\n";
}

//実行した結果、bに整数の1が代入され、aにbの代入値の1が代入されることを確認
