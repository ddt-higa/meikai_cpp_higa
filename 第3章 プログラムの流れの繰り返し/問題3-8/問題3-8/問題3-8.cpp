//演習3-8 読み込んだ値が1未満であれば改行文字を出力しないように、List3-10を書き換えたプログラムを作成せよ。
/*
List3-10
//読み込んだ個数だけ*を表示（for文）
int main()
{
	int n;
	cout << "何個*を表示しますか：";
	cin >> n;

	for (int i = 0; i < n; i++)
		cout << '*';
	cout << '\n';
}
*/

#include <iostream>
using namespace std;

int main() 
{
	//読み込み値を整数型として宣言
	int inputNumber;
	//値の読み込みを促す
	cout << "何個*を表示しますか：";
	//値の読み込み
	cin >> inputNumber;
	//読み込んだ値分for分で繰り返し
	for (int determineNumber = 0; determineNumber < inputNumber; determineNumber++)
		//*を表示
		cout << '*';
	//inputNumberが1未満の時、何もしない
	if (inputNumber < 1) {
	//inputNumberが1以上の時、改行
	} else {
		cout << '\n';
	}
}

//実行した結果、読み込んだ値の分だけ*が表示され、読み込んだ値が1未満だと改行が表示されないことを確認



