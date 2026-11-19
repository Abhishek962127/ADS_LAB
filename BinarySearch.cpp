#include <iostream>
using namespace std;

int binarySearch(int arr[], int beg,int end, int target) {
    if(beg>end){
        return -1;
    }

    while (beg <= end) {
        int mid = beg + (end - beg) / 2;

        if (arr[mid] == target) {
            return mid;      
        }
        else if (arr[mid] < target) {
            return binarySearch(arr,mid+1,end,target);
        }
        else {
            return binarySearch(arr,beg,mid-1,target);
        }
    }

    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target = 50;

    int result = binarySearch(arr,0, n, target);

    cout<<result<<endl;
}