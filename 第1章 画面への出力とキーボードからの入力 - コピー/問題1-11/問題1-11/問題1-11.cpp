//���K1-11 �E�Ɏ����悤�ɁA��̎����l��ǂݍ��݁A���̍��v�ƕ��ς����߂ĕ\������v���O�������쐬����B�uinputRealNumber1:7.5 ���s inputRealNumber2:5.25 ���s ���v��12.75�ł��B ���s ���ς�6.375�ł��B�v

#include<iostream>

using namespace std;

int main()
{
	//inputRealNumber1�͎����l
	double inputRealNumber1;
	//iniputRealNumer2�͎����l
	double inputRealNumber2;

	//inputRealNumber1�̒l�̓��͂𑣂�
	cout << "inputRealNumber1:";
	//inputRealNumber1�Ɏ����l��ǂݍ���
	cin >> inputRealNumber1;

	//inputRealNumber2�̒l�̓��͂𑣂�
	cout << "inputRealNumber2:";
	//inputRealNumber2�Ɏ����l��ǂݍ���
	cin >> inputRealNumber2;

	//inuptRealNumber1��inuptRealNumber2�̍��v��\��
	cout << "���v��" << inputRealNumber1 + inputRealNumber2 << "�ł��B\n";
	//inuptRealNumber1��inuptRealNumber2�̕��ς�\��
	cout << "���ς�" << (inputRealNumber1 + inputRealNumber2) / 2 << "�ł��B\n";
}

	//���s�������ʁA�L�[�{�[�h����̓ǂݎ��Ǝ����l�̌v�Z���m�F