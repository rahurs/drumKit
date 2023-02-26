#include<iostream>
using namespace std;
int main(){
    int arr[10] ;
    for(int i = 0 ; i<3;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i <3; i++)
    {
        /* code */
        sum = sum + arr[i];

    }
    
    cout << sum << endl;
}