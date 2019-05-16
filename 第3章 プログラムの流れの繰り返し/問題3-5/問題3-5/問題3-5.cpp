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
	//
	int addInteger = 0;
	while (addInteger < inputInteger) {
		cout << '*';
		addInteger++;
	}
	if (inputInteger < 1) {
	} else {
		cout << '\n';
	}
}

//実行した結果、読み込んだ値の個数分の「*」と改行文字の表示を確認
//ただし、読み込んだ値が1未満の場合、「*」と改行文字は表示されないことを確認
