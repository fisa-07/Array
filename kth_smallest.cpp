// Find kth smallest element in array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)  // sort array
    {
        for (int j = i+1; j < n; j++)
        {
            if ( a[i] > a[j])
            {
                swap( a[i] , a[j]);
            }
            
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    

    int k;
    cin >> k;
    cout << a[k - 1];  //print element at kth position in a sorted array 

    return 0;
}