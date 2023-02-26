#include<iostream>
using namespace std;
int count(int arr[] , int n , int key){
        int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == key)
            count++;
                }
                return count;
}
int main(){
    int arr[7]={1,2,3,1,1,2,2};
    int ar[7];
    int n = 7;
    for(int i = 0;i<n;i++){
        ar[i]= count(arr,6,arr[i]);


    }
    for(int i = 0; i <n; i++)
    {
        cout<<ar[i];
        /* code */
    }
    cout<<endl;
    
}