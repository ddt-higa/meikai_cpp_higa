//演習1-11 右に示すように、二つの実数値を読み込み、その合計と平均を求めて表示するプログラムを作成せよ。「inputRealNumber1:7.5 改行 inputRealNumber2:5.25 改行 合計は12.75です。 改行 平均は6.375です。」

#include<iostream>

using namespace std;

int main()
{
	//inputRealNumber1は実数値
	double inputRealNumber1;
	//iniputRealNumer2は実数値
	double inputRealNumber2;

	//inputRealNumber1の値の入力を促す
	cout << "inputRealNumber1:";
	//inputRealNumber1に実数値を読み込む
	cin >> inputRealNumber1;

	//inputRealNumber2の値の入力を促す
	cout << "inputRealNumber2:";
	//inputRealNumber2に実数値を読み込む
	cin >> inputRealNumber2;

	//inuptRealNumber1とinuptRealNumber2の合計を表示
	cout << "合計は" << inputRealNumber1 + inputRealNumber2 << "です。\n";
	//inuptRealNumber1とinuptRealNumber2の平均を表示
	cout << "平均は" << (inputRealNumber1 + inputRealNumber2) / 2 << "です。\n";
}

	//実行した結果、キーボードからの読み取りと実数値の計算を確認