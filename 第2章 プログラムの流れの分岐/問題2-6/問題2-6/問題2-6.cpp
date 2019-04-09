//演習2-6 キーボードから読み込んだ点数に応じて、優/良/可/不可を判定して表示するプログラムを作成せよ。判定は以下のように行うこと。　0～59→不可/60～69/可→70～79→良/80～100→優

#include<iostream>

using namespace std;

int main()
{
	//「positiveInteger」を整数値として設定
	int gradeScores;
	//「positiveInteger」に整数値を代入するため、「点数：」を表示
	cout << "点数：";
	//「positiveInteger」に整数の読み込みを促す
	cin >> gradeScores;
	//gradeScoresが0以上100以下の場合の動作を指定
	if (gradeScores >= 0 && gradeScores <= 100) {
		//gradeScoresが0以上59以下の場合の動作を指定
		if (gradeScores >= 0 && gradeScores <= 59) {
			//「不可」と表示
			cout << "不可";
		}
		//gradeScoresが60以上69以下の場合の動作を指定
		else if (gradeScores >= 60 && gradeScores <= 69) {
			//「可」と表示
			cout << "可";
		}
		//gradeScoresが70以上79以下の場合の動作を指定
		else if (gradeScores >= 70 && gradeScores <= 79) {
			//「良」と表示
			cout << "良";
		}
		//gradeScoresが80以上100以下の場合の動作を指定
		else if (gradeScores >= 80 && gradeScores <= 100) {
			//「優」と表示
			cout << "優";
		}
	}
	//gradeScoresが0以上100以下の範囲外の場合の動作を指定
	else {
			cout << "評価不能";
	}
}

//実行した結果、キーボードから読み込んだ値に応じて評価を判定できることを確認

