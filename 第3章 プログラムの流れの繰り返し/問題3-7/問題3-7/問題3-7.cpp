//���K3-7 �ȉ��Ɏ����悤�ɁA���̐����l��ǂݍ���ŁA���̌������o�͂���v���O�������쐬����B
//���̐����l�F1254
//���̒l��4���ł��B
#include <iostream>
using namespace std;

int main()
{
	//�ǂݍ��ޒl�𐮐��Ƃ��Đ錾
	int positiveInteger;
	//������錾
	int count = 0;
	//�ǂݍ��񂾒l��0���傫���Ȃ�܂ŌJ��Ԃ�����
	do {
		//�ǂݍ��ޒl������
		cout << "���̐����l�F";
		//�l��ǂݍ���
		cin >> positiveInteger;
		//�ǂݍ��񂾒l��0�ȉ��̏ꍇ�A���̒l����͂��邱�Ƃ𑣂�
		if (positiveInteger <= 0) {
			//�u���̒l���w�肵�Ă��������B�v�̃��b�Z�[�W���o��
			cout << "���̒l���w�肵�Ă��������B\n";
			//���̒l���w�肵���ꍇ�A�����Ȃ�
		}
		else {

		}
		//�ǂݍ��񂾒l��0�ȉ��ɂȂ�ΌJ��Ԃ��I��
	} while (positiveInteger <= 0);
	//�������J�E���g
	while (positiveInteger > 0) {
		//�ǂݍ��񂾒l���ꌅ���폜
		positiveInteger /= 10;
		//�������J�E���g
		count++;
	}
	//������\��
	cout << "���̒l��" << count << "���ł��B";
}

//���s�������ʁA�ǂݍ��񂾒l�̌������\������邱�Ƃ��m�F
