/**
#include <iostream>
using namespace std;

int multiply(int a,int b) {
	return a * b;
}
int main() {
	int c = multiply(5, 6);
	int d = multiply(10, 6);
	cout << "5*6="  << c << endl;
	cout << "10*6=" << d << endl;

	return 0;
}*/
#include <iostream>
#include <string>
using std::string;

class ElectricPot
{
private:
    int size;
    string color;
public:
    //Note: 我們不必自己定義copy constructor
    //ElectricPot(int _size, string _color);
    void abc(int size,string _color);
    void cook();
};
//寫法2:
//void ElectricPot::abc(int _size, string _color){...}
//然後class內public要多加這個函數:void abc(int _size, string _color)
void ElectricPot::abc(int _size, string _color) { 
    size = _size;
    color= _color;
}
/*
ElectricPot::ElectricPot(int _size, string _color) {
    size = _size;
    color = _color;
}*/

//這邊改寫cook函數，讓電鍋可印出大小、顏色資訊
void ElectricPot::cook()
{
    std::cout << "本電鍋的大小為: " << size << std::endl;
    std::cout << "我是 " << color << " 顏色的電鍋，我正在煮飯" << std::endl;
}

int main()
{

    ElectricPot p1;
    ElectricPot p3;
    p1.abc(20, "yellow"); //創建一個ElectricPot物件p1，大小20，顏色"yellow"
    ElectricPot p2(p1); //拷貝建構子，將p1的值複製給p2
    p3.abc(50, "red");
    p1.cook();
    p2.cook();
    p3.cook();
    return 0;
}*/