	// Ñîçäàíèå êëàññà - ëó÷íèê
	#ifndef CLASS_H_
	#define CLASS_H_
	class Monstr;
	class Archer
		{
			private:
				int hitpoints, manapoints, damage, defence;
				static const int NAMESIZE = 3; // îáúÿâëåíèå ñòàòè÷åñêîãî êîìïîíåíòà - êîíñòàíòíîãî çíà÷åíèÿ êîëè÷åñòâà èì¸í ëó÷íèêîâ
			public:
				static const string name[]; // îáúÿâëåíèå ñòàòè÷åñêîãî êîìïîíåíòà - èìåíè ëó÷íèêà
				Archer (int hitpoints, int manapoints, int damage, int defence); // îáúÿâëåíèå êîíñòðóêòîðà õàðàêòåðèñòèê ëó÷íèêà ñ èñïîëüçîâàíèåì this
				Archer (bool specialisation); // îáúÿâëåíèå êîíñòðóêòîðà ñïåöèàëèçàöèè ëó÷íèêà
				Archer (string color_of_cloak, int number_of_cloak); // îáúÿâëåíèå êîíñòðóêòîðà öâåòà è íîìåðà ïëàùà ëó÷íèêà
				Archer() // êîíñòðóêòîð ïåðâè÷íûõ õàðàòåðèñòèê ëó÷íèêà, ïî-óìîë÷àíèþ
					{
						hitpoints = 0;
						manapoints = 0;
						damage = 0;
						defence = 0;
					}
				~Archer() // îáúÿâëåíèå äåñòðóêòîðà ïî-óìîë÷àíèþ
					{
						cout << "*\n"; // âûâîä íà ýêðàí ñèìâîëà *, åñëè áûë èñïîëüçîâàí äåñòðóêòîð
					}
				void bow (const int ARROWS); // îáúÿâëåíèå ìåòîäà âûñòðåëîâ èç ëóêà
				void buff (char orientation_buff, string name_buff, string effect_buff); // ìåòîä ïåðå÷èñëåíèÿ íàëîæåííûõ áàôîâ
				void show (); // ìåòîä âûâîäà èíôîðìàöèè î õàðàêòåðèñòèêàõ ëó÷íèêà íà ýêðàí
				friend void dead_archer (const Archer &name); // îáúÿâëåíèå äðóæåñòâåííîé ôóíêöèè
		};
	void dead_archer (const Archer &name) // èíèöèàëèçàöèÿ äðóæåñòâåííîé ôóíêöèè
		{
			cout << "\n\t\t\t\t  The lifetime of the archer is over. Archer is dead. You characteristics:\n\t\t\t\tHP: " << name.hitpoints 
			     << "\n\t\t\t\tMP: " << name.manapoints << "\n\t\t\t\tDMG: " << name.damage << "\n\t\t\t\tDEF: " << name.defence << endl;
		}
	const string Archer::name[NAMESIZE] = {"Shiro", "Robin", "Parys"}; // èíèöèàëèçàöèÿ ñòàòè÷åñêîãî êîìïîíåíòà - èì¸í ëó÷íèêîâ
	#endif
