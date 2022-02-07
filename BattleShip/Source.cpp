#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>



using namespace std;

int main() {
	int water = 0;
	int ship = 1;
	int ary[8][8];
	for (int row = 0; row < 8; row++) {
		for (int column = 0; column < 8; column++) {
			ary[row][column] = water;
		}
	}
	int numColumns = 8;
	srand(time(0));
	int our_rand = rand() % 64 + 1;
	int row = our_rand / numColumns;
	int column = our_rand % numColumns;
	ary[row][column] = ship;
	while (true) {
		cout << "Choose a number between 1 and 64" << endl;
		int choice;
		cin >> choice;
		int usersRow = choice / numColumns;
		int usersColumn = choice % numColumns;
		if (ary[usersRow][usersColumn] == ship) {
			cout << "Congrats, you sank the ship!" << endl;
			break;
		}
		else {
			cout << "Miss! Try agian" << endl;
		}
	}
}