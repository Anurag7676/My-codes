#include <iostream>
using namespace std;

int main() {
    int n ;
    int m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

	return 0;
}
