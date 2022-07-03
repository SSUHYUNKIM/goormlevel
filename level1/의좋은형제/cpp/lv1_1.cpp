#include <iostream>
using namespace std;
int main() {
	int a, b, d , i;
	cin >> a >> b;
	cin >> d;
	int sum = a + b;
	for(i = 0; i < d; i++){
		if(i % 2 == 0){
			a /= 2;
			b = sum - a;
		} else {
			b /= 2;
			a = sum - b;
		}
	}
	cout << a << " " << b << endl;
	return 0;
}