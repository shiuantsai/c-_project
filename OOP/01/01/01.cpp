#include<iostream>
using namespace std;
class Demo {
	int a;
	int b;
	public:
		void set_values(int x, int y) { a = x; b = y; };
		int area(void) { return a * b; };
};
/*
void Demo::set_values(int x, int y) {
	a = x;
	b = y;
}*/



int main() {
	Demo d1, d2;
	d1.set_values(10, 20);
	d2.set_values(20, 30);
	cout << d1.area() << endl;
	cout << d2.area() << endl;

}