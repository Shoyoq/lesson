
#include <iostream>

#include <ctime>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void typeText(const string& text, int delay_ms = 50) {
	for (char c : text) {
		cout << c << flush;
		this_thread::sleep_for(chrono::milliseconds(delay_ms));
	}
	cout << endl;
}




void game() {

	srand(time(NULL));


	string choices[] = { "stone", "scissors", "paper" };
	int num_choices = sizeof(choices) / sizeof(choices[0]);
	for (;;)
	{
		string user_choice;
		string massage = "choose: stone, scissors, paper";
		typeText(massage, 100);
		cin >> user_choice;

		int computer_index = rand() % num_choices;
		string computer_choice = choices[computer_index];
		cout << "computer choose:" << " " << computer_choice << endl;

		if (user_choice == computer_choice) {
			cout << "draw\n";
			cout << std::endl;
		}
		else if ((user_choice == "stone" && computer_choice == "scissors") ||
			(user_choice == "scissors" && computer_choice == "paper") ||
			(user_choice == "paper" && computer_choice == "stone")) {
			cout << "you win!\n";
			cout << std::endl;
		}
		else {
			cout << "you lose!\n";
			cout << std::endl;
		}
	}
}


void Begin() {




	string massage = ("start game\n" "enter GO\n");
	typeText(massage, 100);

	std::string y;
	std::cin >> y;

	if (y == "go")
	{
		cout << endl;
		game();
	}
	else {
		cout << "ti durak";
	}
}


int main()
{
	srand(time(NULL));

	int a[3] = { 4, 5, -6 };
	char x[4] = { 't','e','s', 't' };

	Begin();
}