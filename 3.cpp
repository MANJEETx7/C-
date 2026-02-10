// WAP to print no in reverse order 
#include<iostream>
using namespace std;
int main(){

  int n, rev = 0, remainder;
  
  cout << "Enter a number: ";
  cin >> n;
  
  while(n != 0){ 
    rev = rev*10 + remainder;
    n = n/10;
  }
  
  cout << "Reversed number: " << rev <<endl;

  return 0;
}