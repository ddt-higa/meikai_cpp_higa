//演習2-7 二つの値を読み込んで、大きいほうの値を表示するプログラムを作成せよ。

#include<iostream>

using namespace std;

int main()
{
	//「compairsonRealValue1」、「compairsonRealValue2」を実数値として設定
	double compairsonRealValue1, compairsonRealValue2;
	//「compairsonRealValue1：」を表示
	cout << "compairsonRealValue1：";
	//「compairsonRealValue1」に実数値を読み込む
	cin >> compairsonRealValue1;
	//「compairsonRealValue2：」を表示
	cout << "compairsonRealValue2：";
	//「compairsonRealValue2」に実数値を読み込む
	cin >> compairsonRealValue2;
	//maxRealValueにRealValue1とRealValue2の大きいほうの値を設定
	double maxRealValue = compairsonRealValue1 > compairsonRealValue2 ? compairsonRealValue1 : compairsonRealValue2;
	//maxRealValueの値を表示
	cout << "大きいほうの値は" << maxRealValue << "です。\n";
}

//実行した結果、読み込んだ2つの実数値の大きいほうの値を判定し表示することを確認

