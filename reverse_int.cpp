#include<bits/stdc++.h>
using namespace std;
int reverse_int(int n){
    int ans = 0;
    while(n!=0){
        int digit = n % 10;
        if(ans > INT_MAX/10 || ans < INT_MIN/10) return 0;
        ans = (ans*10) + digit;
        n =  n / 10;
    } 
    return ans;
}
int main(){
    cout<<reverse_int(546);
    return 0;
}