#include<iostream>
using namespace std;
int binary_search(int arr[],int start, int end,int x){
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if (arr[mid]==x){
            return mid;
        }
        else if (arr[mid]<x)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int expontial_search(int arr[],int n,int x){
    if (arr[0]==x)
    {
        return 0;
    }
    int i=1;
    while (i<n && arr[i]<=x)
    {
        i=i*2;

    }
    return binary_search(arr,i/2,min(i,n-1),x);
}
int main(){
    int arr[]={3,6,11,13,14,15,45,56,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=56;
    int ans=expontial_search(arr,n,x);
    cout<<"Element is present at index "<<ans;
    return 0;
}
