//���K2-10 �L�[�{�[�h����ǂݍ��񂾎O�̐����̍ŏ��l�����߂ĕ\������v���O�������쐬����B

#include<iostream>

using namespace std;

int main()
{
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

	//min��compairsonInteger1�̒l��ݒ�
	int min = compairsonInteger1;

	//compairsonInteger2�̒l��min��菬������΁Amin��compairsonInteger2�̒l��ݒ�
	if (compairsonInteger2 < min) {
		min = compairsonInteger2;
	} 
	//compairsonInteger3�̒l��min��菬������΁Amin��compairsonInteger3�̒l��ݒ�
	if (compairsonInteger3 < min) {
			min = compairsonInteger3;
	}
	//�ŏ��l�̒l��\��
	cout << "�ŏ��l��" << min << "�ł��B\n";
}

//���s�������ʁA�ǂݍ��񂾎O�̐����̍ŏ��l�����肳��邱�Ƃ��m�F
