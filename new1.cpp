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
	char choice;
	cout << "\t\t\t\t\t\t\t" << Archer::name[0] << endl; // ������������� ������������ ���������� - ����� �������
	Archer Shiro (100, 200, 150, 350); // ������������� ������������ � ���������������� �������
	Shiro.show(); // ������������� ������ ������ ���������� � ��������������� �������
	Archer (1); // ������������� ����������� ������������� ������� ��� �������� "1", ��� ������� ��� ������� "0"
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
	Archer ("red", 1);
	cout << "\tU R shots out bow in monster \n";
	Shiro.bow (5); // ������������� ������ �������� �� ����
	Archer Dead;
	dead_archer (Dead); // ������������� ������������� �������
	return 0;
}
