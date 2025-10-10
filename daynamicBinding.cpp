#include <iostream>
using namespace std;

// Base class
class Payment {
public:
    virtual void processPayment(float amount) {
        cout << "Processing a generic payment of ₹" << amount << endl;
    }
};

// Derived class: Credit Card
class CreditCard : public Payment {
public:
    void processPayment(float amount) override {
        float fee = 0.02 * amount; // 2% transaction fee
        cout << "Credit Card Payment of ₹" << amount 
             << " processed with a fee of ₹" << fee << endl;
    }
};

// Derived class: Debit Card
class DebitCard : public Payment {
public:
    void processPayment(float amount) override {
        float fee = 0.01 * amount; // 1% transaction fee
        cout << "Debit Card Payment of ₹" << amount 
             << " processed with a fee of ₹" << fee << endl;
    }
};

// Derived class: UPI
class UPI : public Payment {
public:
    void processPayment(float amount) override {
        cout << "UPI Payment of ₹" << amount 
             << " processed instantly with no extra fee." << endl;
    }
};

// Main function
int main() {
    CreditCard c;
    DebitCard d;
    UPI u;

    cout << "=== Online Payment System (Using . Operator) ===\n" << endl;

    // Base class references to derived class objects
    Payment &p1 = c;
    Payment &p2 = d;
    Payment &p3 = u;

    p1.processPayment(1000);  // Calls CreditCard version
    p2.processPayment(2000);  // Calls DebitCard version
    p3.processPayment(500);   // Calls UPI version

    return 0;
}
