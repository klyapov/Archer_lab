	// �������� ������
	#ifndef CLASS_H_
	#define CLASS_H_
	class archer
		{
			private:
				int hitpoints, manapoints, damage, defence;
				static const int NAMESIZE = 3; // ���������� ������������ ���������� - ������������ �������� ���������� ��� ��������
				int tension_force_of_bow;
			public:
				static const string name[]; // ���������� ������������ ���������� - ����� �������
				archer (int hitpoints, int manapoints, int damage, int defence); // ���������� ������������ ������������� ������� � �������������� this
				archer (bool specialisation); // ���������� ������������ ������������� �������
				archer (string color_of_cloak, int number_of_cloak); // ���������� ������������ ����� � ������ ����� �������
				archer () // ����������� ��������� ������������ �������, ��-���������
					{
						hitpoints = 0;
						manapoints = 0;
						damage = 0;
						defence = 0;
					}
				~archer() // ���������� ����������� ��-���������
					{
						cout << "*\n"; // ����� �� ����� ������� *, ���� ��� ����������� ����������
					}
				void bow (const int ARROWS); // ���������� ������ ��������� �� ����
				void buff (char orientation_buff, string name_buff, string effect_buff); // ����� ������������ ���������� �����
				void show (); // ����� ������ ���������� � ��������������� ������� �� �����
				friend void dead_archer (const archer &name); // ���������� ������������� �������
				virtual void tension_force () // ����������� �����, ������� ����������
					{
						cout << "Primary tension force of bow: " << tension_force_of_bow << "N\n";
					}
				struct bow_type // ���������� ���������� ������(���������)
					{
						bow_type (string type) // ���������� ������������ 
							{
								cout << "\t\t\t\tA type Your bow - " << type << endl;
							}
					};
		};
	class crossbowman : public archer // ��������� ������ ������ - ����������
		{
			private:
				int tension_force_of_crossbow;
				bool alive;
			public:
				crossbowman(int hitpoints, int manapoints, int damage, int defence) : archer(hitpoints, manapoints, damage, defence) // ����������� ������ archer
					{
						alive =1;
					}
				crossbowman(string color_of_cloak, int number_of_cloak) : archer(color_of_cloak, number_of_cloak) // ����������� ������ archer
					{
						alive = 1;
					}
				~crossbowman() // ���������� ������
					{
						cout << "(*)\n";
					}
				void tension_force () // ����������� ����� ������ archer
					{
						cout << "Primary tension force of crossbow: " << tension_force_of_crossbow << "N\n";
					}
		};
	const string archer::name[NAMESIZE] = {"Shiro", "Robin", "Parys"}; // ������������� ������������ ���������� - ��� ��������
	void dead_archer (const archer &name) // ������������� ������������� �������
		{
			cout << "\n\t\t\t\t  The lifetime of the archer is over. Archer is dead. You characteristics:\n\t\t\t\tHP: " << name.hitpoints 
			     << "\n\t\t\t\tMP: " << name.manapoints << "\n\t\t\t\tDMG: " << name.damage << "\n\t\t\t\tDEF: " << name.defence << endl;
		}	
	#endif
