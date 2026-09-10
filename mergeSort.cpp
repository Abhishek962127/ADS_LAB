#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int left[n1+1];
    int right[n2+1];
    for(int i=0;i<n1;i++){
        left[i]=arr[p+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[q+i+1];
    }
    left[n1]=INT_MAX;
    right[n2]=INT_MAX;
    int i=0;
    int j=0;
    for(int k=p;k<=r;k++){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
    }
    
}
void mergeSort(int arr[],int p,int r){
    if(p<r){
        int q = (r + p) / 2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
    return;
}
int main(){
    int arr[]={7,2,9,4,3,8,6};
    mergeSort(arr,0,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}