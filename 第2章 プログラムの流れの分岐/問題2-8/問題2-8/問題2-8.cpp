//���K2-8 ��̐����l��ǂݍ���ŁA�����̒l�̍���\������v���O�������쐬����B

#include<iostream>

using namespace std;

int main()
{
	//�ucompairsonInteger1�v�A�ucompairsonInteger2�v�𐮐��l�Ƃ��Đݒ�
	int compairsonInteger1, compairsonInteger2;
	//�ucompairsonInteger1�F�v��\��
	cout << "compairsonInteger1�F";
	//�ucompairsonInteger1�v�ɐ����l��ǂݍ���
	cin >> compairsonInteger1;
	//�ucompairsonInteger2�F�v��\��
	cout << "compairsonInteger2�F";
	//�ucompairsonInteger2�v�ɐ����l��ǂݍ���
	cin >> compairsonInteger2;
	//maxCompairsonInteger��compairsonInteger1��compairsonInteger2�̑傫���ق���ݒ�
	int maxCompairsonInteger = compairsonInteger1 > compairsonInteger2 ? compairsonInteger1 : compairsonInteger2;
	//minCompairsonInteger��compairsonInteger1��compairsonInteger2�̏������ق���ݒ�
	int minCompairsonInteger = compairsonInteger1 < compairsonInteger2 ? compairsonInteger1 : compairsonInteger2;
	//���͂�����̐����l�̍�����\��
	cout << "��̐����l�̍���" << maxCompairsonInteger - minCompairsonInteger << "�ł��B\n";
}

//���s�������ʁA���͂��������l�̍������\������邱�Ƃ��m�F
