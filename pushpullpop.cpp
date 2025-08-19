#include  <iostream>
#define max 10
using namespace std;
class stack{
    private:
    int arr[max];
    int top;



    public:
    
    stack(){
        top=-1;

    }
    bool isempty()
    {
        if(top==-1)
        cout<<"stack empty ";

    }
    bool isfull()
    {
        if(top == max - 1)
        return true;
        else{
            cout<<"num to be push ";
            return false;

        } 
    }
    void push()
    {
        int a;
        if(isfull()){
    cout<<"cannot push an element"; 
        }
else
{
    top++;
    cout<<" enter the element to push:";
    cin>>a;
    arr[top]=a;
    cout<<a<<" is pushed into the stack ";

}
    }
    void pop(){
    {
        if(isempty()){
        cout<<"cannot pop element";
    }
    else{
    cout<<arr[top]<<"is pop into the stack";
    top--;
    }
    
}
}
void peek() {
    if (isempty()) {
        cout << "Cannot peek, stack is empty" << endl;
    } else {
        cout << arr[top] << " is at the top of the stack" << endl;
    }
}

};
int main(){
    stack s1;
s1.push();
return 0;
}
