//List 3-4��while���I������x�̒l��-1�ɂȂ邱�Ƃ��m�F�ł���悤�ɏ����������v���O�������쐬����B

/*List3-4 
���̐����l��0�܂ŃJ�E���g�_�E���i����1�j
#include<iostream>

using namespace std;
int main()
{
	int x;

	cout << "�J�E���g�_�E�����܂��B\n";
	do {
		cout << "���̐����l�F";
		cin >> x;
	} while (x <= 0);

	while (x >= 0) {
		cout << x << "\n"; //x�̒l��\��
		x--; //x�̒l���f�N�������g�i�l������炷�j
	}
 }*/

#include<iostream>

using namespace std;

int main()
{
	//x�̒l�𐮐��l�Ƃ��Đݒ�
	int positiveInteger;
	//�J�E���g�_�E����錾
	cout << "�J�E���g�_�E�����܂��B\n";
	//do���̌J��Ԃ�������w��
	do {
		//���̐����l�̓��͂𑣂�
		cout << "���̐����l�F";
		//���̐����l��ǂݍ���
		cin >> positiveInteger;
	//positiveInteger��0�ȉ��̊ԁA�J��Ԃ�
	} while (positiveInteger <= -2);
	//positiveInteger��0�ȏ�̎���while�����w��
	while (positiveInteger >= -1) {
		//positiveInteger�̒l��\��
		cout << positiveInteger << "\n";
		//positiveInteger�̒l���f�N�������g
		positiveInteger--;
	}
}

//���s�������ʁAwhile���̏I������x�̒l��-1�ɂȂ邱�Ƃ��m�F
