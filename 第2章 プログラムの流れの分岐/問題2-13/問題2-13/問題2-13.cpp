//二つの整数値を読み込んで降順に並び替えるプログラムを作成せよ。

#include<iostream>
using namespace std;
int main()
{
	//「compairsonInteger1」、「compairsonInteger2」を整数値として設定	
	int compairsonInteger1, compairsonInteger2;
	//「compairsonInteger1」を表示
	cout << "compairsonInteger1:";
	//「compairsonInteger1」に整数値を読み込む
	cin >> compairsonInteger1;
	//「compairsonInteger2」を表示
	cout << "compairsonInteger2:";
	//「compairsonInteger2」に整数値を読み込む
	cin >> compairsonInteger2;
	//compairsonInteger1 < compairsonInteger2の場合の動作を指定
	if (compairsonInteger1 < compairsonInteger2) {
		//compairsonInteger1をexchangedIntegerに代入
		int exchangedInteger = compairsonInteger1;
		//compairsonInteger1にcompairsonInteger2の値を代入
		compairsonInteger1 = compairsonInteger2;
		//compairsonInteger2にexchangedIntegerの値を代入
		compairsonInteger2 = exchangedInteger;
	}//compairsonInteger1≧compairsonInteger2となるようにソートしたことを宣言
	cout << "compairsonInteger1≧compairsonInteger2となるようにソートしました。\n";
	//ソート後のcompairsonInteger1の値を宣言
	cout << "ソート後のcompairsonInteger1は" << compairsonInteger1 << "です。\n";
	//ソート後のcompairsonInteger2の値を宣言
	cout << "ソート後のcompairsonInteger2は" << compairsonInteger2 << "です。\n";
}

//実行した結果、二つの変数を降順にソートできることを確認
