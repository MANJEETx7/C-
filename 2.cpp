#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Print the first term
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        
        // Calculate next term
        nextTerm = t1 + t2;
        cout << nextTerm << ", ";

        // Update variables for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}