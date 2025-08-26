#include<iostream>
#define MAX 5
using namespace std;
class Queue {
    private:
    int arr[MAX];
    int front;
    int rear;

    public:
    Queue() {
        front=-1;
        rear=-1;
    }
    bool isempty()
    {
        if(front==-1 && rear==-1) {
            cout<<"Queue is empty\n";
            return true;
        }
        else {
            cout<<"Queue not empty \n";
            return false;
        }
    }
    bool isfull() {
        if(rear == MAX-1) {
            cout<<"Queue is full";
            return true;
        }
        else
            return false;
    }
    void enqueue()
    {
        int m;
        if(isfull())
        {
            cout<<"Queue is overflow";
        }
        else
        {
            cout<<"Enter the value: ";
            cin>>m;
            if(isempty())
            {
            front++;
            rear++;
            arr[rear]=m;
            }
            else{
                rear++;
                arr[rear]=m;
            }
            cout<<m<<" is inserted in the queue.";
        }
    
    }
};
int main() {
    Queue q1;
    q1.isempty();
    q1.isfull();
    q1.enqueue();
    return 0;
}
