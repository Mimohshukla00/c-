#include<iostream>
using namespace std;

// this is the method for binary search of sorted and infinite type array
// also called unbounded search 















int binary_search(int arr[],int start, int end,int key){
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if (arr[mid]==key){
            return mid;

        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return -1;
    
}


int findIndex(int arr[],int key){
    int start = 0;
    int end=1;
    while (arr[end]<=key)
    {
        start=end;
        end=2*end;
    }

    return binary_search(arr,start,end ,key);
    
}
int main(){

    int arr[] = {3,5,7,9,10,90,100,130,140,160,170,180,190,200,230,340,500};
    int key=500;
    int ans=findIndex(arr,key);
    cout<<ans<<endl;

    return 0;
}