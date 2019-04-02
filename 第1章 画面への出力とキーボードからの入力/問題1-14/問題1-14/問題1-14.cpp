//演習1-14 キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値をランダムに生成して表示するプログラムを作成せよ。※キーボードから読み込んだ値が100であれば、95～105の整数値を表示すること。

#include<iostream>

using namespace std;

int main()
{
	//inputIntegerを整数値として設定
	int inputInteger;

	//「整数値」の入力を促す
	cout << "整数値:";
	//inputIntegerに任意の整数値を読み込む
	cin >> inputInteger;

	int randomNumber = rand() % 11 - 5;

	cout << "その値の±5の乱数を生成しました。それは" << inputInteger + randomNumber << "です。\n";

}

//実行した結果、1以上9以下、-9以上-1以下、10以上99以下の乱数の表示を確認
