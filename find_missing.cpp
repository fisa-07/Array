// Finding missing elements in  sorted array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }

    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+a[i];

    }

    if((n*(n+1))/2==sum)
    {
        cout<<"No missing elements";
    }
    else
    cout<<"Missing is: "<<(n*(n+1))/2-sum;

    return 0;

}