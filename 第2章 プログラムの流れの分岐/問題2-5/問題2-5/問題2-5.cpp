//演習2-5 正の整数を読み込んで、それを3で割った値に応じて『その値は3で割り切れます。』『その値3で割った剰余は1です。』『その値を剰余で割った値は2です。』のいずれかを表示するプログラムを作成せよ。※正でない値を読み込んだ場合は、『正でない値が入力されました。』と表示すること。

#include<iostream>

using namespace std;

int main()
{
	//「positiveInteger」を整数値として指定
	int positiveInteger;
	//「整数値：」を表示
	cout << "正の整数値：";
	//「positiveInteger」に整数値を読み込む
	cin >> positiveInteger;
		//「positiveInteger」が正の整数の場合の実行動作を指定
		if (positiveInteger > 0)
			//「positiveInteger」が3で割り切れる場合の実行動作を指定
			if (positiveInteger % 3 == 0)
				//「その値は3で割り切れます。」を表示
				cout << "その値は3で割り切れます。\n";
			//「positiveInteger」の3で割った剰余が1の場合の実行動作を指定
			if (positiveInteger % 3 == 1)
				//「その値を3で割った剰余は1です。」を表示
				cout << "その値を3で割った剰余は1です。\n";
			//「positiveInteger」の3で割った剰余が2の場合の実行動作を指定
			if (positiveInteger % 3 == 2)
				//「その値を3で割った剰余は2です。」を表示
				cout << "その値を3で割った剰余は2です。\n";
		//「positiveInteger」が正の整数でない場合の実行動作を指定
		else if (positiveInteger <= 0)
			//「正でない値が入力されました。」を表示
			cout << "正でない値が入力されました。\n";
}

//実行した結果、読み込んだ値における3の剰余の判別ができることを確認
//また、読み込んだ値が正の整数であるか判別ができることも確認
