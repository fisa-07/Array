#include<iostream>
using namespace std;

int main()
{
          int n;
          cin>>n;
          int *arr;
          arr=new int [n];
          for(int i=0;i<n;i++){
                    cin>>arr[i];
          }
          for(int i=0;i<n;i++){
                    if(i>=(n-1)-i){
                              break;
                    }
                    swap(arr[i],arr[n-1-i]);
          }
          for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
          }
          delete arr;
          return 0;

}
