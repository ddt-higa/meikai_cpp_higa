//���K3-1 �ǂݍ��񂾐����l�̕����𔻒肷��List2-5���D���Ȃ������x�ł����́E�\�����J��Ԃ���悤�ɂ����v���O�������쐬����B

/*List2-5 �ǂݍ��񂾐����l�̕����i��/��/0�j�𔻒肵�ĕ\��
#incude<iostream>
 using namespace std;
 int main()
 {
	int n;

	cout << "�����l�F";
	cin >> n;

	if(n > 0)
		cout << "���̒l�͐��ł��B\n;"
	else if(n < 0)
		cout << "���̒l�͕��ł��B\n";
	else
		cout << "���̒l��0�ł��B\n";
 }
*/

#include<string>
#include<iostream>

using namespace std;

int main() 
{
	//retryPoint���J��Ԃ�����p�ϐ��Ƃ��Ē�`
	string retryPoint;

	//do���̌J��Ԃ����w��
	do {
		//determinationInteger�𐮐��Ƃ��Ďw��
		int determinationInteger;
		//�u�����l�F�v��\��
		cout << "�����l�F";
		//determinationInteger�ɐ����l��ǂݍ���
		cin >> determinationInteger;

		//determinationInteger��0���傫���Ƃ��̓�����w��
		if (determinationInteger > 0) {
			//�ǂݍ��񂾒l�����ł��邱�Ƃ�\��
			cout << "���̒l�͐��ł��B\n";
			//determinationInteger��0��菬�����Ƃ��̓�����w��
		} else if (determinationInteger < 0) {
			//�ǂݍ��񂾒l�����ł��邱�Ƃ�\��
			cout << "���̒l�͕��ł��B\n";
		//determinationInteger��0�̂Ƃ��̓�����w��
		} else {
			//�ǂݍ��񂾒l��0�ł��邱�Ƃ�\��
			cout << "���̒l��0�ł��B\n";
		}
		
		//do���̌J��Ԃ����w��
		do {
			//������x���́E�\�����J��Ԃ����₤
			cout << "������x�H Y�E�E�EYes/N�E�E�ENo�F";
			//���́E�\�����J��Ԃ����̕ԓ���ǂݍ���
			cin >> retryPoint;
			//�ǂݍ��񂾒l��Yes or No�ȊO�̒l�̏ꍇ�̓�����w��
			if (retryPoint != "Y" && retryPoint != "y" && retryPoint != "N" && retryPoint != "n") {
				cout << "Yes or No�œ����Ă��������B\n";
			}//�ǂݍ��񂾒l��Y�Ay�AN�An�̂�����ł��Ȃ��ԁA���́E�\�����J��Ԃ�
		} while (retryPoint != "Y" && retryPoint != "y" && retryPoint != "N" && retryPoint != "n");
	//�ǂݍ��񂾒l��Y�܂���y�̊ԁA���́E�\�����J��Ԃ�
	} while (retryPoint == "Y" || retryPoint == "y");
}

//���s�������ʁA�ǂݍ��񂾒l�̐����̔�����D���Ȃ����J��Ԃ���v���O�������m�F

