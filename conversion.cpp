#include <iostream>
using namespace std;

// ----- CLASS 1 -----
class Distance {
    int meters;
public:
    Distance() { meters = 0; }

    // Basic to Class conversion (int -> Distance)
    Distance(int m) { meters = m; }

    // Display
    void showData() { cout << "Distance: " << meters << " meters" << endl; }

    // Class to Basic conversion (Distance -> int)
    operator int() { return meters; }

    int getMeters() { return meters; }
};

// ----- CLASS 2 -----
class DistanceFeet {
    float feet;
public:
    DistanceFeet() { feet = 0; }

    // Conversion constructor (Distance -> DistanceFeet)
    DistanceFeet(Distance d) {
        feet = d.getMeters() * 3.28084;  // 1 meter = 3.28084 feet
    }

    void showData() { cout << "Distance: " << feet << " feet" << endl; }
};

// ----- MAIN FUNCTION -----
int main() {
    // Basic to Class conversion
    Distance d1;        // Default constructor
    int m = 10;
    d1 = m;             // int -> Distance
    cout << "\nBasic to Class Conversion:" << endl;
    d1.showData();

    // Class to Basic conversion
    int meters;
    meters = d1;        // Distance -> int
    cout << "\nClass to Basic Conversion:" << endl;
    cout << "Meters (as int): " << meters << endl;

    // Class to Class conversion
    DistanceFeet d2;
    d2 = d1;            // Distance -> DistanceFeet
    cout << "\nClass to Class Conversion:" << endl;
    d2.showData();

    return 0;
}
