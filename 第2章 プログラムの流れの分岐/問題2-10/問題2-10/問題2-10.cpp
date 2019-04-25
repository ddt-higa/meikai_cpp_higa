//演習2-10 キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ。

#include<iostream>

using namespace std;

int main()
{
	//「compairsonInteger1」、「compairsonInteger2」、「compairsonInteger3」を整数値として設定	
	int compairsonInteger1, compairsonInteger2, compairsonInteger3;

	//「compairsonInteger1：」を表示
	cout << "compairsonInteger1：";

	//「compairsonInteger1」に整数値を読み込む
	cin >> compairsonInteger1;

	//「compairsonInteger2：」を表示
	cout << "compairsonInteger2：";

	//「compairsonInteger2」に整数値を読み込む
	cin >> compairsonInteger2;

	//「compairsonInteger3：」を表示
	cout << "compairsonInteger3：";

	//「compairsonInteger3」に整数値を読み込む
	cin >> compairsonInteger3;

	//minにcompairsonInteger1の値を設定
	int min = compairsonInteger1;

	//compairsonInteger2の値がminより小さければ、minにcompairsonInteger2の値を設定
	if (compairsonInteger2 < min) {
		min = compairsonInteger2;
	} 
	//compairsonInteger3の値がminより小さければ、minにcompairsonInteger3の値を設定
	if (compairsonInteger3 < min) {
			min = compairsonInteger3;
	}
	//最小値の値を表示
	cout << "最小値は" << min << "です。\n";
}

//実行した結果、読み込んだ三つの整数の最小値が判定されることを確認
