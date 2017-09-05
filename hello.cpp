#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	if (argc > 2) {
		cout << "Too many arguments. Try:" << endl;
		cout << "To print -Hello World!- type ./hello" << endl;
		cout << "To print -Hello World!- x times, type ./hello x, where x is an integer > 0" << endl;
		return 0;
	}
	if (argc == 2) {
		int x = stoi(argv[1]);
		for (int i = 0; i < x; i++) {
			cout << "Hello World!" << endl;
		}
		return 0;
	}

	cout << "Hello World!" << endl;
	return 0;
}
