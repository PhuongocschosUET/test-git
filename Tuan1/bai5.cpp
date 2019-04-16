#include<bits/stdc++.h>
using namespace std;
int findMax(int arr[], int n) {
    int Max = INT_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i]>=Max) {
            Max=arr[i];
        }
    }
    return Max;
}
int findMin(int arr[], int n) {
     int Min = INT_MAX;
    for(int i=0;i<n;i++) {
        if(arr[i]<=Min) {
            Min=arr[i];
        }
    }
    return Min;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int GN = findMax(arr,n);
    int SN = findMin(arr,n);
    cout<<SN+GN;
    return 0;
}
