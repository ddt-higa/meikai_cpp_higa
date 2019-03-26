//演習1-9 右に示すように、キーボードから読み込んだ整数値をそのまま反復して表示するプログラムを作成せよ。「整数値:7 改行 7と入力しましたね。」

#include<iostream>

using namespace std;

int main()
{
	//inputIntegerは整数値
	int inputInteger;

	//整数値の入力を促す
	cout << "整数値:";
	//inputIntegerに整数値を読み込む
	cin >> inputInteger;

	//「7と入力しましたね。」と表示
	cout << "7と入力しましたね。\n";
}

	//実行した結果、キーボードからの読み込みと取り込んだ整数値の表示を確認