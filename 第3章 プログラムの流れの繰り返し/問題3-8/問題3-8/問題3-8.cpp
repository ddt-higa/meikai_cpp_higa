//���K3-8 �ǂݍ��񂾒l��1�����ł���Ή��s�������o�͂��Ȃ��悤�ɁAList3-10�������������v���O�������쐬����B
/*
List3-10
//�ǂݍ��񂾌�����*��\���ifor���j
int main()
{
	int n;
	cout << "����*��\�����܂����F";
	cin >> n;

	for (int i = 0; i < n; i++)
		cout << '*';
	cout << '\n';
}
*/

#include <iostream>
using namespace std;

int main() 
{
	//�ǂݍ��ݒl�𐮐��^�Ƃ��Đ錾
	int inputNumber;
	//�l�̓ǂݍ��݂𑣂�
	cout << "����*��\�����܂����F";
	//�l�̓ǂݍ���
	cin >> inputNumber;
	//�ǂݍ��񂾒l��for���ŌJ��Ԃ�
	for (int determineNumber = 0; determineNumber < inputNumber; determineNumber++)
		//*��\��
		cout << '*';
	//inputNumber��1�����̎��A�������Ȃ�
	if (inputNumber < 1) {
	//inputNumber��1�ȏ�̎��A���s
	} else {
		cout << '\n';
	}
}

//���s�������ʁA�ǂݍ��񂾒l�̕�����*���\������A�ǂݍ��񂾒l��1�������Ɖ��s���\������Ȃ����Ƃ��m�F



