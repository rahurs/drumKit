#include<iostream>
using namespace std;
int main()
{
    
    int arr[7] = {1,2,3,3,5,6,7};
    int ar[5] ={9,10,11,12,14};
    int m = 7 , n = 5;
    int flag = 0;
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            if(arr[i] == ar[j]){
                flag = 1;
                cout<<arr[i]<<" ";
                ar[j] = 0;
                break;
            }
            
        }
    }
    if(flag == 0){
        cout<<"-1"<<" ";
    }
    cout<<endl;
    return 0;
}