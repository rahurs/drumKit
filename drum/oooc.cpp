#include <iostream>
using namespace std;

void sorrat(int arr[],int size) {
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        }
    // for(int i= 0 ;i<8-1;i++){
    // cout<<arr[i]<<" ";
    // }
    // cout<<endl;
        }

void count(int arr[] , int size){
        int c = 0;
     
     for( int x = 0 ;x<8;x++){
        int couns = 0;
        for(int i = 0;i<size;i++){
        if(arr[i]== c)
            continue;
             else if(arr[i] == arr[i+1]){
             couns = 1;
             c = arr[i];
             break;
          }
        
        
            }
        if(couns == 1){
            cout<<c<<" ";
    }
     }
    cout<<endl;
    }



int main(){
    int arr[8]={3,3,2,1,7,7,5,2};
sorrat(arr,8);
for(int i= 0 ;i<8-1;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

        
      count(arr,8);
       
    // for(int i = 0;i<6;i++){
    //     int count = 0;
    //     for(int j = 0;j<8;j++){
    //         if(arr[i]==arr[i+1]){
    //             count = 1;
    //         }
    //     }
    //     if(count == 1){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    return 0;
}
