//���K2-4 ���̐����l��ǂݍ���ŁA���ꂪ5�Ŋ���؂��΁w���̒l��5�Ŋ���؂�܂��B�x�ƕ\�����A�����łȂ���΁w���̒l��5�Ŋ���؂�܂���B�x�ƕ\������v���O�������쐬����B�����łȂ��l��ǂݍ��񂾏ꍇ�́A�w���łȂ��l�����͂���܂����B�x�ƕ\�����邱�ƁB
#include<iostream>

using namespace std;
int main()
{
	//�upositiveInteger�v�𐮐��l�Ƃ��Ďw��
	int positiveInteger;
	//�u�����l�F�v��\��
	cout << "�����l�F";
	//�upositiveInteger�v�ɐ����l��ǂݍ���
	cin >> positiveInteger;
	//�upositiveInteger�v�����̐����̏ꍇ�̎��s������w��
	if (positiveInteger > 0) {
		//�upositiveInteger�v��5�Ŋ���؂��ꍇ�̎��s������w��
		if (positiveInteger % 5 == 0) {
			//�u���̒l��5�Ŋ���؂�܂��B�v��\��
			cout << "���̒l��5�Ŋ���؂�܂��B\n";
			//�upositiveInteger�v��5�Ŋ���؂��ꍇ�̎��s������w��
		}
		else {
			//�u���̒l��5�Ŋ���؂�܂���B�v��\��
			cout << "���̒l��5�Ŋ���؂�܂���B\n";
		}
	}
	//�upositiveInteger�v�����̐����ł͂Ȃ��ꍇ�̎��s������w��
	else {
		//�u���łȂ��l�����͂���܂����B�v��\��
		cout << "���łȂ��l�����͂���܂����B\n";
	}
}

//���s�������ʁA5�Ŋ���؂�鐳�̐���������ł��邱�Ƃ��m�F