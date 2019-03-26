//演習1-7 三つのint型変数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ。

#include<iostream>

using namespace std;

int main()
{
	//inputInteger1はint型の変数
	int inputInteger1;
	//inputInteger2はint型の変数
	int inputInteger2;
	//inputInteger3はint型の変数
	int inputInteger3;

	//inputInteger1に15を代入
	inputInteger1 = 15;
	//inputInteger2に33を代入
	inputInteger2 = 33;
	//inputInteger3に9を代入
	inputInteger3 = 9;

	//inputInteger1、inputInteger2、inputInteger3の合計値を表示
	cout << "合計値は" << inputInteger1 + inputInteger2 + inputInteger3 << "です。\n";
	//inputInteger1、inputInteger2、inputInteger3の平均値を表示
	cout << "平均値は" << (inputInteger1 + inputInteger2 + inputInteger3) / 3 << "です。\n";
 }

	//実行した結果、inputInteger1,inputInteger2,inputInteger3の合計値と平均値を確認