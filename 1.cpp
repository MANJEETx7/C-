#include <iostream>
using namespace std;

int main() {
    int n, original_n, remainder, result = 0;

    cout << "Enter a 3-digit integer: ";
    cin >> n;
    
    original_n = n; 

    while (n != 0) {
        remainder = n % 10; 
        result += remainder * remainder * remainder; 
        n /= 10;            
    }

    if (result == original_n)
        cout << original_n << " is an Armstrong number.";
    else
        cout << original_n << " is not an Armstrong number.";

    return 0;
}