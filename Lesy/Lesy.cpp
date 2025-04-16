


#include <iostream>
#include <ctime>
#include <string>





void game() {
	
	std::cout << "GAME START\n";

	int b;

	for (int i = 0; i < 1;) {

	int value = 1 + rand() % 3;
		std::cin >> b;

		if (b == 1 && value == 3 || b == 2 && value == 1 || b == 3 && value == 1 ) {

			std::cout << "you win\n";
			i++;
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


void Begin() {

	std::cout << "Hi, sosal?\n";

	std::string y;
	std::cin >> y;

	if (y == "da") {

		std::cout << "me too\n";
	}
	else {

	game();
	}

 }


int main()
{
	//setlocale(LC_ALL, "");
	srand(time(NULL));

	int a[3] = {4, 5, -6};
	char x[4] = {'t','e','s', 't'};

	Begin();


	/*float b = 2.9;

	for (int i = 0; i < 4; i++) {

		std::cout << x[i] << " ";
	}*/


	//std::cout << a << " " << b << " " << x[1];


	//game();

}

