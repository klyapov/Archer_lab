#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "1-Created_class.cpp"
#include "2-Created_method.cpp"
#include "3-Created_constructor.cpp"
int main()
{	
	archer::bow_type("longbow"); // ������������� ������������ ���������� ������ bow_type
	cout << "\t\t\t\t\t\t\t" << crossbowman::name[1] << endl; // ��������� ������ archer, ������������� ������������ ����������
	crossbowman Robin(90, 200, 300, 350); // ��������� ������ archer, ������������� ������������
	Robin.show(); // ��������� ������ archer, ������������� ������
	crossbowman ("blue", 2); // ��������� ������ archer, ������������� ������������
	Robin.tension_force(); // ��������� ������ archer, ������������� ������������ ������
	cout << "\t\t\t\t\t\t\t" << archer::name[0] << endl; // ������������� ������������ ���������� - ����� �������
	archer Shiro (100, 200, 150, 250); // ������������� ������������ � ���������������� �������
	Shiro.show(); // ������������� ������ ������ ���������� � ��������������� �������
	archer (1); // ������������� ����������� ������������� ������� ��� �������� "1", ��� ������� ��� �������� "0"
	char choice;
	do // ������������ ���������� �����
		{
			cout << "\t\t\t\t\t\t\t\t\tU R have buff's? y(yes) or n(no): ";
			cin >> choice;
				{
					if (choice == 'y')
						{
							Shiro.buff('p', "name_buff", "effect_buff"); // ������������� ������ � ����������� ������
							cout << endl;
						}
					else cout << endl;
				}
		}while(choice == 'y');
	archer ("red", 1); // ������������� ������������ � ������ � ������� �����
	cout << "\tU R shots out bow in monster \n";
	Shiro.bow (5); // ������������� ������ �������� �� ����
	archer Dead;
	dead_archer (Dead); // ������������� ������������� �������
	return 0;
}
