//二つの整数値を読み込んで、小さいほうの値と大きいほうの値の両方を表示するプログラムを作成せよ。ただし、二つの整数値が等しい場合は、「二つの値は同じです。」と表示すること。

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
	//「min」、「max」を整数値として設定
	int min, max;
	//compairsonInteger1がcompairsonInteger2より小さい場合の動作を指定
	if (compairsonInteger1 < compairsonInteger2) {
		//minに小さいほうの値であるcompairsonInteger1の値を設定
		min = compairsonInteger1;
		//maxに大きいほうの値であるcompairsonInteger2の値を設定
		max = compairsonInteger2;
		//小さいほうの値がminの値であることを示すメッセージを表示
		cout << "小さいほうの値は" << min << "です。\n";
		//大きいほうの値がmaxの値であることを示すメッセージを表示
		cout << "大きいほうの値は" << max << "です。\n";
		//compairsonInteger2がcompairsonInteger1より小さい場合の動作を指定
	} else if (compairsonInteger1 > compairsonInteger2) {
		//minに小さいほうの値であるcompairsonInteger2の値を設定
		min = compairsonInteger2;
		//maxに大きいほうの値であるcompairsonInteger1の値を設定
		max = compairsonInteger1;
		//小さいほうの値がminの値であることを示すメッセージを表示
		cout << "小さいほうの値は" << min << "です。\n";
		//大きいほうの値がmaxの値であることを示すメッセージを表示
		cout << "大きいほうの値は" << max << "です。\n";
		//compairsonInteger1とcompairsonInteger2の値が等しい場合の動作を指定
	} else if (compairsonInteger1 = compairsonInteger2){ 
		//「二つの値は同じです。」を表示
		cout << "二つの値は同じです。\n";
	}
}

//実行した結果、二つの整数値を判定し、正しく判定結果が表示されることを確認


