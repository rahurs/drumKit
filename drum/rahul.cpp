#include<iostream>
using namespace std;
int power(int a , int b){
    int ans = 1;
    if(b == 0){
        return 1;
    }
    for(int i = 1;i<=b;i++){
        ans = ans * a;
    }
    return ans;
}
int main(){
    int a , b;
    // cin>>a>>b;
    int i;
    while(1){
        cin>>a>>b;
       cout<<power(a,b);
        cin>>i;
        if(i == 1){
            break;
        }
    }
    return 0;
}