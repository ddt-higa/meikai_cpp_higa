//演習2-4 正の整数値を読み込んで、それが5で割り切れれば『その値は5で割り切れます。』と表示し、そうでなければ『その値は5で割り切れません。』と表示するプログラムを作成せよ。※正でない値を読み込んだ場合は、『正でない値が入力されました。』と表示すること。
#include<iostream>

using namespace std;
int main()
{
	//「positiveInteger」を整数値として指定
	int positiveInteger;
	//「整数値：」を表示
	cout << "整数値：";
	//「positiveInteger」に整数値を読み込む
	cin >> positiveInteger;
	//「positiveInteger」が正の整数の場合の実行動作を指定
	if (positiveInteger > 0) {
		//「positiveInteger」が5で割り切れる場合の実行動作を指定
		if (positiveInteger % 5 == 0) {
			//「その値は5で割り切れます。」を表示
			cout << "その値は5で割り切れます。\n";
			//「positiveInteger」が5で割り切れる場合の実行動作を指定
		}
		else {
			//「その値は5で割り切れません。」を表示
			cout << "その値は5で割り切れません。\n";
		}
	}
	//「positiveInteger」が正の整数ではない場合の実行動作を指定
	else {
		//「正でない値が入力されました。」を表示
		cout << "正でない値が入力されました。\n";
	}
}

//実行した結果、5で割り切れる正の整数か判定できることを確認