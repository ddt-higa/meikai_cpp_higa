//���K3-5 �ǂݍ��񂾒l��1�����ł���Ή��s�������o�͂��Ȃ��悤��List3-6�������������v���O�������쐬����B

/*�ǂݍ��񂾌�����*��\��
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "����*��\�����܂����F";
	cin >> n;

	int i = 0;
	while (i < n) {
		cout << '*';
		i++;
	}
	cout << '\n';
}*/

#include<iostream>

using namespace std;

int main()
{
	//inputInteger�𐮐��l�Ƃ��Đݒ�
	int inputInteger;
	//�\������*�̌�������
	cout << "����*��\�����܂����F";
	//inputInteger�ɐ����l��ǂݍ���
	cin >> inputInteger;
	//
	int addInteger = 0;
	while (addInteger < inputInteger) {
		cout << '*';
		addInteger++;
	}
	if (inputInteger < 1) {
	} else {
		cout << '\n';
	}
}

//���s�������ʁA�ǂݍ��񂾒l�̌����́u*�v�Ɖ��s�����̕\�����m�F
//�������A�ǂݍ��񂾒l��1�����̏ꍇ�A�u*�v�Ɖ��s�����͕\������Ȃ����Ƃ��m�F
