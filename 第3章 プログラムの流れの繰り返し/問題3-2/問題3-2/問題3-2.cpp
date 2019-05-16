//演習3-2 2桁の整数値（10～99）を当てる《数当てゲーム》を作成せよ。

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main() 
{
	//乱数の種を設定
	srand(time(NULL));
	//正解の数を10～99の乱数で生成
	int integerOfCorrectAnswer = rand() % 90 + 10;
	//integerOfAnswerを整数として設定
	int integerOfAnswer;
	//数当てゲームの開始を表示
	cout << "数当てゲーム開始!!\n";
	//do文の繰り返しを指定
	do {
		//数がいくつか問う
		cout << "いくつかな？:\n";
		//解答を答える
		cin >> integerOfAnswer;
		//解答が正解の数より大きい場合の動作を指定
		if (integerOfAnswer > integerOfCorrectAnswer){
			//もっと小さい数であることを伝える
			cout << "もっと小さな数だよ\a\n";
			//解答が正解の数より小さい場合の動作を指定		
		} else if (integerOfAnswer < integerOfCorrectAnswer){
			//もっと大きな数であることを伝える
			cout << "もっと大きな数だよ\a\n";
		}//解答と正解が異なる間、繰り返す
	} while (integerOfAnswer != integerOfCorrectAnswer);
		//解答と正解が一致したら正解した旨を伝える
		cout << "大正解!!!!\n";
}

//実行した結果、ランダムに2桁の整数を生成し、数を当てるまでヒントを与えるプログラムを確認
