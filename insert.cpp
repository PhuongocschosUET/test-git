#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int val,pos;
    cin>>val;
    cin>>pos;
    for(int i=0;i>pos;i--) {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    for(int i=0;i<n+1;i++) {
        cout<<arr[i];
    }
    return 0;
}
