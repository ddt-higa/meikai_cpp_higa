//���K2-2 List2-5�̍Ō��else���Aelse if(n == 0)�ɕύX����Ƃǂ��Ȃ邩��������B

//List2-5 �ǂݍ��񂾐����l�̕����i��/��/0�j�𔻒肵�ĕ\��
//#include<iostream>

//using namespace std;

//int main()
//{
	//int n;
	//cout << "�����l�F";
	//cin >> n;
	//if (n > 0)
		//cout << "���̒l�͐��ł��B\n";
	//else if (n < 0)
		//cout << "���̒l�͕��ł��B\n";
	//else 
		//cout << "���̒l��0�ł��B\n";
//}

//���K2-2
#include<iostream>

using namespace std;

int main()
{
	//�un�v�𐮐��^�Ƃ��Ďw��
	int n;
	//�u�����l�F�v��\��
	cout << "�����l�F";
	//�un�v�̓��͂𑣂�
	cin >> n;
	//�un > 0�v�̏ꍇ�̎��s������w��
	if (n > 0) {
		//�u���̒l�͐��ł��B�v��\��
		cout << "���̒l�͐��ł��B\n";
	}
	//�un < 0�v�̏ꍇ�̎��s������w��
	else if (n < 0) {
		//�u���̒l�͕��ł��B�v��\��
		cout << "���̒l�͕��ł��B\n";
	}
	//�un = 0�v�̏ꍇ�̎��s������w��
	else if (n == 0) {
		//�u���̒l��0�ł��B�v��\��
		cout << "���̒l��0�ł��B\n";
	}
}

//���s�������ʁAList2-5�Ɠ����A���͒l�����̐����A���̐����A0������ł��邱�Ƃ��m�F
