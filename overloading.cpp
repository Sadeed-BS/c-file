

#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    friend ostream& operator<<(ostream& output, const Complex& c);
};

ostream& operator<<(ostream& output, const Complex& c) {
    output << c.real << " + " << c.imag << "i";
    return output;
}

int main() {
    Complex c1(5.5, 3.2);
    Complex c2(1.5, 4.4);
    Complex sum;
    sum = c1 + c2;

    cout << "--- Complex Number Addition ---" << endl;
    cout << "First Number:  " << c1 << endl;
    cout << "Second Number: " << c2 << endl;
    cout << "---------------------------" << endl;
    cout << "Sum:           " << sum << endl;

    return 0;
}