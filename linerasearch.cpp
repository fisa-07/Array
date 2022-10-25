// Linear search------Time complexcity is O[n]
#include<iostream>
using namespace std;

int linerasearch(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;   //return index when key is found using if condition
        }
       
    }
    return -1;   // return -1 when no key is found after terminating from loop

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linerasearch(arr,key,n);
    return 0;
}