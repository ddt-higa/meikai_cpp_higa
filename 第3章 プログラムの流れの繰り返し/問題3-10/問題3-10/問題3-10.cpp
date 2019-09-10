//演習3-10 演習3-9とは逆に、0から正の整数値までカウントアップするプログラムを作成せよ。
#include <iostream>
using namespace std;

int main()
{
	//入力値を整数として宣言
	int positiveInteger;
	//カウントアップを宣言
	cout << "カウントアップします。\n";

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

	//判定値を一つずつ増やしていき、入力値と同じ値になるまで繰り返し処理を実行
	for (int determineNumber = 0; determineNumber <= positiveInteger; determineNumber++) {
		//入力値を表示
		cout << determineNumber << "\n";
	}
}

//入力値まで0からカウントアップすることを確認 ※入力値は正の整数のみ指定可能
