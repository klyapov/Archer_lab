	//Описание конструкторов
	#ifndef CONSTRUCTOR_H_
	#define CONSTRUCTOR_H_
		Archer::Archer(int hitpoints, int manapoints, int damage, int defence) // конструктор характеристик лучника с использованием указателя this
			{
				this -> hitpoints = hitpoints; 
				this -> manapoints = manapoints; 
				this -> damage = damage;
				this -> defence = defence;
			} 
		Archer::Archer(bool specialization) // конструктор специализации лучника
			{
				int profession;
				srand(time(0));
				string not_found_str;
				char second_chanse;
				cout << "\t\t\t\t\t    Choice your specialization:\n\n";
				cout << "\t\t\t\t\t/\t\t|\t\t\\\n\t\t\t\t       /\t\t|\t\t \\\n\t\t\t\t      /\t\t\t|\t\t  \\\n\t\t\t\t     /\t\t\t|\t\t   \\\n\t\t\t\t    V\t\t\tV\t\t    V" << endl;
				cout << "\t\t\t  (1)Murderer\t	" << "  (2)Hunter\t" << "	   (3)Poisoner\n";
				cout << "\t\t\tGaining superiority	Controls the battlefield   Poisons enmies making\n \t\t\tby killing enemies	by catching enemies   	   them easy prey for\n \t\t\twith powerful shots	into traps.		   the poisoner.\n \t\t\tfrom the bow.\n";
				while (specialization !=0)
					{
						cout << "\n\t\t\t\t\t\t\t\t\tEnter number of cpecialization:_ \b\b";
						cin >> profession;
						if (profession == 1)
							{
								cout << "\t\t\t\t\t\tYou - Murderer\n";
								specialization = 0;
							}
						else if (profession == 2)
							{
								cout << "\t\t\t\t\t\tYou - Hunter\n";
								specialization = 0;
							}
						else if (profession == 3)
							{
								cout << "\t\t\t\t\t\tYou - Poisoner\n";
								specialization = 0;
							}
						else 
							{
								cout << " This specialization is not available.\n That to try again, make choice\n or specialization will be chosen randomly.\n";
								cout << "\n U R want choise of spesialization?\n Enter y(yes) or n(no):";
								cin >> second_chanse;
								if (second_chanse == 'y')
									{
										specialization = 1;
									}
								else 
									{
										profession = 1 + rand()%3;
										if (profession == 1)
											{
												cout << "\t\t\t\t\t\tYou - Murderer\n";
												specialization = 0;
											}
										else if (profession == 2)
											{
												cout << "\t\t\t\t\t\tYou - Hunter\n";
												specialization = 0;
											}
										else if (profession == 3)
											{
												cout << "\t\t\t\t\t\tYou - Poisoner\n";
												specialization = 0;
											}
									}				
							}
					}
			}
		Archer::Archer(string color_of_cloak, int number_of_cloak) // конструктор цвета и номера плаща лучника 
			{
				cout << "\t\t\t\tYou color of cloak - " << '"' << color_of_cloak << '"' << " with number " << '"' << number_of_cloak << '"' << endl;
			}
	#endif
