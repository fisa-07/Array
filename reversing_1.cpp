// Reversing array with using an array
#include <iostream>
using namespace std;

void revers(int A[],int n)
{
    int B[n];
    int i,j;
    for ( i = 0, j = n-1; i >= 0; i++,j--)
    {
        B[i]=A[j];
    }
    for ( i = 0; i < n; i++)
    {
        A[i]=B[i];
    }
    
    
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }


    return 0;
}
