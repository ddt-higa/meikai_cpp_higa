//演習1-3 文の終端を示すセミコロン;が欠如しているとどうなるか。プログラムをコンパイルして検証せよ。

#include <iostream>
using namespace std;
int main()
{
	//セミコロン;を欠如させます
	cout << "初めてのC++プログラム。\n"
	//「画面に出力しています。」をコンソール画面に出力し、改行します
	cout << "画面に出力しています。\n";
}
//検証の結果、コンパイルエラーが発生し、「";"が必要です。」「構文エラー:";"が、識別子'cout'の前に必要です。」というメッセージが表示されました。