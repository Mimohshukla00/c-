#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>arr{1,2,3,4,5};
    if (binary_search(arr.begin(),arr.end(),5))
    {
        cout<<"found" <<endl;

    }
    else{
        cout<<"not found"<<endl;
    }
    

    
}