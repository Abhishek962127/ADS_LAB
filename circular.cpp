#include <bits/stdc++.h>
using namespace std;
#define SIZE 5
class CircularQueue{
    int front;
    int rear;
    int Queue[SIZE];
    CircularQueue(){
        front=rear=-1;
    }
    void enqueue(int val){
        if((rear+1)%SIZE==front){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%SIZE;
        Queue[rear]=val;
    }
    int dequeue(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int info=Queue[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
        front=(front+1)%SIZE;
        }
        return info;
    }
    void display(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return ;
        }
        int i=front;
        while (i!=rear)
        {
            cout<<Queue[i]<<" ";
            i=(i+1)%SIZE;
        }
        cout<<Queue[i]<<" ";
        cout << endl;

    }
};
int main(){
    
}