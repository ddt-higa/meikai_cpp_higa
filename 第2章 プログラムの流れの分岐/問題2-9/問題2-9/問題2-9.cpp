//���K2-9 ��̐����l��ǂݍ���ŁA�����̒l�̍���10�ȉ��ł���΁w�����̍���10�ȉ��ł��B�x�ƕ\�����A�����łȂ���΁w�����̍���11�ȏ�ł��B�x�ƕ\������v���O�������쐬����B

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

	//�ǂݍ��񂾒l�̍���10�ȉ��̏ꍇ�̓�����w��
	if (maxCompairsonInteger - minCompairsonInteger <= 10) {
		//����10�ȉ��ł��邱�Ƃ�\��
		cout << "�����̍���10�ȉ��ł��B\n";
		//�ǂݍ��񂾒l�̍���10�ȉ��ȊO�̏ꍇ�̓�����w��
	} else {
		//����11�ȏ�ł��邱�Ƃ�\��
		cout << "�����̍���11�ȏ�ł��B\n";
	}
}

//���s�������ʁA��̐����l�̍���10�ȏ�ł��邩�ǂ����𔻒�