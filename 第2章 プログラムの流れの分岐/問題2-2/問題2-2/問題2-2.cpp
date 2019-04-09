//演習2-2 List2-5の最後のelseを、else if(n == 0)に変更するとどうなるか検討せよ。

//List2-5 読み込んだ整数値の符号（正/負/0）を判定して表示
//#include<iostream>

//using namespace std;

//int main()
//{
	//int n;
	//cout << "整数値：";
	//cin >> n;
	//if (n > 0)
		//cout << "その値は正です。\n";
	//else if (n < 0)
		//cout << "その値は負です。\n";
	//else 
		//cout << "その値は0です。\n";
//}

//演習2-2
#include<iostream>

using namespace std;

int main()
{
	//「n」を整数型として指定
	int n;
	//「整数値：」を表示
	cout << "整数値：";
	//「n」の入力を促す
	cin >> n;
	//「n > 0」の場合の実行動作を指定
	if (n > 0) {
		//「その値は正です。」を表示
		cout << "その値は正です。\n";
	}
	//「n < 0」の場合の実行動作を指定
	else if (n < 0) {
		//「その値は負です。」を表示
		cout << "その値は負です。\n";
	}
	//「n = 0」の場合の実行動作を指定
	else if (n == 0) {
		//「その値は0です。」を表示
		cout << "その値は0です。\n";
	}
}

//実行した結果、List2-5と同く、入力値が正の整数、負の整数、0か判定できることを確認
