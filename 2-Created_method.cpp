	// Описание методов
	#ifndef METHOD_H_
	#define METHOD_H_
	void Archer::bow (const int ARROWS) // метод выстрелов из лука
		{
			int randomShot[ARROWS];
			srand(time(0));
			cout << "\tU R have " << ARROWS << " arrows" << endl;
			for (int i=0; i<ARROWS; i++)
				{
					randomShot[i] = 1 + rand()%2;
						if (randomShot[i] == 1)
							{
								cout << "\t\t\t\t\t\t\tHIT\n";
							}
						else
							{
								cout << "\t\t\t\t\t\t\tMISS\n";
							}
				}		
		}
	void Archer::buff(char orientation_buff, string name_buff, string effect_buff) // метод перечисления наложеных бафов
		{
			cout << "\t\t\t\t\t\t\t\t\tOrientation buff - p(positive) or n(negative): ";
			cin >> orientation_buff;
			cin.get();
			cout << "\t\t\t\t\t\t\t\t\tName buff: ";
			cin >> name_buff;
			cin.get();
			cout << "\t\t\t\t\t\t\t\t\tEffect buff: ";
			getline (cin, effect_buff);
			if (orientation_buff == 'p')
				{
					cout << "\n\t\t\t\t\t\tPOSITIVE BUFF\n\t\t\t\t\t\t" << '"' << name_buff << '"' << "\n\t\t\t\t\t\tEffect: " << effect_buff << endl;			
				}
			else if (orientation_buff == 'n')
				{
					cout << "\n\t\t\t\t\t\tNEGATIVE BUFF\n\t\t\t\t\t\t" << '"' << name_buff << '"' << "\n\t\t\t\t\t\tEffect: " << effect_buff << endl;
				}
			else cout << endl;
		}
	void Archer::show() // метод вывода информации на экран
		{
			cout << "\t\t\t\tHP: " << hitpoints << "\n\t\t\t\tMP: " << manapoints << "\n\t\t\t\tDMG: " << damage << "\n\t\t\t\tDEF: " << defence << endl << endl;
		}
	#endif
