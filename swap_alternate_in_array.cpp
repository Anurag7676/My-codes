#include <iostream>
using namespace std;

void swap_array(int arr[],int n)
{
    int temp;
    int swap=n/2;
    int j=0;
    for(int i=0;j<swap;i=i+2)
    {
        temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]= temp;
        j++;
        

    }
       for(int i =0;i<n;i++)
    {
       cout<<arr[i];
        
    }
    
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i =0;i<n;i++)
    {
            cin>>arr[i];
        
    }
    
    swap_array(arr, n);
  
	
	return 0;
}
