//演習2-11 キーボードから読み込んだ三つの整数の中央値を求めて表示するプログラムを作成せよ。※例えば1,2,3の中央値は2で、1,2,1の中央値は1で、3,3,3の中央値は3である。

#include<iostream>

using namespace std;

int main() {
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
	//「medianInteger」を設定値として設定
	int medianInteger;
	//「compairsonInteger1 <= compairsonInteger2 <= compairsonInteger3」の時の動作を指定
	if (compairsonInteger1 <= compairsonInteger2 && compairsonInteger2 <= compairsonInteger3) {
		//中央値にcompairsonInteger2を設定
		medianInteger = compairsonInteger2;
	//「compairsonInteger1 <= compairsonInteger3 <= compairsonInteger2」の時の動作を指定
	}else if (compairsonInteger1 <= compairsonInteger3 && compairsonInteger3 <= compairsonInteger2) {
		//中央値にcompairsonInteger3を設定
		medianInteger = compairsonInteger3;
		//「compairsonInteger2 <= compairsonInteger1 <= compairsonInteger3」の時の動作を指定
	}else if (compairsonInteger2 <= compairsonInteger1 && compairsonInteger1 <= compairsonInteger3) {
		//中央値にcompairsonInteger1を設定
		medianInteger = compairsonInteger1;
		//「compairsonInteger2 <= compairsonInteger3 <= compairsonInteger1」の時の動作を指定
	}else if (compairsonInteger2 <= compairsonInteger3 && compairsonInteger3 <= compairsonInteger1) {
		//中央値にcompairsonInteger3を設定
		medianInteger = compairsonInteger3;
		//「compairsonInteger3 <= compairsonInteger1 <= compairsonInteger2」の時の動作を指定
	}else if (compairsonInteger3 <= compairsonInteger1 && compairsonInteger1 <= compairsonInteger2) {
		//中央値にcompairsonInteger1を設定
		medianInteger = compairsonInteger1;
		//「compairsonInteger3 <= compairsonInteger2 <= compairsonInteger1」の時の動作を指定
	}else {
		//中央値にcompairsonInteger2を設定
		medianInteger = compairsonInteger2;
	}//中央値を表示
	cout << "中央値は" << medianInteger << "です。\n";
}

//実行した結果、読み込んだ3つの値の中央値が判定されることを確認

