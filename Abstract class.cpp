#include <iostream>
using namespace std;
	class archer // ����������� �����
		{
			protected:
				double first_aim;
				double second_aim;
			public:
				void aim (double first_aim, double second_aim)
					{
						this -> first_aim = first_aim;
						this -> second_aim = second_aim;
					}
				virtual double shoots_per_minute () = 0; // ����� ����������� �������, ���������
		};
	class crossbowman : public archer // ��������� ������ archer
		{
			public:
				double shoots_per_minute ()  // ����������� �����
						{
							return (first_aim + second_aim)/60;
						}
		};
	int main()
		{
			crossbowman Robin;
			Robin.aim(5.0, 1.0);
			archer *a = &Robin;
			cout << p->shoots_per_minute();
			return 0;
		}
