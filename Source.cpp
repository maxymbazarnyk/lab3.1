// Lab_03_1.cpp 
// < �������� ������ ���������� > 
// ����������� ������ � 3.1 
// ������������, ������ ��������: ������� ���� �����. 
// ������ 1 

#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
    double x;  // ������� ��������     
    double y;  // ��������� ���������� ������     
    double A;  // �������� ��������� - ������������� ����� ������� ������     
    double B;  // �������� ��������� - ������������� ����� ������� ������ 

    cout << "x = "; cin >> x;          
    A = 1 + 9 * x;

    // ����� 1: ������������ � ��������� ����     
    if (x<=0)         
        B = log(fabs(sin(x)) + pow(x, 7));     
    if (0<x && x<=3)         
        B = 1/tan(fabs(x+1)/2);     
    if (x>3)         
        B = 3 * x - pow(x, 5); 

    y = A + B;

    cout << endl;    
    cout << "1) y = " << y << endl;


    // ����� 2: ������������ � ����� ����     
    if (x <= 0)
        B = log(fabs(sin(x)) + pow(x, 7));
    else         
        if (0 < x && x <= 3)
            B = 1 / tan(fabs(x + 1) / 2);
        else             
            B = 3 * x - pow(x, 5);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();     
    return 0;
}