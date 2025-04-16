


#include <iostream>
#include <ctime>
#include <string>






void game() {
	

	int b;

	for (int i = 0; i < 10; i++) {

	int value = 1 + rand() % 3;
		std::cin >> b;

		if (b == 1 && value == 3 || b == 2 && value == 1 || b == 3 && value == 1 ) {

			std::cout << "you win\n";

		}
		else if (b == value) {
		
			std::cout << "ничья\n";

		}
		else
		{
			std::cout << "you lose\n";
		}

	}


}
//gerfgdfgdfghdhdfh



int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	game();

}

