//���K2-3 ���int�^�ϐ�a�Ab�ɒl��ǂݍ���ŁA���̑召�֌W���ȉ��̂����ꂩ�ŕ\������v���O�������쐬����B�wa�̂ق����傫���ł��B�x�wb�̂ق����傫���ł��B�x�wa��b�͓����l�ł��B�x

#include<iostream>

using namespace std;

int main()
{
	//�ua�v�𐮐��^�Ŏw��
	int a;
	//�ub�v�𐮐��^�Ŏw��
	int b;
	//�ua�̒l�F�v��\��
	cout << "a�̒l�F";
	//�ua�v�̒l�̓��͂𑣂�
	cin >> a;
	//�ub�̒l�F�v��\��
	cout << "b�̒l�F";
	//�ub�v�̒l�̓��͂𑣂�
	cin >> b;
	//�ua > b�v�̏ꍇ�̎��s������w��
	if (a > b) {
		//�u�wa�̕����傫���ł��B�x�v��\��
		cout << "�wa�̕����傫���ł��B�x";
	}
	//�ua < b�v�̏ꍇ�̎��s������w��
	else if (a < b) {
		//�u�wb�̕����傫���ł��B�x�v��\��
		cout << "�wb�̕����傫���ł��B�x";
	}
	//�ua = b�v�̏ꍇ�̎��s������w��
	else if (a = b) {
		//�u�wa��b�͓����l�ł��B�x�v��\��
		cout << "�wa��b�͓����l�ł��B�x";
	}
}

//���s�������ʁAa�̕����傫���ꍇ�Ab�̕����傫���ꍇ�Aa��b�������l�̏ꍇ�̓�����m�F

