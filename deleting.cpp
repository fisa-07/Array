// Deleting element from any index
#include<bits/stdc++.h>
using namespace std;

void deleting(int arr[],int length,int index)
{
    for (int i = index; i < length-1; i++)
    {
        arr[i]=arr[i+1];
    }
    length--;
    
}
int main(){
    int length;
    cin>>length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin>>arr[i];
    }
    int index;
    cin>>index;
    deleting(arr,length,index);
    for (int i = 0; i < length-1; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}