
#include <iostream>

//#include <ctime>
//#include <string>
#include <thread>
#include <chrono>
#include <vector>

using namespace std;


//class tring {
//	public:
//
//	int size = 4;
//
//	char *m = new char[size];
//
//	tring(int a) {
//
//		size = a;
//	}
//
//	~tring() {
//		delete[] m;
//	}
//};

struct portal_ {

	string name;
	int target;

};

struct location_ {

	string name;
	vector<portal_> p;

};

struct info_ {

	int current_loc = 0;

};

location_ loc[3];
info_ player;

void typeText(const string& text, int delay_ms) {
	for (int i = 0; i < text.size(); i++) {
		cout << text[i] << flush;
		this_thread::sleep_for(chrono::milliseconds(delay_ms));
	}
	cout << endl;
	
}




void game() {

	srand(time(NULL));


	string choices[3] = { "stone", "scissors", "paper" };
	int size = sizeof(choices) / sizeof(choices[0]);
	for (;;)
	{
		string user_choice;
		string massage = "choose: stone, scissors, paper";
		typeText(massage, 100);
		cin >> user_choice;

		int computer_index = rand() % 3;
		string computer_choice = choices[computer_index];
		cout << "computer choose:" << " "  << endl;
		typeText(computer_choice, 100);

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

void eazy() {

	string user;
	string bot[3] = { "stone", "scissors", "paper" };
	string b[3]{ "you win!!", "you lose!", "draw" };

	while (true) {

		string massage = "choose: stone, scissors, paper";
		typeText(massage, 100);
		int r = rand() % 3;


		cin >> user;
		typeText(bot[r], 100);

		if (user == bot[r]) {
			//cout << "draw\n";
			typeText(b[2], 100);
			cout << std::endl;
		}
		else if ((user == "stone" && bot[r] == "scissors") ||
			(user == "scissors" && bot[r] == "paper") ||
			(user == "paper" && bot[r] == "stone")) {

			//cout << "you win!\n";
			typeText(b[0], 100);
			cout << std::endl;
		}
		else {

			typeText(b[1], 100);
			//cout << "you lose!\n";
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
		//game();
		eazy();
	}
	else {
		cout << "ti durak";
	}
}

int temp() {
	int mas[] = {1, 2, 4,6, 4};
	
	int size = sizeof(mas) / sizeof(mas[0]);

	return size;
}

int main()
{
	srand(time(NULL));

	loc[0].name = "HUB";
	loc[1].name = "DOM";
	loc[2].name = "TRASH";
	loc[0].p.push_back({ "DOOR", 1 });
	loc[0].p.push_back({ "TRASH", 2 });

	int a[3] = { 4, 5, -6 };
	char x[4] = { 't','e','s', 't' };
	string x1 = "test";
	//Begin();
	int o = 4;
	/*tring p(3);*/

	string ch;

	cin >> ch;


	if (ch == "go") {

		for (int i = 0; i < loc[player.current_loc].p.size(); i++) {

			cout << loc[player.current_loc].p[i].name << endl;
		}

		cin >> ch;

		for (int i = 0; i < loc[player.current_loc].p.size(); i++) {

			if (ch == loc[player.current_loc].p[i].name) {

				player.current_loc = loc[player.current_loc].p[i].target;
				cout << "you: " << loc[player.current_loc].name << endl;
			}
		}
	}
}