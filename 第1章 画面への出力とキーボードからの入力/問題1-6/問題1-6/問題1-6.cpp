//演習1-6 小数部をもつ実数値をxやyに代入するプログラムを作成せよ。その実行結果から、int型変数が整数値のみしか扱えないことを確認すること。

#include<iostream>

using namespace std;
int main()
{
	//inputRealNumber1は小数部をもつ実数値
	int inputRealNumber1;
	//inputRealNumber2は小数部をもつ実数値
	int inputRealNumber2;

	//inputRealNumber1に1.3を代入
	inputRealNumber1 = 1.3;
	//inputRealNumber2に1.6を代入
	inputRealNumber2 = 1.6;

	//inputRealNumber1の値を表示
	cout << "inputRealNumber1の値は" << inputRealNumber1 << "です。\n";
	//inputRealNumber2の値を表示
	cout << "inputRealNumber2の値は" << inputRealNumber2 << "です。\n";
	//inputRealNumber1とinputRealNumber2の合計を表示
	cout << "合計は" << inputRealNumber1 + inputRealNumber2 << "です。\n";
	//inputRealNumber1とinputRealNumber2の平均を表示
	cout << "平均は" << (inputRealNumber1 + inputRealNumber2) / 2 << "です。\n";

}

//実行結果からint型変数は整数値しか扱えないことを確認