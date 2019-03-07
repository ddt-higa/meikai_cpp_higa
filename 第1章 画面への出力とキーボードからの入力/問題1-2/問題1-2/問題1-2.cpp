//演習1-2 using指令を削除して、coutをstd::coutに変更したプログラムを作成せよ。

#include <iostream>
//using指令を削除します
using namespace std;
int main()
{
	//coutをstd::coutに変更して「初めてのC++プログラム。」をコンソール画面に出力し、改行します。
	std::cout << "初めてのC++プログラム。\n";
	//coutをstd::coutに変更して結果として「画面に出力しています。」をコンソール画面に出力し、改行します。
	std::cout << "画面に出力しています。\n";
}