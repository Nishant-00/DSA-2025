//In this que you can keep upto 2 copies of each element and should remove the rest


#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>&nums, int n){
    if(n<=2){
        return n;
    }
    int j=2;

    for(int i=2; i<n; i++){
        if(nums[i]!=nums[j-2]){
            nums[j]=nums[i];
            j++;
        }


    }
    return j;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    

    cout<<"Array after removing duplicates "<<endl;

    int res=removeDuplicates(arr, n);
    for(int i=0;i<res; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}