//���K2-6 �L�[�{�[�h����ǂݍ��񂾓_���ɉ����āA�D/��/��/�s�𔻒肵�ĕ\������v���O�������쐬����B����͈ȉ��̂悤�ɍs�����ƁB�@0�`59���s��/60�`69/��70�`79����/80�`100���D

#include<iostream>

using namespace std;

int main()
{
	//�upositiveInteger�v�𐮐��l�Ƃ��Đݒ�
	int gradeScores;
	//�upositiveInteger�v�ɐ����l�������邽�߁A�u�_���F�v��\��
	cout << "�_���F";
	//�upositiveInteger�v�ɐ����̓ǂݍ��݂𑣂�
	cin >> gradeScores;
	//gradeScores��0�ȏ�100�ȉ��̏ꍇ�̓�����w��
	if (gradeScores >= 0 && gradeScores <= 100) {
		//gradeScores��0�ȏ�59�ȉ��̏ꍇ�̓�����w��
		if (gradeScores >= 0 && gradeScores <= 59) {
			//�u�s�v�ƕ\��
			cout << "�s��";
		}
		//gradeScores��60�ȏ�69�ȉ��̏ꍇ�̓�����w��
		else if (gradeScores >= 60 && gradeScores <= 69) {
			//�u�v�ƕ\��
			cout << "��";
		}
		//gradeScores��70�ȏ�79�ȉ��̏ꍇ�̓�����w��
		else if (gradeScores >= 70 && gradeScores <= 79) {
			//�u�ǁv�ƕ\��
			cout << "��";
		}
		//gradeScores��80�ȏ�100�ȉ��̏ꍇ�̓�����w��
		else if (gradeScores >= 80 && gradeScores <= 100) {
			//�u�D�v�ƕ\��
			cout << "�D";
		}
	}
	//gradeScores��0�ȏ�100�ȉ��͈̔͊O�̏ꍇ�̓�����w��
	else {
			cout << "�]���s�\";
	}
}

//���s�������ʁA�L�[�{�[�h����ǂݍ��񂾒l�ɉ����ĕ]���𔻒�ł��邱�Ƃ��m�F

