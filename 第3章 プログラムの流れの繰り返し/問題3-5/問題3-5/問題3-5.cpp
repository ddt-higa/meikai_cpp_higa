//演習3-5 読み込んだ値が1未満であれば改行文字を出力しないようにList3-6を書きかえたプログラムを作成せよ。

/*読み込んだ個数だけ*を表示
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "何個*を表示しますか：";
	cin >> n;

	int i = 0;
	while (i < n) {
		cout << '*';
		i++;
	}
	cout << '\n';
}*/

#include<iostream>

using namespace std;

int main()
{
	//inputIntegerを整数値として設定
	int inputInteger;
	//表示する*の個数を質問
	cout << "何個*を表示しますか：";
	//inputIntegerに整数値を読み込み
	cin >> inputInteger;
	//addIntegerを整数として指定し、初期値0を代入
	int addInteger = 0;
	//addIntegerがinputIntegerより小さい場合のwhile文を指定
	while (addInteger < inputInteger) {
		//*を表示
		cout << '*';
		//addIntegerを一つずつ増加
		addInteger++;
	} 
	//inputIntegerが1より小さい場合の何もしない動作を指定
	if (inputInteger < 1) {
	//inputIntegerが1より大きい場合の動作を指定
	} else {
		//改行文字を表示
		cout << '\n';
	}
}

//実行した結果、読み込んだ値の個数分の「*」と改行文字の表示を確認
//ただし、読み込んだ値が1未満の場合、「*」と改行文字は表示されないことを確認
