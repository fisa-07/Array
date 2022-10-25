#include<iostream>
using namespace std;
int main()
{
          int n;
          cin>>n;
          int *arr;
          arr=new int [n];
          for(int i=0;i<n;i++)
          {
                    cin>>arr[i];
          }
          int ma=max(arr[0],arr[1]);
          int mi=min(arr[0],arr[1]);
          for(int i=2;i<n;i++)
          {
                    if(ma<arr[i])
                    {
                          ma=arr[i];
                    }
                    else if (mi>arr[i])
                    {
                              mi=arr[i];
                    }
          }
          cout<<"Maximum  "<<ma<<endl;
          cout<<"Minimum  "<<mi<<endl;
                    return 0;

}
