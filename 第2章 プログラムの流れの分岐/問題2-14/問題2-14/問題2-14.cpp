//0,1,2�̂����ꂩ�̒l�̗����𐶐����A0�ł���΁u�O�[�v�A1�ł���΁u�`���L�v�A2�ł���΁u�p�[�v�ƕ\������v���O�������쐬����B��swich����p���Ď������邱�ƁB

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//�����̎��ݒ�
	srand(time(NULL));
	//0,1,2�����ꂩ�̗������쐬
	int randomNumber = rand() % 3;
	//�쐬����������\��
	cout << "randomNumber:" << randomNumber << "\n";
	//randomNumber��swich�����쐬
	switch (randomNumber)
	{
	//������0�̏ꍇ�̓O�[�ƕ\��
	case 0: cout << "�O�[\n"; break;
	//������1�̏ꍇ�̓`���L�ƕ\��
	case 1: cout << "�`���L\n"; break;
	//������2�̏ꍇ�̓p�[�ƕ\��
	case 2: cout << "�p�[\n"; break;
	}
}

//���s�������ʁA�쐬���������ɑΉ������u�O�[�v�A�u�`���L�v�A�u�p�[�v�̕\�����m�F

