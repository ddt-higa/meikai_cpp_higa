//演習2-16 月を1～12の整数値として読み込んで、それに対応する季節を表示するプログラムを作成せよ。

#include<iostream>

using namespace std;
 
int main() {
	//「monthsKey」を整数値として設定
	int monthsKey;
	//「月:」を表示
	cout << "月:";
	//月の選択を促す
	cin >> monthsKey;
	//monthsKeyのswitch文を作成
	switch (monthsKey){
		//読み込んだ整数値が1の場合、1月を表示
		case 1 : cout << "1月"; break;
		//読み込んだ整数値が2の場合、2月を表示
		case 2 : cout << "2月"; break;
		//読み込んだ整数値が3の場合、3月を表示
		case 3 : cout << "3月"; break;
		//読み込んだ整数値が4の場合、4月を表示
		case 4 : cout << "4月"; break;
		//読み込んだ整数値が5の場合、5月を表示	
		case 5 : cout << "5月"; break;
		//読み込んだ整数値が6の場合、6月を表示	
		case 6 : cout << "6月"; break;
		//読み込んだ整数値が7の場合、7月を表示	
		case 7 : cout << "7月"; break;
		//読み込んだ整数値が8の場合、8月を表示	
		case 8 : cout << "8月"; break;
		//読み込んだ整数値が9の場合、9月を表示	
		case 9 : cout << "9月"; break;
		//読み込んだ整数値が10の場合、10月を表示	
		case 10 : cout << "10月"; break;
		//読み込んだ整数値が11の場合、11月を表示	
		case 11 : cout << "11月"; break;
		//読み込んだ整数値が12の場合、12月を表示	
		case 12 : cout << "12月"; break;
	}
}

//実行した結果、読み込んだ整数値に対応した季節が表示されることを確認
