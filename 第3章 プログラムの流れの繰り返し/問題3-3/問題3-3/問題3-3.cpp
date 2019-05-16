//以下に示すように、二つの整数値を読み込んで、小さいほうの数以上で大きいほうの数以下の全整数を、小さいほうから順に表示するプログラムを作成せよ。
//整数A:37 整数B:28 
//28 29 30 31 32 33 34 35 36 37

#include<iostream>

using namespace std;

int main() 
{
	//inputIntegerAを整数値として設定
	int inputIntegerA;
	//inputIntegerAの読み込みを促す
	cout << "整数値A:";
	//整数値Aに整数値を読み込む
	cin >> inputIntegerA;
	//inputIntegerBを整数値として設定
	int inputIntegerB;
	//inputIntegerBの読み込みを促す
	cout << "整数値B:";
	//整数値Aに整数値を読み込む
	cin >> inputIntegerB;
	//maxIntegerを整数値として設定
	int maxInteger, minInteger;
	//inputIntegerAがinputIntegerBより大きい場合の動作を指定
	if (inputIntegerA > inputIntegerB) {
		//maxIntegerにinputIntegerAの値を代入
		maxInteger = inputIntegerA;
		//minIntegerにinputIntegerBの値を代入
		minInteger = inputIntegerB;
	//inputIntegerBがinputIntegerAより大きい場合の動作を指定
	}
	else {
		//maxIntegerの値にinputIntegerBの値を代入
		maxInteger = inputIntegerB;
		//minIntegerにinputIntegerAの値を代入
		minInteger = inputIntegerA;
	}
	//addIntegerを整数値として設定し、初期値0を代入
	int addInteger = 0; 
	//differIntegerを整数値として設定し、maxIntegerとminIntegerの差分値を代入
	int differInteger = maxInteger - minInteger;
	//do文の繰り返しを指定
	 do {
		//最小値にaddIntegerを加えた値を表示
		cout << minInteger + addInteger << " ";
		//addIntegerを1ずつ増加
		addInteger++;
	//addIntegerがdifferInteger以下の間繰り返す
	} while (addInteger <= differInteger);
}

//実行した結果、読み込んだ二つの値に対し、小さいほうの値以上大きいほうの値以下の全整数が表示されることを確認
