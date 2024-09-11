#include <iostream>
using namespace std;

double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9/5) - 459.67;
   }
int main() {

// Convert Kelvin to Fahrenheit
    double kelvin = 273.15;
    double fahrenheit = kelvinToFahrenheit(kelvin);
    cout << "Kelvin to Fahrenheit: " << kelvin << "K = " << fahrenheit << "F" << endl;
return 0;
}

