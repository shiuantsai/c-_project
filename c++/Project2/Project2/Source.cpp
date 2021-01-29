#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 20 , c=0;
	cout << &a << &b << endl;
	&c = &a;

	return 0;
}