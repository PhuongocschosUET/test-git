#include<bits/stdc++.h>
using namespace std;
/*
int GCD(int a, int b) {
    if( a==0 or b==0) return a+b;
    while(a!=b) {
        if(a>b){
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    return a;
}
*/
int gcd(int a, int b){
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b, bởi vì lúc này a và b bằng nhau
}
/*
int GCD(int a,int b)
{
    if (b==0) return a;
    else return GCD(b,a%b);
}
*/
int main () {
    int a,b;
    cin>>a>>b;
    int m=GCD(a,b);
    cout<<m;
}
