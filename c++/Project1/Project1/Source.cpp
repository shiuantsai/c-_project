#include <iostream>
using namespace std;
int change(int *a,int *b) {
	int temp = *a;
	* a = *b;
	*b = temp;
	return 0;
}
void out(int a, int b) {
	cout << a << " " <<  b << endl;
	system("pause");
}
int main() {
	int x = 10, y = 20;
	change(&x, &y);
	out(x,y);
	
	
	
	
	
	return 0;
}
