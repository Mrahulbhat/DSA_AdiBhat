#include <iostream> 
using namespace std;

void nForest(int n) {
    for (int i = 0; i < n; i++) { //outer for loop for rows
        for (int j = 0; j < n; j++) { //inner for loop for columns
            cout << "* "; //print star and space
        }
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << "\n"; //next line
    }
}
