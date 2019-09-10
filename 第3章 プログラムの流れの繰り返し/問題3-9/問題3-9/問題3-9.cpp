//演習3-9 正の整数値を0までカウントダウンするList3-4をfor文で実現せよ。
/*
List3-4
//正の整数値を0までカウントダウン（その1）
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "カウントダウンします。 \n";
	do {
		cout << "正の整数値：";
		cin >> x;
	} while (x <= 0);
	while (x >= 0) {
		cout << x << "\n"; //xの値を表示
		x--;			   //xの値をデクリメント（値を一つずつ減らす）
	}
}
*/

#include<iostream>
using namespace std;
int main()
{
	//入力値を整数として宣言
	int positiveInteger;
	//カウントダウンを宣言
	cout << "カウントダウンします。 \n";

	//条件を満たすまで繰り返し処理を実行
	do {
		//正の整数値を入力することを呼びかけ
		cout << "正の整数を入力してください。\n";
		//正の整数値の入力を促す
		cout << "正の整数値：";
		//値を入力
		cin >> positiveInteger;
	//入力値が正の整数値となるまで繰り返し
	} while (positiveInteger <= 0);

	//入力値を一つずつ減らしていき、0以上の間繰り返し処理を実行
	for (; positiveInteger >= 0; positiveInteger--) {
		//入力値を表示
		cout << positiveInteger << "\n";
	}
}

//実行した結果、入力値が0になるまでカウントダウンされることを確認 ※入力値は1以上の整数値のみ指定可能
