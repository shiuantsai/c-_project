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
    //Note: �ڭ̤����ۤv�w�qcopy constructor
    //ElectricPot(int _size, string _color);
    void abc(int size,string _color);
    void cook();
};
//�g�k2:
//void ElectricPot::abc(int _size, string _color){...}
//�M��class��public�n�h�[�o�Ө��:void abc(int _size, string _color)
void ElectricPot::abc(int _size, string _color) { 
    size = _size;
    color= _color;
}
/*
ElectricPot::ElectricPot(int _size, string _color) {
    size = _size;
    color = _color;
}*/

//�o���gcook��ơA���q��i�L�X�j�p�B�C���T
void ElectricPot::cook()
{
    std::cout << "���q�窺�j�p��: " << size << std::endl;
    std::cout << "�ڬO " << color << " �C�⪺�q��A�ڥ��b�N��" << std::endl;
}

int main()
{

    ElectricPot p1;
    ElectricPot p3;
    p1.abc(20, "yellow"); //�Ыؤ@��ElectricPot����p1�A�j�p20�A�C��"yellow"
    ElectricPot p2(p1); //�����غc�l�A�Np1���Ƚƻs��p2
    p3.abc(50, "red");
    p1.cook();
    p2.cook();
    p3.cook();
    return 0;
}*/