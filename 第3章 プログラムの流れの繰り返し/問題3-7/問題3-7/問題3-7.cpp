//演習3-7 以下に示すように、正の整数値を読み込んで、その桁数を出力するプログラムを作成せよ。
//正の整数値：1254
//その値は4桁です。
#include <iostream>
using namespace std;

int main()
{
	//読み込む値を整数として宣言
	int positiveInteger;
	//桁数を宣言
	int count = 0;
	//読み込んだ値が0より大きくなるまで繰り返し処理
	do {
		//読み込む値を質問
		cout << "正の整数値：";
		//値を読み込む
		cin >> positiveInteger;
		//読み込んだ値が0以下の場合、正の値を入力することを促す
		if (positiveInteger <= 0) {
			//「正の値を指定してください。」のメッセージを出力
			cout << "正の値を指定してください。\n";
			//正の値を指定した場合、処理なし
		}
		else {

		}
		//読み込んだ値が0以下になれば繰り返し終了
	} while (positiveInteger <= 0);
	//桁数をカウント
	while (positiveInteger > 0) {
		//読み込んだ値を一桁ずつ削除
		positiveInteger /= 10;
		//桁数をカウント
		count++;
	}
	//桁数を表示
	cout << "その値は" << count << "桁です。";
}

//実行した結果、読み込んだ値の桁数が表示されることを確認
