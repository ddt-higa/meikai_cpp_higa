//���K3-10 ���K3-9�Ƃ͋t�ɁA0���琳�̐����l�܂ŃJ�E���g�A�b�v����v���O�������쐬����B
#include <iostream>
using namespace std;

int main()
{
	//���͒l�𐮐��Ƃ��Đ錾
	int positiveInteger;
	//�J�E���g�A�b�v��錾
	cout << "�J�E���g�A�b�v���܂��B\n";

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

	//����l��������₵�Ă����A���͒l�Ɠ����l�ɂȂ�܂ŌJ��Ԃ����������s
	for (int determineNumber = 0; determineNumber <= positiveInteger; determineNumber++) {
		//���͒l��\��
		cout << determineNumber << "\n";
	}
}

//���͒l�܂�0����J�E���g�A�b�v���邱�Ƃ��m�F �����͒l�͐��̐����̂ݎw��\
