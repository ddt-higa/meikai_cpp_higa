//List 3-4のwhile文終了時にxの値が-1になることを確認できるように書きかえたプログラムを作成せよ。

/*List3-4 
正の整数値を0までカウントダウン（その1）
#include<iostream>

using namespace std;
int main()
{
	int x;

	cout << "カウントダウンします。\n";
	do {
		cout << "正の整数値：";
		cin >> x;
	} while (x <= 0);

	while (x >= 0) {
		cout << x << "\n"; //xの値を表示
		x--; //xの値をデクリメント（値を一つ減らす）
	}
 }*/

#include<iostream>

using namespace std;

int main()
{
	//xの値を整数値として設定
	int positiveInteger;
	//カウントダウンを宣言
	cout << "カウントダウンします。\n";
	//do文の繰り返し動作を指定
	do {
		//正の整数値の入力を促す
		cout << "正の整数値：";
		//正の整数値を読み込む
		cin >> positiveInteger;
	//positiveIntegerが0以下の間、繰り返す
	} while (positiveInteger <= -2);
	//positiveIntegerが0以上の時のwhile文を指定
	while (positiveInteger >= -1) {
		//positiveIntegerの値を表示
		cout << positiveInteger << "\n";
		//positiveIntegerの値をデクリメント
		positiveInteger--;
	}
}

//実行した結果、while文の終了時にxの値が-1になることを確認
