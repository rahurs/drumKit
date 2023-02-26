#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,23,4,5,6};
    // int arr[5]={1,2,3,4,5};
    int n = 6;
    for(int i = 0; i <n; i++)
    {
        /* code */
         arr[i] = arr[i]+arr[i+1] + arr[i+2];
        // i++;
    }
    for(int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}