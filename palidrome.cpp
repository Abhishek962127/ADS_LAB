#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int newn=0;
    stack<int>st;
    for(int i=0;i<n.size();i++){
        st.push(n[i]);
    }
    bool flag=true;
    for(int i=0;i<n.size();i++){
        if(st.top()!=n[i]){
            flag=false;
        }
        st.pop();
    }
    
    if(flag){
        cout<<"Pallidrome"<<endl;
    }
    else{
        cout<<"Not pallidrome"<<endl;
    }
    // while (n>0)
    // {
    //     newn=newn*10+n%10;
    //     n=n/10;
    // }
    // if(newn==x){
    //     cout<<"Pallidromme";
    // }
    // else{
    //     cout<<"Not";
    //     cout<<newn;
    // }
    
}
