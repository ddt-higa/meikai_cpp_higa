//おみくじプログラムを作成せよ。乱数を生成して、『大吉』、『中吉』、『小吉』、『吉』、『末吉』、『凶』、『大凶』、のいずれかを表示すること。

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//乱数の種を設定
	srand(time(NULL));
	//0,1,2,3,4,5,6いずれかの乱数を作成
	int randomNumber = rand() % 7;
	//作成した乱数を表示
	cout << "randomNumber:" << randomNumber << "\n";
	//randomNumberのswich文を作成
	switch (randomNumber){
		//乱数が0の場合は大吉と表示
		case 0: cout << "大吉\n"; break;
		//乱数が1の場合はチョキと表示
		case 1: cout << "中吉\n"; break;
		//乱数が2の場合はパーと表示
		case 2: cout << "小吉\n"; break;
		//乱数が3の場合はパーと表示
		case 3: cout << "吉\n"; break;
		//乱数が4の場合はパーと表示
		case 4: cout << "末吉\n"; break;
		//乱数が5の場合はパーと表示
		case 5: cout << "凶\n"; break;
		//乱数が6の場合はパーと表示
		case 6: cout << "大凶\n"; break;
	}
}

//実行した結果、おみくじの作成を確認
