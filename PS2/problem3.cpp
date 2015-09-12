#include <iostream>

using namespace std;

int main() {
    int boringData = 15;
    cout << "Data is " << boringData << endl;
    // no memory leaks yet! everything will be garbage collected

    int* alrightData = new int;
    cout << "Alright data is " << *alrightData << endl;
    delete alrightData;
    *alrightData = 15;
    cout << "Alright data is now " << *alrightData << endl;
    // whoa whats that new delete keyword above? still no memory leaks though!

    int *int_array = new int[50];
    delete[] int_array;
    int_array = NULL;
    // delete[] seems pretty similar... still no memory leaks!

    // only one of the below code blocks is causing a memory leak. fix it!
    // creates int with value 10 on the stack and prints it
    int varOne = 10;
    cout << varOne << endl;

    // creates an int with value 10 on the heap and prints it
    int * varTwo = new int(10);
    cout << *varTwo << endl;
}