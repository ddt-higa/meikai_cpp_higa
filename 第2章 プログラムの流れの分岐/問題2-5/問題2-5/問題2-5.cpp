//���K2-5 ���̐�����ǂݍ���ŁA�����3�Ŋ������l�ɉ����āw���̒l��3�Ŋ���؂�܂��B�x�w���̒l3�Ŋ�������]��1�ł��B�x�w���̒l����]�Ŋ������l��2�ł��B�x�̂����ꂩ��\������v���O�������쐬����B�����łȂ��l��ǂݍ��񂾏ꍇ�́A�w���łȂ��l�����͂���܂����B�x�ƕ\�����邱�ƁB

#include<iostream>

using namespace std;

int main()
{
	//�upositiveInteger�v�𐮐��l�Ƃ��Ďw��
	int positiveInteger;
	//�u�����l�F�v��\��
	cout << "���̐����l�F";
	//�upositiveInteger�v�ɐ����l��ǂݍ���
	cin >> positiveInteger;
		//�upositiveInteger�v�����̐����̏ꍇ�̎��s������w��
		if (positiveInteger > 0)
			//�upositiveInteger�v��3�Ŋ���؂��ꍇ�̎��s������w��
			if (positiveInteger % 3 == 0)
				//�u���̒l��3�Ŋ���؂�܂��B�v��\��
				cout << "���̒l��3�Ŋ���؂�܂��B\n";
			//�upositiveInteger�v��3�Ŋ�������]��1�̏ꍇ�̎��s������w��
			if (positiveInteger % 3 == 1)
				//�u���̒l��3�Ŋ�������]��1�ł��B�v��\��
				cout << "���̒l��3�Ŋ�������]��1�ł��B\n";
			//�upositiveInteger�v��3�Ŋ�������]��2�̏ꍇ�̎��s������w��
			if (positiveInteger % 3 == 2)
				//�u���̒l��3�Ŋ�������]��2�ł��B�v��\��
				cout << "���̒l��3�Ŋ�������]��2�ł��B\n";
		//�upositiveInteger�v�����̐����łȂ��ꍇ�̎��s������w��
		else if (positiveInteger <= 0)
			//�u���łȂ��l�����͂���܂����B�v��\��
			cout << "���łȂ��l�����͂���܂����B\n";
}

//���s�������ʁA�ǂݍ��񂾒l�ɂ�����3�̏�]�̔��ʂ��ł��邱�Ƃ��m�F
//�܂��A�ǂݍ��񂾒l�����̐����ł��邩���ʂ��ł��邱�Ƃ��m�F
