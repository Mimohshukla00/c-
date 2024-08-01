#include<iostream>
#include<vector>

using namespace std;
int sqrt(int n){
    int start=0;
    int end=n;
    int ans=-1;
    int mid=start+(end-start)/2;
    int target=n;

    while (start<end)
    {
        if(mid*mid==target){
            ans=mid;
            break;


        }
        if (mid*mid>target)
        {
           
            end=mid-1;
            


        }
        
        else{
             ans=mid;
            start=mid+1;
            

        }
        mid=start+(end-start)/2;
        
    }
    return ans;
    

}

int main() {
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int squareRootOfGivenNUmber=sqrt(n);
    cout<<"Square root of the number is "<<squareRootOfGivenNUmber;
    
  
    return 0;
}
