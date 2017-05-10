	#include <iostream>
	using namespace std;
	const double supposed_range = 24.5;
	void find_range()
		{
			cout << "Range Your bow: " << ::supposed_range << " meters\n";
			class bow // локальный класс
				{
						double real_range;
					public:
						void test_range()
							{
								real_range = ::supposed_range;
							}
				};	
		}
	int main()
		{
			find_range();
			return 0;
		}
