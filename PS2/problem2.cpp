/*
************************************************
  ____ ____    _  ___   __
 / ___/ ___|  / |/ _ \ / /_
| |   \___ \  | | (_) | '_ \
| |___ ___) | | |\__, | (_) |
 \____|____/  |_|  /_/ \___/

Problem Set 1
Problem 2

This program is missing something that lets you use the pow() function.
If the program successfully compiles, you have finished this problem!
************************************************
*/

#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j > 0; j--) {
            cout << pow(i, j) << endl;
        }
    }
}