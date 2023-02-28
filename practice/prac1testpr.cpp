#include <iostream>

using namespace std;

class Complex
{
public:
    float real, img;
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex operator+(Complex);
    Complex operator*(Complex);
    friend istream& operator>>(istream &, Complex &);
    friend ostream& operator<<(ostream &, Complex &);
};
Complex Complex ::operator+(Complex obj)
{
    Complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return (temp);
}
Complex Complex ::operator*(Complex obj)
{
    Complex temp;
    temp.real = (real * temp.real);
    temp.img = (img * temp.img);
    return (temp);
}
istream& operator>>(istream &is, Complex &obj)
{
    is >> obj.real;
    is >> obj.img;
    return is;
}
ostream& operator<<(ostream &os, Complex &obj)
{
    os << obj.real << "+" << obj.img << "i";
    return os;
}
int main()
{
    Complex a, b, c, d;
    cout << "Enter first complex number:\t ";
    cin >> a;
    cout << "Enter second complex number :\t";
    cin >> b;
    int ch = 0;
    c = a + b;
    d = a * b;

    do
    {
        cin >> ch;
        cout << "\nEnter choice:\t1.Addition\n2.Multiplicaton\n3.exit!!!";
        if (ch == 1)
            cout << "Addition is :\t" << c;
        else if (ch == 2)
        {
            cout << "multiplication is:\t " << d;
        }

    } while (ch != 3);

    return 0;
}