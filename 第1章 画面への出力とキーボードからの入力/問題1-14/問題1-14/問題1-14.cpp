//演習1-14 キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値をランダムに生成して表示するプログラムを作成せよ。※キーボードから読み込んだ値が100であれば、95～105の整数値を表示すること。

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//乱数の種を現時刻で設定
	srand(time(NULL));
	//inputIntegerを整数値として設定
	int inputInteger;
	//「整数値：」を表示
	cout << "整数値：";
	//inputIntegerに任意の整数値を読み込む
	cin >> inputInteger;
	//randomNumberを-5～5の範囲の整数の乱数として設定
	int randomNumber = rand() % 11-5;
	//「その値の±5の乱数を生成しました。それは（読み込んだ値の±5の整数）です。」を表示
	cout << "その値の±5の乱数を生成しました。それは" << inputInteger + randomNumber << "です。\n";		
	
}

//実行した結果、キーボードから読み込んだ値の±5のランダムな整数値の表示を確認
