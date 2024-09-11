#include <iostream>


using namespace std; 

class Utility {
public:
   
    void displaySum(int a, int b) {
        int sum = a + b;
        cout << "Sum: " << sum << endl;
    }

    
    bool isGreater(int a, int b) {
        return a > b;
    }

    
    bool logicalOperations(bool x, bool y) {
        cout << "x AND y: " << (x && y) << endl;
        cout << "x OR y: " << (x || y) << endl;
        cout << "x XOR y: " << (x != y) << endl;
        cout << "NOT x: " << (!x) << endl;
        cout << "NOT y: " << (!y) << endl;

        
        return true;
    }
};

int main() {
    Utility util;

    //Sum
    int a = 12, b = 10;
    util.displaySum(a, b);

    // is Greater
    bool result = util.isGreater(a, b);
    cout << a << " is ";
    if (result) {
        cout << "greater than ";
    } else {
        cout << "not greater than ";
    }
    cout << b << endl;

    // Test logicalOperations
    bool x = true, y = false;
    bool success = util.logicalOperations(x, y);

    cout << "Logical operations executed successfully: ";
    if (success) {
        cout << "true";
    } else {
        cout << "false";
    }
    cout << endl;

    return 0;
}

