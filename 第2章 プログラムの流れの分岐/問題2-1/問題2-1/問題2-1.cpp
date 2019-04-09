//演習2-1 右に示すように、整数値を読み込んで、その絶対値を求めて表示するプログラムを作成せよ。 整数値：-5 改行 その絶対値は5です。

#include<iostream>

using namespace std;

int main()
{
	//「inputInteger」を実数として指定
	int inputInteger;
	//「整数値：」を表示
	cout << "整数値：";
	//「inputInteger」nの入力を促す
	cin >> inputInteger;
	//「inputInteger >= 0」の場合の実行動作を指定
	if (inputInteger >= 0)
	//「その絶対値は（inputIntegerに入力した値）です。」
		cout << "その絶対値は" << inputInteger << "です。\n";
	//「inputInteger >= 0」以外の場合の実行動作を指定
	else
	//「その絶対値は（inputIntegerに入力した値）です。」
		cout << "その絶対値は" << -1 * inputInteger << "です。\n";

}

//実行した結果、読み込んだ整数値が絶対値で表示されることを確認


