//���K2-1 �E�Ɏ����悤�ɁA�����l��ǂݍ���ŁA���̐�Βl�����߂ĕ\������v���O�������쐬����B �����l�F-5 ���s ���̐�Βl��5�ł��B

#include<iostream>

using namespace std;

int main()
{
	//�uinputInteger�v�������Ƃ��Ďw��
	int inputInteger;
	//�u�����l�F�v��\��
	cout << "�����l�F";
	//�uinputInteger�vn�̓��͂𑣂�
	cin >> inputInteger;
	//�uinputInteger >= 0�v�̏ꍇ�̎��s������w��
	if (inputInteger >= 0)
	//�u���̐�Βl�́iinputInteger�ɓ��͂����l�j�ł��B�v
		cout << "���̐�Βl��" << inputInteger << "�ł��B\n";
	//�uinputInteger >= 0�v�ȊO�̏ꍇ�̎��s������w��
	else
	//�u���̐�Βl�́iinputInteger�ɓ��͂����l�j�ł��B�v
		cout << "���̐�Βl��" << -1 * inputInteger << "�ł��B\n";

}

//���s�������ʁA�ǂݍ��񂾐����l����Βl�ŕ\������邱�Ƃ��m�F


