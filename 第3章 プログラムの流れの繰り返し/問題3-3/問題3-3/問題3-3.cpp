//�ȉ��Ɏ����悤�ɁA��̐����l��ǂݍ���ŁA�������ق��̐��ȏ�ő傫���ق��̐��ȉ��̑S�������A�������ق����珇�ɕ\������v���O�������쐬����B
//����A:37 ����B:28 
//28 29 30 31 32 33 34 35 36 37

#include<iostream>

using namespace std;

int main() 
{
	//inputIntegerA�𐮐��l�Ƃ��Đݒ�
	int inputIntegerA;
	//inputIntegerA�̓ǂݍ��݂𑣂�
	cout << "�����lA:";
	//�����lA�ɐ����l��ǂݍ���
	cin >> inputIntegerA;
	//inputIntegerB�𐮐��l�Ƃ��Đݒ�
	int inputIntegerB;
	//inputIntegerB�̓ǂݍ��݂𑣂�
	cout << "�����lB:";
	//�����lA�ɐ����l��ǂݍ���
	cin >> inputIntegerB;
	//maxInteger�𐮐��l�Ƃ��Đݒ�
	int maxInteger, minInteger;
	//inputIntegerA��inputIntegerB���傫���ꍇ�̓�����w��
	if (inputIntegerA > inputIntegerB) {
		//maxInteger��inputIntegerA�̒l����
		maxInteger = inputIntegerA;
		//minInteger��inputIntegerB�̒l����
		minInteger = inputIntegerB;
	//inputIntegerB��inputIntegerA���傫���ꍇ�̓�����w��
	}
	else {
		//maxInteger�̒l��inputIntegerB�̒l����
		maxInteger = inputIntegerB;
		//minInteger��inputIntegerA�̒l����
		minInteger = inputIntegerA;
	}
	//addInteger�𐮐��l�Ƃ��Đݒ肵�A�����l0����
	int addInteger = 0; 
	//differInteger�𐮐��l�Ƃ��Đݒ肵�AmaxInteger��minInteger�̍����l����
	int differInteger = maxInteger - minInteger;
	//do���̌J��Ԃ����w��
	 do {
		//�ŏ��l��addInteger���������l��\��
		cout << minInteger + addInteger << " ";
		//addInteger��1������
		addInteger++;
	//addInteger��differInteger�ȉ��̊ԌJ��Ԃ�
	} while (addInteger <= differInteger);
}

//���s�������ʁA�ǂݍ��񂾓�̒l�ɑ΂��A�������ق��̒l�ȏ�傫���ق��̒l�ȉ��̑S�������\������邱�Ƃ��m�F
