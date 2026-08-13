#include <bits/stdc++.h>

using namespace std;
class node {
    public: 
    int data;
    node * next;
    node(int val) {
        data = val;
        next = NULL;
    }
};
class Stack {
    public: 
    node * head;
    Stack() {
        head = NULL;
    }
    void push(int val) {
        node * newNode = new node(val);
        if (isEmpty()) {
            head = newNode;
        }
        else {
            newNode -> next = head;
            head = newNode;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << head -> data << endl;
            node * temp = head;
            head = head -> next;
            delete temp;
        }
    }
    void top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << head -> data << endl;
        }
    }
    void transverse() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        } 
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    bool isEmpty() {
        return head == NULL;
    }
};
int main() {
    Stack st;
    st.push(12);
    st.push(13);
    st.push(15);
    st.transverse();
    st.pop();
    st.transverse();
    st.top();

}