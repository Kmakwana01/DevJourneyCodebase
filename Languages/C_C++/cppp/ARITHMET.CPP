#include <iostream>
using namespace std;

class arithmetic {
public:
    int a, b;

    void print() {
        cout << "Enter a: ";
        cin >> a;

        cout << "Enter b: ";
        cin >> b;
    }

    void sum() {
        cout << "Sum is: " << a + b << endl;
    }

    void sub() {
        cout << "Sub is: " << a - b << endl;
    }

    void multi() {
        cout << "Multi is: " << a * b << endl;
    }

    void div() {
        if (b != 0)
            cout << "Div is: " << (float)a / b << endl;
        else
            cout << "Division by zero not allowed!" << endl;
    }

    void modulo() {
        if (b != 0)
            cout << "Modulo is: " << a % b << endl;
        else
            cout << "Modulo by zero not allowed!" << endl;
    }
};

int main() {
    arithmetic obj;
    obj.print();
    obj.sum();
    obj.sub();
    obj.multi();
    obj.div();
    obj.modulo();

    return 0;  // no getch() required
}
