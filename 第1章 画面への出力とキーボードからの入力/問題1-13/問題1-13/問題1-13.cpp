//�ȉ��Ɏ����v���O�������쐬����B
//�E1���̐��̐����l�i���Ȃ킿1�ȏ�9�ȉ��̒l�j�������_���ɐ������ĕ\���B
//�E1���̕��̐����l�i���Ȃ킿-9�ȏ�-1�ȉ��̒l�j�������_���ɐ������ĕ\���B
//�E2���̐��̐����l�i���Ȃ킿10�ȏ�99�ȉ��̒l�j�������_���ɐ������ĕ\���B

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	//�����̎�ނ����݂̎�������������
	srand(time(NULL));
	//randomPositiveNumber1��1�ȏ�9�ȉ��̗������w��
	int randomPositiveNumber1 = rand() % 9+1;
	//randomNegativeNumber��-9�ȏ�-1�ȉ��̗������w��
	int randomNegativeNumber = rand() % 9-9;
	//randomPositiveNumber2��10�ȏ�99�ȉ��̗������w��
	int randomPositiveNumber2 = rand() % 90+10;
	//1�ȏ�9�ȉ��̗�����\��
	cout << "1���̐��̐����l�̗����F" << randomPositiveNumber1 << "�ł��B\n" ;
	//-9�ȏ�-1�ȉ��̗�����\��
	cout << "1���̕��̐����l�̗����F" << randomNegativeNumber << "�ł��B\n" ;
	//10�ȏ�99�ȉ��̗�����\��
	cout << "2���̐��̐����l�̗����F" << randomPositiveNumber2 << "�ł��B\n" ;

}

//���s�������ʁA1�ȏ�9�ȉ��A-9�ȏ�-1�ȉ��A10�ȏ�99�ȉ��̗����̕\�����m�F
