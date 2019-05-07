//0,1,2のいずれかの値の乱数を生成し、0であれば「グー」、1であれば「チョキ」、2であれば「パー」と表示するプログラムを作成せよ。※swich文を用いて実現すること。

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//乱数の種を設定
	srand(time(NULL));
	//0,1,2いずれかの乱数を作成
	int randomNumber = rand() % 3;
	//作成した乱数を表示
	cout << "randomNumber:" << randomNumber << "\n";
	//randomNumberのswich文を作成
	switch (randomNumber)
	{
	//乱数が0の場合はグーと表示
	case 0: cout << "グー\n"; break;
	//乱数が1の場合はチョキと表示
	case 1: cout << "チョキ\n"; break;
	//乱数が2の場合はパーと表示
	case 2: cout << "パー\n"; break;
	}
}

//実行した結果、作成した乱数に対応した「グー」、「チョキ」、「パー」の表示を確認

