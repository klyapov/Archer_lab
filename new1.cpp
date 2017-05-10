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
	archer::bow_type("longbow"); // использование конструктора вложенного класса bow_type
	cout << "\t\t\t\t\t\t\t" << crossbowman::name[1] << endl; // наследник класса archer, использование статического компонента
	crossbowman Robin(90, 200, 300, 350); // наследник класса archer, использование конструктора
	Robin.show(); // наследник класса archer, использование метода
	crossbowman ("blue", 2); // наследник класса archer, использование конструктора
	Robin.tension_force(); // наследник класса archer, использование виртуального метода
	cout << "\t\t\t\t\t\t\t" << archer::name[0] << endl; // использование статического компонента - имени лучника
	archer Shiro (100, 200, 150, 250); // использование конструктора с характеристиками лучника
	Shiro.show(); // использование метода вывода информации о характеристиках лучника
	archer (1); // использование констуктора специализации лучника при значении "1", или пропуск при значении "0"
	char choice;
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
	archer ("red", 1); // использование конструктора с цветом и номером плаща
	cout << "\tU R shots out bow in monster \n";
	Shiro.bow (5); // использование метода выстрела из лука
	archer Dead;
	dead_archer (Dead); // использование дружественной функции
	return 0;
}
