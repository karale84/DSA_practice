#include <iostream>
#define MAX 100;
using namespace std;

class stack{
int arr [100] ;
int top;
public:
stack(){
    top=-1;
} 
bool empty()
{
if (top==-1)
    return true;
    else
    return false;
}

};
int main()
    stack s1;
    
