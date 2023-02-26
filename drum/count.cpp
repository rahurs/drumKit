#include<iostream>
#include<math.h>
using namespace std;
int binary(int a ){
int ans = 0 , i = 0  ;
    while(a != 0){
        int bit = a&1;
        ans = (bit*pow(10,i))+ans;
        a = a>>1;
        i++;
    }
    return ans;
}
int count_bit(int a ){
    int count = 0 ;
    int ans = binary(a);
    cout<<ans<<endl<<endl;
    while(ans != 0){
        int n = ans%10;
        if(n==1)
            count++;
        ans = ans/10;

    }
    cout<<count<<endl;
    return count ;
}
int main(){
    int a = 5 ,b = 6;
    int num1 = count_bit(a);
    int num2 = count_bit(b);
    int sum =  num1+num2 ;
    cout<<sum;
    return 0;
}
