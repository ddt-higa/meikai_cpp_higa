//���K2-7 ��̒l��ǂݍ���ŁA�傫���ق��̒l��\������v���O�������쐬����B

#include<iostream>

using namespace std;

int main()
{
	//�ucompairsonRealValue1�v�A�ucompairsonRealValue2�v�������l�Ƃ��Đݒ�
	double compairsonRealValue1, compairsonRealValue2;
	//�ucompairsonRealValue1�F�v��\��
	cout << "compairsonRealValue1�F";
	//�ucompairsonRealValue1�v�Ɏ����l��ǂݍ���
	cin >> compairsonRealValue1;
	//�ucompairsonRealValue2�F�v��\��
	cout << "compairsonRealValue2�F";
	//�ucompairsonRealValue2�v�Ɏ����l��ǂݍ���
	cin >> compairsonRealValue2;
	//maxRealValue��RealValue1��RealValue2�̑傫���ق��̒l��ݒ�
	double maxRealValue = compairsonRealValue1 > compairsonRealValue2 ? compairsonRealValue1 : compairsonRealValue2;
	//maxRealValue�̒l��\��
	cout << "�傫���ق��̒l��" << maxRealValue << "�ł��B\n";
}

//���s�������ʁA�ǂݍ���2�̎����l�̑傫���ق��̒l�𔻒肵�\�����邱�Ƃ��m�F

