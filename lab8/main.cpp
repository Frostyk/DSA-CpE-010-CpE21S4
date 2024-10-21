#include <iostream>
#include <ctime>
#include "Quick Sort.h"
using namespace std;

void CRandomValues(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000 + 1; 
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    const int size = 100;
    int randomArray[size];

    CRandomValues(randomArray, size);

    
    cout << "Unsorted Array:\n";
    for (int i = 0; i < size; ++i) {
        cout << randomArray[i] << " "; 
    }
    cout << endl;


	quickSort(randomArray, 0, size - 1);

    cout << "Sorted Array:\n";
    for (int i = 0; i < size; ++i) {
        cout << randomArray[i] << " "; 
    }
    cout << endl;

    return 0;
}
