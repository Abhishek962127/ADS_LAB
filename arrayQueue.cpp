#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE  5

class Queue
{
    int rear;
    int front;
    int arr[MAX_SIZE];
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
    bool isUderflow()
    {
        return rear==front;
    }
    bool isoverflow(){
        return rear==MAX_SIZE-1;
    }
    void enqueue(int val){
        if(isoverflow()){
            cout<<"Queue is full"<<endl;
            return ;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;


    }
    void dequeue(){
        if(isUderflow()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(front==rear){
            front=rear=-1;
        }
        else{

        int x=arr[front];
        front++;
        cout<<x<<endl;
        }
    }
    void peak(){
        if(front==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return ;
        }
        cout<<arr[front]<<endl;
    }
    void display(){
        if(front==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return ;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    Queue s1;
    int ch, val;
    
    
    do {
        cout << "1 for Push, 2 for Pop, 3 for Peek, 4 for Display, 5 for exit"<<endl;
        cin >> ch;
        switch (ch) {
        case 1:
            cout << "enterelement"<<endl;
            cin >> val;
            s1.enqueue(val);
            break;
        case 2:
            s1.dequeue();
            break;
        case 3:
            s1.peak();
            break;
        case 4:
            s1.display();
            break;
        case 5:
            cout << "exiting"<<endl;
            break;
        default:
            cout << "invalid"<<endl;
            break;
    }
}
    while(ch!=5);
}
