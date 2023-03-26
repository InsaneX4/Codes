
#include <iostream>

using namespace std;
 
void InsertionSort(int A[], int n){
    for (int i=1; i<n; i++){
        int j = i-1;
        int x = A[i];
        while (j>-1 && A[j] > x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main(){
    
        int arr[] = {1,2,3,4,5};
    
        int sum = 0;
        for(int i=0;i<5;i++){
            sum += arr[i];
    
        }
        
        InsertionSort(arr, sizeof(arr)/sizeof(arr[0]));
        
        cout<<sum-arr[4]<<" "<<sum-arr[0];   

    

    return 0;
}
