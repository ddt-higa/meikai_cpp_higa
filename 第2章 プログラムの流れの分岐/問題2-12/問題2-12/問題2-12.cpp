//��̐����l��ǂݍ���ŁA�������ق��̒l�Ƒ傫���ق��̒l�̗�����\������v���O�������쐬����B�������A��̐����l���������ꍇ�́A�u��̒l�͓����ł��B�v�ƕ\�����邱�ƁB

#include<iostream>

using namespace std;

int main()
{
	//�ucompairsonInteger1�v�A�ucompairsonInteger2�v�𐮐��l�Ƃ��Đݒ�	
	int compairsonInteger1, compairsonInteger2;
	//�ucompairsonInteger1�v��\��
	cout << "compairsonInteger1:"; 
	//�ucompairsonInteger1�v�ɐ����l��ǂݍ���
	cin >> compairsonInteger1;
	//�ucompairsonInteger2�v��\��
	cout << "compairsonInteger2:";
	//�ucompairsonInteger2�v�ɐ����l��ǂݍ���
	cin >> compairsonInteger2;
	//�umin�v�A�umax�v�𐮐��l�Ƃ��Đݒ�
	int min, max;
	//compairsonInteger1��compairsonInteger2��菬�����ꍇ�̓�����w��
	if (compairsonInteger1 < compairsonInteger2) {
		//min�ɏ������ق��̒l�ł���compairsonInteger1�̒l��ݒ�
		min = compairsonInteger1;
		//max�ɑ傫���ق��̒l�ł���compairsonInteger2�̒l��ݒ�
		max = compairsonInteger2;
		//�������ق��̒l��min�̒l�ł��邱�Ƃ��������b�Z�[�W��\��
		cout << "�������ق��̒l��" << min << "�ł��B\n";
		//�傫���ق��̒l��max�̒l�ł��邱�Ƃ��������b�Z�[�W��\��
		cout << "�傫���ق��̒l��" << max << "�ł��B\n";
		//compairsonInteger2��compairsonInteger1��菬�����ꍇ�̓�����w��
	} else if (compairsonInteger1 > compairsonInteger2) {
		//min�ɏ������ق��̒l�ł���compairsonInteger2�̒l��ݒ�
		min = compairsonInteger2;
		//max�ɑ傫���ق��̒l�ł���compairsonInteger1�̒l��ݒ�
		max = compairsonInteger1;
		//�������ق��̒l��min�̒l�ł��邱�Ƃ��������b�Z�[�W��\��
		cout << "�������ق��̒l��" << min << "�ł��B\n";
		//�傫���ق��̒l��max�̒l�ł��邱�Ƃ��������b�Z�[�W��\��
		cout << "�傫���ق��̒l��" << max << "�ł��B\n";
		//compairsonInteger1��compairsonInteger2�̒l���������ꍇ�̓�����w��
	} else if (compairsonInteger1 = compairsonInteger2){ 
		//�u��̒l�͓����ł��B�v��\��
		cout << "��̒l�͓����ł��B\n";
	}
}

//���s�������ʁA��̐����l�𔻒肵�A���������茋�ʂ��\������邱�Ƃ��m�F


