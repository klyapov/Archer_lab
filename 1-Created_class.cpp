	// Создание класса - лучник
	#ifndef CLASS_H_
	#define CLASS_H_
	class Monstr;
	class Archer
		{
			private:
				int hitpoints, manapoints, damage, defence;
				static const int NAMESIZE = 3; // объявление статического компонента - константного значения количества имён лучников
			public:
				static const string name[]; // объявление статического компонента - имени лучника
				Archer (int hitpoints, int manapoints, int damage, int defence); // объявление конструктора характеристик лучника с использованием this
				Archer (bool specialisation); // объявление конструктора специализации лучника
				Archer (string color_of_cloak, int number_of_cloak); // объявление конструктора цвета и номера плаща лучника
				Archer() // конструктор первичных харатеристик лучника, по-умолчанию
					{
						hitpoints = 0;
						manapoints = 0;
						damage = 0;
						defence = 0;
					}
				~Archer() // объявление деструктора по-умолчанию
					{
						cout << "*\n"; // вывод на экран символа *, если был использован деструктор
					}
				void bow (const int ARROWS); // объявление метода выстрелов из лука
				void buff (char orientation_buff, string name_buff, string effect_buff); // метод перечисления наложенных бафов
				void show (); // метод вывода информации о характеристиках лучника на экран
				friend void dead_archer (const Archer &name); // объявление дружественной функции
		};
	void dead_archer (const Archer &name) // инициализация дружественной функции
		{
			cout << "\n\t\t\t\t  The lifetime of the archer is over. Archer is dead. You characteristics:\n\t\t\t\tHP: " << name.hitpoints 
			     << "\n\t\t\t\tMP: " << name.manapoints << "\n\t\t\t\tDMG: " << name.damage << "\n\t\t\t\tDEF: " << name.defence << endl;
		}
	const string Archer::name[NAMESIZE] = {"Shiro", "Robin", "Parys"}; // инициализация статического компонента - имён лучников
	#endif
