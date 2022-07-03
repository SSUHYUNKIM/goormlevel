#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	getline(cin, input);
	int count = 1;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ' '){
			count++;
			if (input[i-1] == ' '){
				count--;
			}
		}
	}

	if (input[0] == ' ') 
		count--;
	if (input[input.length() - 1] == ' ') 
		count--;
	
	cout << count << endl;
	return 0;
}