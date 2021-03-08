#include <iostream>
using namespace std;


void productExceptSelf(int arr[], int N){
    int productE[N];
    int j=0, self,temp=1;
    
    while (j<N){
        self = arr[j];
        for (int i=0; i<N;i++){
            if(i==j||arr[i]==1) temp = temp; 
            else temp = temp*arr[i];
        }
        productE[j]=temp;
        temp = 1;
        j++;
    }
    
    for (int k=0; k<N; k++)
        cout << productE[k] << " ";
    cout << endl;
    
};

// Driver Code
int main()
{
    int arr[] = {1, 2, 1, 3, 4};    
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    productExceptSelf(arr, N);
 
    return 0;
}

    /* 
        Testcases
    
    int arr[] = {1, 2, 1, 3, 4};
    
    Output: 24 12 24 8 6
    
   
    
    int arr[] = { 10, 3, 5, 6, 2};
    
    Output: 180 600 360 300 900
    
    */