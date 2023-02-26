#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,3,5,6,7};
    
    int ar[5] ={2,3,4,4,5};
    int j = 0 , i = 0 , m = 7 , n = 5;
    while(i<n && j<m){
        if(arr[j] == ar[i]){
            cout<<arr[j]<<" ";
            i++;
            j++;
        }
        else if(arr[j] < ar[i]){
            j++;
        }
        else
            {
                i++;
            }
    }
    cout<<endl;
}