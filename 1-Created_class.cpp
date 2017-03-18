	// �������� ������ - ������
	#ifndef CLASS_H_
	#define CLASS_H_
	class Monstr;
	class Archer
		{
			private:
				int hitpoints, manapoints, damage, defence;
				static const int NAMESIZE = 3; // ���������� ������������ ���������� - ������������ �������� ���������� ��� ��������
			public:
				static const string name[]; // ���������� ������������ ���������� - ����� �������
				Archer (int hitpoints, int manapoints, int damage, int defence); // ���������� ������������ ������������� ������� � �������������� this
				Archer (bool specialisation); // ���������� ������������ ������������� �������
				Archer (string color_of_cloak, int number_of_cloak); // ���������� ������������ ����� � ������ ����� �������
				Archer() // ����������� ��������� ������������ �������, ��-���������
					{
						hitpoints = 0;
						manapoints = 0;
						damage = 0;
						defence = 0;
					}
				~Archer() // ���������� ����������� ��-���������
					{
						cout << "*\n"; // ����� �� ����� ������� *, ���� ��� ����������� ����������
					}
				void bow (const int ARROWS); // ���������� ������ ��������� �� ����
				void buff (char orientation_buff, string name_buff, string effect_buff); // ����� ������������ ���������� �����
				void show (); // ����� ������ ���������� � ��������������� ������� �� �����
				friend void dead_archer (const Archer &name); // ���������� ������������� �������
		};
	void dead_archer (const Archer &name) // ������������� ������������� �������
		{
			cout << "\n\t\t\t\t  The lifetime of the archer is over. Archer is dead. You characteristics:\n\t\t\t\tHP: " << name.hitpoints 
			     << "\n\t\t\t\tMP: " << name.manapoints << "\n\t\t\t\tDMG: " << name.damage << "\n\t\t\t\tDEF: " << name.defence << endl;
		}
	const string Archer::name[NAMESIZE] = {"Shiro", "Robin", "Parys"}; // ������������� ������������ ���������� - ��� ��������
	#endif
