//���K1-14 �L�[�{�[�h����ǂݍ��񂾐����l�v���X�}�C�i�X5�͈̔͂̐����l�������_���ɐ������ĕ\������v���O�������쐬����B���L�[�{�[�h����ǂݍ��񂾒l��100�ł���΁A95�`105�̐����l��\�����邱�ƁB

#include<iostream>

using namespace std;

int main()
{
	//inputInteger�𐮐��l�Ƃ��Đݒ�
	int inputInteger;

	//�u�����l�v�̓��͂𑣂�
	cout << "�����l:";
	//inputInteger�ɔC�ӂ̐����l��ǂݍ���
	cin >> inputInteger;

	int randomNumber = rand() % 11 - 5;

	cout << "���̒l�́}5�̗����𐶐����܂����B�����" << inputInteger + randomNumber << "�ł��B\n";

}

//���s�������ʁA1�ȏ�9�ȉ��A-9�ȏ�-1�ȉ��A10�ȏ�99�ȉ��̗����̕\�����m�F
