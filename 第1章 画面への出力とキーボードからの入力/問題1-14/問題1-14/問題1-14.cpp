//���K1-14 �L�[�{�[�h����ǂݍ��񂾐����l�v���X�}�C�i�X5�͈̔͂̐����l�������_���ɐ������ĕ\������v���O�������쐬����B���L�[�{�[�h����ǂݍ��񂾒l��100�ł���΁A95�`105�̐����l��\�����邱�ƁB

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//�����̎���������Őݒ�
	srand(time(NULL));
	//inputInteger�𐮐��l�Ƃ��Đݒ�
	int inputInteger;
	//�u�����l�F�v��\��
	cout << "�����l�F";
	//inputInteger�ɔC�ӂ̐����l��ǂݍ���
	cin >> inputInteger;
	//randomNumber��-5�`5�͈̔͂̐����̗����Ƃ��Đݒ�
	int randomNumber = rand() % 11-5;
	//�u���̒l�́}5�̗����𐶐����܂����B����́i�ǂݍ��񂾒l�́}5�̐����j�ł��B�v��\��
	cout << "���̒l�́}5�̗����𐶐����܂����B�����" << inputInteger + randomNumber << "�ł��B\n";		
	
}

//���s�������ʁA�L�[�{�[�h����ǂݍ��񂾒l�́}5�̃����_���Ȑ����l�̕\�����m�F
