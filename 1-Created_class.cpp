	// —оздание класса
	#ifndef CLASS_H_
	#define CLASS_H_
	class archer
		{
			private:
				int hitpoints, manapoints, damage, defence;
				static const int NAMESIZE = 3; // объ€вление статического компонента - константного значени€ количества имЄн лучников
				int tension_force_of_bow;
			public:
				static const string name[]; // объ€вление статического компонента - имени лучника
				archer (int hitpoints, int manapoints, int damage, int defence); // объ€вление конструктора характеристик лучника с использованием this
				archer (bool specialisation); // объ€вление конструктора специализации лучника
				archer (string color_of_cloak, int number_of_cloak); // объ€вление конструктора цвета и номера плаща лучника
				archer () // конструктор первичных харатеристик лучника, по-умолчанию
					{
						hitpoints = 0;
						manapoints = 0;
						damage = 0;
						defence = 0;
					}
				~archer() // объ€вление деструктора по-умолчанию
					{
						cout << "*\n"; // вывод на экран символа *, если был использован деструктор
					}
				void bow (const int ARROWS); // объ€вление метода выстрелов из лука
				void buff (char orientation_buff, string name_buff, string effect_buff); // метод перечислени€ наложенных бафов
				void show (); // метод вывода информации о характеристиках лучника на экран
				friend void dead_archer (const archer &name); // объ€вление дружественной функции
				virtual void tension_force () // виртуальный метод, позднее св€зывание
					{
						cout << "Primary tension force of bow: " << tension_force_of_bow << "N\n";
					}
				struct bow_type // объ€вление вложенного класса(структуры)
					{
						bow_type (string type) // объ€вление конструктора 
							{
								cout << "\t\t\t\tA type Your bow - " << type << endl;
							}
					};
		};
	class crossbowman : public archer // наследник класса лучник - арбалетчик
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
	const string archer::name[NAMESIZE] = {"Shiro", "Robin", "Parys"}; // инициализаци€ статического компонента - имЄн лучников
	void dead_archer (const archer &name) // инициализаци€ дружественной функции
		{
			cout << "\n\t\t\t\t  The lifetime of the archer is over. Archer is dead. You characteristics:\n\t\t\t\tHP: " << name.hitpoints 
			     << "\n\t\t\t\tMP: " << name.manapoints << "\n\t\t\t\tDMG: " << name.damage << "\n\t\t\t\tDEF: " << name.defence << endl;
		}	
	#endif
