	#include <iostream>
	#include <string>
	using namespace std; 
	class reload 
		{ 
			private: 
				long int number_one;
			public: 
				reload()
					{
						number_one = 0;
					}
				reload (int number_one)
					{
						this -> number_one = number_one;
					}
				reload operator^(const reload & r) const // перегрузка оператора ^, возведение в степень
					{
						reload result;
						result.number_one = 1;
						for(int i=0; i<r.number_one; i++)
							{
								result.number_one = result.number_one * number_one;
							}
						return result; 
					}
				reload operator%(const reload & r) const // перегрузка оператора %, остаток от деления
					{
						reload result;
						result.number_one = number_one % r.number_one;
						return result;
					}
				reload operator<<(const reload & r) const // перегрузка оператора <<, сдвиг вправо
					{
						reload result;
						result.number_one = number_one << r.number_one;
						return result;
					}
				void Show() // метод вывода на экран
					{
						cout << number_one; 
					}
		};
	int main()
		{
			reload defaulT;
			cout << "Default number = "; 
			defaulT.Show();
			reload first(5); 
			cout << "\nFirst number = "; 
			first.Show();
			reload second(3); 
			cout << "\nSecond number = ";
			second.Show();
			reload third(7);
			cout << "\nThird number = ";
			third.Show();
			
			reload test_one;
			cout << endl; 
			test_one = first ^ second; // перегруза оператора ^, нотация с операцией
			first.Show();
			cout << " ^ ";
			second.Show();
			cout << " = "; 
			test_one.Show();
			 
			reload test_two;
			cout << endl;
			test_two = first.operator%(second); // перегрузка оператора %, нотация с функцией
			first.Show();
			cout << " % ";
			second.Show();
			cout << " = "; 
			test_two.Show();
			
			reload test_three;
			cout << endl;
			test_three = third << second; // перегруза оператора <<, нотация с операцией
			third.Show();
			cout << " << ";
			second.Show();
			cout << " = ";
			test_three.Show(); // 0000 0111 << 3 = 0011 1000 = 56
			
			return 0; 
		}
