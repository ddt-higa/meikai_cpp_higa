//��̐����l��ǂݍ���ō~���ɕ��ёւ���v���O�������쐬����B

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
	//compairsonInteger1 < compairsonInteger2�̏ꍇ�̓�����w��
	if (compairsonInteger1 < compairsonInteger2) {
		//compairsonInteger1��exchangedInteger�ɑ��
		int exchangedInteger = compairsonInteger1;
		//compairsonInteger1��compairsonInteger2�̒l����
		compairsonInteger1 = compairsonInteger2;
		//compairsonInteger2��exchangedInteger�̒l����
		compairsonInteger2 = exchangedInteger;
	}//compairsonInteger1��compairsonInteger2�ƂȂ�悤�Ƀ\�[�g�������Ƃ�錾
	cout << "compairsonInteger1��compairsonInteger2�ƂȂ�悤�Ƀ\�[�g���܂����B\n";
	//�\�[�g���compairsonInteger1�̒l��錾
	cout << "�\�[�g���compairsonInteger1��" << compairsonInteger1 << "�ł��B\n";
	//�\�[�g���compairsonInteger2�̒l��錾
	cout << "�\�[�g���compairsonInteger2��" << compairsonInteger2 << "�ł��B\n";
}

//���s�������ʁA��̕ϐ����~���Ƀ\�[�g�ł��邱�Ƃ��m�F
