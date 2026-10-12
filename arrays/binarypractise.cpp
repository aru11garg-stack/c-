#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    int key;
    cout<<"Enter the key: ";
    cin>>key;

    while(low<=high){
       int mid=(low+high)/2;


        if(arr[mid]==key)
        {
            cout<<"Element found at index: " << mid <<endl;
            break;
        }
        else if( arr[mid]<key)
        {
            low=mid+1;
            
        }
        else
        {
            high=mid-1;
            
        }
    }
    
   
    
}