//演習1-10 右に示すように、キーボードから読み込んだ整数値に10を加えた値と10を減じた値を出力するプログラムを作成せよ。「整数値:7 改行 10を加えた値は17です。 改行 10を減じた値は-3です。」

#include<iostream>

using namespace std;

int main()
{
	//inputIntegerは加減する整数値
	int inputInteger;

	//「整数値:」を表示
	cout << "整数値:";
	//inputIntegerに整数値を代入
	cin >> inputInteger;

	//inputIntegerに7を代入し、代入した値に10を足して、「10を加えた値は17です。」と表示
	cout << "10を加えた値は" << inputInteger + 10 << "です。\n";
	//inputIntegerに7を代入し、代入した値から10を引いて、「10を減じた値は-3です。」と表示
	cout << "10を減じた値は" << inputInteger - 10 << "です。\n";
}

	//実行した結果、キーボードからの読み取りと計算結果の表示を確認