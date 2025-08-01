//DIV-A
//ROLL NO: 16
// write a c++ program to find sum elements in an array otherwise its time complexity using its frequency count

#include <iostream>
using namespace std;

int main() {
    int a[10];
    
    cout << "Enter an element of the array: ";
    
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
     
    for(int i = 0; i < 10; i++) {
        cout << a[i] ;
    }


    return 0;
}
