//���K3-9 ���̐����l��0�܂ŃJ�E���g�_�E������List3-4��for���Ŏ�������B
/*
List3-4
//���̐����l��0�܂ŃJ�E���g�_�E���i����1�j
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "�J�E���g�_�E�����܂��B \n";
	do {
		cout << "���̐����l�F";
		cin >> x;
	} while (x <= 0);
	while (x >= 0) {
		cout << x << "\n"; //x�̒l��\��
		x--;			   //x�̒l���f�N�������g�i�l��������炷�j
	}
}
*/

#include<iostream>
using namespace std;
int main()
{
	//���͒l�𐮐��Ƃ��Đ錾
	int positiveInteger;
	//�J�E���g�_�E����錾
	cout << "�J�E���g�_�E�����܂��B \n";

	//�����𖞂����܂ŌJ��Ԃ����������s
	do {
		//���̐����l����͂��邱�Ƃ��Ăт���
		cout << "���̐�������͂��Ă��������B\n";
		//���̐����l�̓��͂𑣂�
		cout << "���̐����l�F";
		//�l�����
		cin >> positiveInteger;
	//���͒l�����̐����l�ƂȂ�܂ŌJ��Ԃ�
	} while (positiveInteger <= 0);

	//���͒l��������炵�Ă����A0�ȏ�̊ԌJ��Ԃ����������s
	for (; positiveInteger >= 0; positiveInteger--) {
		//���͒l��\��
		cout << positiveInteger << "\n";
	}
}

//���s�������ʁA���͒l��0�ɂȂ�܂ŃJ�E���g�_�E������邱�Ƃ��m�F �����͒l��1�ȏ�̐����l�̂ݎw��\
