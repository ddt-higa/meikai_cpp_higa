//演習2-8 二つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ。

#include<iostream>

using namespace std;

int main()
{
	//「compairsonInteger1」、「compairsonInteger2」を整数値として設定
	int compairsonInteger1, compairsonInteger2;
	//「compairsonInteger1：」を表示
	cout << "compairsonInteger1：";
	//「compairsonInteger1」に整数値を読み込む
	cin >> compairsonInteger1;
	//「compairsonInteger2：」を表示
	cout << "compairsonInteger2：";
	//「compairsonInteger2」に整数値を読み込む
	cin >> compairsonInteger2;
	//maxCompairsonIntegerにcompairsonInteger1とcompairsonInteger2の大きいほうを設定
	int maxCompairsonInteger = compairsonInteger1 > compairsonInteger2 ? compairsonInteger1 : compairsonInteger2;
	//minCompairsonIntegerにcompairsonInteger1とcompairsonInteger2の小さいほうを設定
	int minCompairsonInteger = compairsonInteger1 < compairsonInteger2 ? compairsonInteger1 : compairsonInteger2;
	//入力した二つの整数値の差分を表示
	cout << "二つの整数値の差は" << maxCompairsonInteger - minCompairsonInteger << "です。\n";
}

//実行した結果、入力した整数値の差分が表示されることを確認
