#include<bits/stdc++.h>
using namespace std;
void decimal_to_binary(int n){
    int ans = 0;
    int i=1;
    while(n != 0){
        int bit = n % 2;
        ans +=  bit * i ;
        n = n / 2;
        i*=10;
    }
    cout<<"answer is : "<<ans<<endl;
}

void binary_to_decimal(int temp){
    int ans=0;
    int i=0;
    while(temp!=0){
       int bit = temp % 10;
       if(bit==1) {ans+=pow(2,i);}
       temp = temp / 10;
       i++;
    }
cout<<ans;
}
int main(){
    decimal_to_binary(12);
    // binary_to_decimal(1010);
    return 0;
}