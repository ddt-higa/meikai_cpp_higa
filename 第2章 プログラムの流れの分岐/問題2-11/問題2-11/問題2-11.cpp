//���K2-11 �L�[�{�[�h����ǂݍ��񂾎O�̐����̒����l�����߂ĕ\������v���O�������쐬����B���Ⴆ��1,2,3�̒����l��2�ŁA1,2,1�̒����l��1�ŁA3,3,3�̒����l��3�ł���B

#include<iostream>

using namespace std;

int main() {
	//�ucompairsonInteger1�v�A�ucompairsonInteger2�v�A�ucompairsonInteger3�v�𐮐��l�Ƃ��Đݒ�	
	int compairsonInteger1, compairsonInteger2, compairsonInteger3;
	//�ucompairsonInteger1�F�v��\��
	cout << "compairsonInteger1�F";
	//�ucompairsonInteger1�v�ɐ����l��ǂݍ���
	cin >> compairsonInteger1;
	//�ucompairsonInteger2�F�v��\��
	cout << "compairsonInteger2�F";
	//�ucompairsonInteger2�v�ɐ����l��ǂݍ���
	cin >> compairsonInteger2;
	//�ucompairsonInteger3�F�v��\��
	cout << "compairsonInteger3�F";
	//�ucompairsonInteger3�v�ɐ����l��ǂݍ���
	cin >> compairsonInteger3;
	//�umedianInteger�v��ݒ�l�Ƃ��Đݒ�
	int medianInteger;
	//�ucompairsonInteger1 <= compairsonInteger2 <= compairsonInteger3�v�̎��̓�����w��
	if (compairsonInteger1 <= compairsonInteger2 && compairsonInteger2 <= compairsonInteger3) {
		//�����l��compairsonInteger2��ݒ�
		medianInteger = compairsonInteger2;
	//�ucompairsonInteger1 <= compairsonInteger3 <= compairsonInteger2�v�̎��̓�����w��
	}else if (compairsonInteger1 <= compairsonInteger3 && compairsonInteger3 <= compairsonInteger2) {
		//�����l��compairsonInteger3��ݒ�
		medianInteger = compairsonInteger3;
		//�ucompairsonInteger2 <= compairsonInteger1 <= compairsonInteger3�v�̎��̓�����w��
	}else if (compairsonInteger2 <= compairsonInteger1 && compairsonInteger1 <= compairsonInteger3) {
		//�����l��compairsonInteger1��ݒ�
		medianInteger = compairsonInteger1;
		//�ucompairsonInteger2 <= compairsonInteger3 <= compairsonInteger1�v�̎��̓�����w��
	}else if (compairsonInteger2 <= compairsonInteger3 && compairsonInteger3 <= compairsonInteger1) {
		//�����l��compairsonInteger3��ݒ�
		medianInteger = compairsonInteger3;
		//�ucompairsonInteger3 <= compairsonInteger1 <= compairsonInteger2�v�̎��̓�����w��
	}else if (compairsonInteger3 <= compairsonInteger1 && compairsonInteger1 <= compairsonInteger2) {
		//�����l��compairsonInteger1��ݒ�
		medianInteger = compairsonInteger1;
		//�ucompairsonInteger3 <= compairsonInteger2 <= compairsonInteger1�v�̎��̓�����w��
	}else {
		//�����l��compairsonInteger2��ݒ�
		medianInteger = compairsonInteger2;
	}//�����l��\��
	cout << "�����l��" << medianInteger << "�ł��B\n";
}

//���s�������ʁA�ǂݍ���3�̒l�̒����l�����肳��邱�Ƃ��m�F

