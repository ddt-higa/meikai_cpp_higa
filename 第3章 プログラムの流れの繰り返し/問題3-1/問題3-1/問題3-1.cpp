//演習3-1 読み込んだ整数値の符号を判定するList2-5を好きなだけ何度でも入力・表示を繰り返せるようにしたプログラムを作成せよ。

/*List2-5 読み込んだ整数値の符号（正/負/0）を判定して表示
#incude<iostream>
 using namespace std;
 int main()
 {
	int n;

	cout << "整数値：";
	cin >> n;

	if(n > 0)
		cout << "その値は正です。\n;"
	else if(n < 0)
		cout << "その値は負です。\n";
	else
		cout << "その値は0です。\n";
 }
*/

#include<string>
#include<iostream>

using namespace std;

int main() 
{
	//retryPointを繰り返し判定用変数として定義
	string retryPoint;

	//do文の繰り返しを指定
	do {
		//determinationIntegerを整数として指定
		int determinationInteger;
		//「整数値：」を表示
		cout << "整数値：";
		//determinationIntegerに整数値を読み込む
		cin >> determinationInteger;

		//determinationIntegerが0より大きいときの動作を指定
		if (determinationInteger > 0) {
			//読み込んだ値が正であることを表示
			cout << "その値は正です。\n";
			//determinationIntegerが0より小さいときの動作を指定
		} else if (determinationInteger < 0) {
			//読み込んだ値が負であることを表示
			cout << "その値は負です。\n";
		//determinationIntegerが0のときの動作を指定
		} else {
			//読み込んだ値が0であることを表示
			cout << "その値は0です。\n";
		}
		
		//do文の繰り返しを指定
		do {
			//もう一度入力・表示を繰り返すか問う
			cout << "もう一度？ Y・・・Yes/N・・・No：";
			//入力・表示を繰り返すかの返答を読み込む
			cin >> retryPoint;
			//読み込んだ値がYes or No以外の値の場合の動作を指定
			if (retryPoint != "Y" && retryPoint != "y" && retryPoint != "N" && retryPoint != "n") {
				cout << "Yes or Noで答えてください。\n";
			}//読み込んだ値がY、y、N、nのいずれでもない間、入力・表示を繰り返す
		} while (retryPoint != "Y" && retryPoint != "y" && retryPoint != "N" && retryPoint != "n");
	//読み込んだ値がYまたはyの間、入力・表示を繰り返す
	} while (retryPoint == "Y" || retryPoint == "y");
}

//実行した結果、読み込んだ値の正負の判定を好きなだけ繰り返せるプログラムを確認

