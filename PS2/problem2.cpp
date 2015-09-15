// this program is missing something that lets you use the pow() function
// if this program successfully compiles, you have finished this problem!

#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j > 0; j--) {
            cout << pow(i, j) << endl;
        }
    }
}