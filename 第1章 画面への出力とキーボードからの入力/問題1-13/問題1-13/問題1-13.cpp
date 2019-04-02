//以下に示すプログラムを作成せよ。
//・1桁の正の整数値（すなわち1以上9以下の値）をランダムに生成して表示。
//・1桁の負の整数値（すなわち-9以上-1以下の値）をランダムに生成して表示。
//・2桁の正の整数値（すなわち10以上99以下の値）をランダムに生成して表示。

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	//乱数の種類を現在の時刻から種を決定
	srand(time(NULL));
	//randomPositiveNumber1に1以上9以下の乱数を指定
	int randomPositiveNumber1 = rand() % 9+1;
	//randomNegativeNumberに-9以上-1以下の乱数を指定
	int randomNegativeNumber = rand() % 9-9;
	//randomPositiveNumber2に10以上99以下の乱数を指定
	int randomPositiveNumber2 = rand() % 90+10;
	//1以上9以下の乱数を表示
	cout << "1桁の正の整数値の乱数：" << randomPositiveNumber1 << "です。\n" ;
	//-9以上-1以下の乱数を表示
	cout << "1桁の負の整数値の乱数：" << randomNegativeNumber << "です。\n" ;
	//10以上99以下の乱数を表示
	cout << "2桁の正の整数値の乱数：" << randomPositiveNumber2 << "です。\n" ;

}

//実行した結果、1以上9以下、-9以上-1以下、10以上99以下の乱数の表示を確認
