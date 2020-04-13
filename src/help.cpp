#include<iostream>
#include<string>
#include<stdlib.h>

using std::cout;	using std::endl;
using std::string;	using std::cin;

int main(){
	
	int loop = 1;

	while (loop ){
				
		cout << "\033[2J\033[1;1H";
		cout << "          +----------------------------------------------+" << endl;
		cout << "          |                                              |" << endl;
		cout << "          |   Please select from the following menu:     |" << endl;
		cout << "          |      1) Unit Conversion                      |" << endl;
		cout << "          |      2) Some other something or other        |" << endl;
		cout << "          |      0) Quit                                 |" << endl;
		cout << "          |                                              |" << endl;
		cout << "          +----------------------------------------------+" << endl;
		cout << "\n\n                Selection: " ;
		int selection;
		int confirm;
		cin >> selection;
		switch (selection) {
			case 1: cout << "You have selected \"Unit Converstion\"" << endl;
				break;
			case 2: cout << "You have selected \"Some other feature not ready yet\" " << endl;
				break;
			case 0: loop = 0;
				break;
		}
	}

	
	

	return 0;
}
