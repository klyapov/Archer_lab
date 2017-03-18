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
	cout << "\t\t\t\t\t\t\t" << Archer::name[0] << endl; // использование статического компонента - имени лучника
	Archer Shiro (100, 200, 150, 350); // использование конструктора с характеристиками лучника
	Shiro.show(); // использование метода вывода информации о характеристиках лучника
	Archer (1); // использование констуктора специализации лучника при значении "1", или пропуск при знчении "0"
	do // перечисление наложенных бафов
		{
			cout << "\t\t\t\t\t\t\t\t\tU R have buff's? y(yes) or n(no): ";
			cin >> choice;
				{
					if (choice == 'y')
						{
							Shiro.buff('p', "name_buff", "effect_buff"); // использование метода с наложенными бафами
							cout << endl;
						}
					else cout << endl;
				}
		}while(choice == 'y');
	Archer ("red", 1);
	cout << "\tU R shots out bow in monster \n";
	Shiro.bow (5); // использование метода выстрела из лука
	Archer Dead;
	dead_archer (Dead); // использование дружественной функции
	return 0;
}
