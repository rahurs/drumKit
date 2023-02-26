#include<iostream>

using namespace std;
int main(){
    int arr[10] = {0,1,0,1,0,1,1,0,0,1};
    int j = 0,i = 9;

    while(i>=j){
        if(arr[i]==0 && arr[j] == 1){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = arr[i];
            i++;
            j--;
        }
        else if(arr[j] == 1){
            j--;
        }
        else if(arr[i] == 0 ){
            i++;
        }
    }
    for(int i = 0;i<10;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
}
