//���݂����v���O�������쐬����B�����𐶐����āA�w��g�x�A�w���g�x�A�w���g�x�A�w�g�x�A�w���g�x�A�w���x�A�w�勥�x�A�̂����ꂩ��\�����邱�ƁB

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//�����̎��ݒ�
	srand(time(NULL));
	//0,1,2,3,4,5,6�����ꂩ�̗������쐬
	int randomNumber = rand() % 7;
	//�쐬����������\��
	cout << "randomNumber:" << randomNumber << "\n";
	//randomNumber��swich�����쐬
	switch (randomNumber){
		//������0�̏ꍇ�͑�g�ƕ\��
		case 0: cout << "��g\n"; break;
		//������1�̏ꍇ�̓`���L�ƕ\��
		case 1: cout << "���g\n"; break;
		//������2�̏ꍇ�̓p�[�ƕ\��
		case 2: cout << "���g\n"; break;
		//������3�̏ꍇ�̓p�[�ƕ\��
		case 3: cout << "�g\n"; break;
		//������4�̏ꍇ�̓p�[�ƕ\��
		case 4: cout << "���g\n"; break;
		//������5�̏ꍇ�̓p�[�ƕ\��
		case 5: cout << "��\n"; break;
		//������6�̏ꍇ�̓p�[�ƕ\��
		case 6: cout << "�勥\n"; break;
	}
}

//���s�������ʁA���݂����̍쐬���m�F
