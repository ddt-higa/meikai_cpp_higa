//���K3-2 2���̐����l�i10�`99�j�𓖂Ă�s�����ăQ�[���t���쐬����B

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main() 
{
	//�����̎��ݒ�
	srand(time(NULL));
	//�����̐���10�`99�̗����Ő���
	int integerOfCorrectAnswer = rand() % 90 + 10;
	//integerOfAnswer�𐮐��Ƃ��Đݒ�
	int integerOfAnswer;
	//�����ăQ�[���̊J�n��\��
	cout << "�����ăQ�[���J�n!!\n";
	//do���̌J��Ԃ����w��
	do {
		//�����������₤
		cout << "�������ȁH:\n";
		//�𓚂𓚂���
		cin >> integerOfAnswer;
		//�𓚂������̐����傫���ꍇ�̓�����w��
		if (integerOfAnswer > integerOfCorrectAnswer){
			//�����Ə��������ł��邱�Ƃ�`����
			cout << "�����Ə����Ȑ�����\a\n";
			//�𓚂������̐���菬�����ꍇ�̓�����w��		
		} else if (integerOfAnswer < integerOfCorrectAnswer){
			//�����Ƒ傫�Ȑ��ł��邱�Ƃ�`����
			cout << "�����Ƒ傫�Ȑ�����\a\n";
		}//�𓚂Ɛ������قȂ�ԁA�J��Ԃ�
	} while (integerOfAnswer != integerOfCorrectAnswer);
		//�𓚂Ɛ�������v�����琳�������|��`����
		cout << "�吳��!!!!\n";
}

//���s�������ʁA�����_����2���̐����𐶐����A���𓖂Ă�܂Ńq���g��^����v���O�������m�F
