#include <iostream>
#include <string>//��������� ���������� ��� ����� � ��������
using namespace std; //��������� ������������ ����
void main() 
{
setlocale(LC_ALL, "Rus");// �������� ������� �������
cout << "������ ����! ���� ����� �����.� ������ ���� �������.=)" << endl;
cout << "���� ������� � ���� � ������ ? "  << endl;
cout << "� ���� ���� ��, ��� ���� �����! =)" << endl << endl;
const int size = 7;//�������� ���������� ��������
string ���_���[size] = { "������","����","�������","���","���","���������","������" };//������� �������� �������
double ����[size] = { 98,39,102,139,327,166,170 };//������ ���� ��������� ��� 7 ��������
int ���_���[size] = { 99,21,12,44,33,33,38 };//������ ���������� ������� ������ � �������
double Sum[size] = {0};//������� ��� ����� ���� �������
cout << "�������� ����� �� ������: " << endl;
for (int i = 0; i < size; i++)//����������� �� ����� 1 �� ����� ������� �� 7, ����� ������ �� ������)))
		cout << i << "\t" << ���_���[i] << "\t" << ����[i] << "\t���\t" << ���_���[i] << "��." << endl;//����� �������, ����� ���� ������� ����� �������� ������ � ����� �������
int ����� = 0; //���������� ������
	double ������ = 0; // ������ ��� ����� �������
for (int j = 1; j <= 2; j++)//������ � ����� ��� � ��� 2 ����������, ����� �� ����� �������� � ������� ����������
{
	cout << endl << "���������� �" << j << endl;
double sum = 0;
for (int i = 0; i < size; i++)//������ � �����, ��� ������ � ������� ��� ��������� ������, ���� �� ������� 1 ����� �� � ������� ����
{
		cout << i + 1 << "\t" << ���_���[i] << "\t" << ����[i] << "\t���\t" << "��.\t";//������ �������)
		cin >> �����;// ������� ���������� ������
		if (���_���[i] < �����)
				{
					cout << "������! " << "� ������� ������ \t" << ���_���[i] << endl << "������� ���������� ������\t";
					cin >> �����;
					���_���[i] = ���_���[i] - �����;
					Sum[i] = ����[i] * �����;
					continue;
				}


		���_���[i] = ���_���[i] - �����;
		Sum[i] = ����[i] * �����;
}
for (int i = 0; i < size; i++)
{
	sum += Sum[i];
}
cout << sum;
if (sum >= 600)// ���� ����� �� 600 ������ ������, ����� ������ , ���� ���, �� �� ����� ������
	{
		cout << endl << " � ��� 10% ������!!!" << endl;
		cout << endl << "�� ������ ��������� - " << sum - sum / 100 * 10 << "���" << endl;
	}

else if (400 <= sum)//���� ����� �� 400 ������ ����� ������ 5%, ���� ������ ���������� 3 �������
	{
		cout << endl << " � ��� 5% ������!!!" << endl;
		cout << endl << "�� ������ ��������� - " << sum - sum / 100 * 5 << "���" << endl;
	}
else
	{
		cout << endl << " � ��� ��� ������!!!" << endl;
		cout << endl << "�� ������ ��������� - " << endl;
	}
������ += sum;
cout << endl << "�������: " << endl;
for (int i = 0; i < size; i++)
cout << i + 1 << "\t" << ���_���[i] << "\t" << ����[i] << "\t���\t" << ���_���[i] << "��." << endl;
}

cout << "������� �������� = " << ������ << endl << endl;

cout << "������� �� ������� ����, ��� ���� ����� � ���� � ������!!!" << endl;
}
