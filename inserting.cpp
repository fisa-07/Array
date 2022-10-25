//Inserting an element in any index
#include<iostream>
using namespace std;

void insert(int arr[], int length, int index, int element)
{
    for(int i=length;i>index;i--)
    {
        arr[i]=arr[i+1];   // shifting elements one by one to right hand side
    }
    arr[index]=element; //inserting 
    length++;   // lenght increase by 1
}
int main()
{
    int length,index,element;
    cout<<"Enter array lenght: ";
    cin>>length;
    int arr[length];
    cout<<"Enter elements: ";
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    cout<<"Index to Insert: ";
    cin>>index;
    cout<<"Element to insert: ";
    cin>>element;
    insert(arr,length,index,element);
    for(int i=0;i<length+1;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}