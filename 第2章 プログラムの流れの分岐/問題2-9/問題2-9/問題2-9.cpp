//演習2-9 二つの整数値を読み込んで、それらの値の差が10以下であれば『それらの差は10以下です。』と表示し、そうでなければ『それらの差は11以上です。』と表示するプログラムを作成せよ。

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

	//読み込んだ値の差が10以下の場合の動作を指定
	if (maxCompairsonInteger - minCompairsonInteger <= 10) {
		//差が10以下であることを表示
		cout << "それらの差は10以下です。\n";
		//読み込んだ値の差が10以下以外の場合の動作を指定
	} else {
		//差が11以上であることを表示
		cout << "それらの差は11以上です。\n";
	}
}

//実行した結果、二つの整数値の差が10以上であるかどうかを判定