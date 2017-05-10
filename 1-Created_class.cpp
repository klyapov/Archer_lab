	// Создание класса
	#ifndef CLASS_H_
	#define CLASS_H_
	class archer
		{
			private:
				int hitpoints, manapoints, damage, defence;
				static const int NAMESIZE = 3; // объявление статического компонента - константного значения количества имен
				int tension_force_of_bow;
			public:
				static const string name[]; // объявление статического компонента - имени
				archer (int hitpoints, int manapoints, int damage, int defence); // объявление конструктора характеристик с ипользованием this
				archer (bool specialisation); // объявление конструктора специализации
				archer (string color_of_cloak, int number_of_cloak); // объявление конструктора цвета и номера плаща
				archer () // конструктор по-умолчанию, первичные характеристики
					{
						hitpoints = 0;
						manapoints = 0;
						damage = 0;
						defence = 0;
					}
				~archer() // оьъявление деструктора по-умолчанию
					{
						cout << "*\n"; // вывод на экран символа *, если деструктор был использован
					}
				void bow (const int ARROWS); // объявление метода - выстрелы из лука
				void buff (char orientation_buff, string name_buff, string effect_buff); // объявление метода - перечисление бафов
				void show (); // объявление метода - вывод информации о характеристиках
				friend void dead_archer (const archer &name); // объявление дружественной функции
				virtual void tension_force () // виртуальный метод, позднее связывание
					{
						cout << "Primary tension force of bow: " << tension_force_of_bow << "N\n";
					}
				struct bow_type // объявление вложенного класса (структуры)
					{
						bow_type (string type) // объявление конструктора
							{
								cout << "\t\t\t\tA type Your bow - " << type << endl;
							}
					};
		};
	class crossbowman : public archer // наследник класса archer
		{
			private:
				int tension_force_of_crossbow;
				bool alive;
			public:
				crossbowman(int hitpoints, int manapoints, int damage, int defence) : archer(hitpoints, manapoints, damage, defence) // конструктор класса archer
					{
						alive =1;
					}
				crossbowman(string color_of_cloak, int number_of_cloak) : archer(color_of_cloak, number_of_cloak) // конструктор класса archer
					{
						alive = 1;
					}
				~crossbowman() // деструктор класса
					{
						cout << "(*)\n";
					}
				void tension_force () // виртуальный метод класса archer
					{
						cout << "Primary tension force of crossbow: " << tension_force_of_crossbow << "N\n";
					}
		};
	const string archer::name[NAMESIZE] = {"Shiro", "Robin", "Parys"}; // инициализация статического компонента - имён лучника
	void dead_archer (const archer &name) // инициализация дружественной функции
		{
			cout << "\n\t\t\t\t  The lifetime of the archer is over. Archer is dead. You characteristics:\n\t\t\t\tHP: " << name.hitpoints 
			     << "\n\t\t\t\tMP: " << name.manapoints << "\n\t\t\t\tDMG: " << name.damage << "\n\t\t\t\tDEF: " << name.defence << endl;
		}	
	#endif
