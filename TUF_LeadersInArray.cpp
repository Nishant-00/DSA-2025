
// Input: nums = [1, 2, 5, 3, 1, 2]

// Output: [5, 3, 2]

// Explanation: 2 is the rightmost element, 3 is the largest element in the 
// index range [3, 5], 5 is the largest element in the index range [2, 5]

#include<bits/stdc++.h>
#include<climits>
using namespace std;


  void reverse(vector<int>&nums){ //helper function
    int i=0;
    int n=nums.size()-1;

    while(i<n){
      int temp = nums[i];
      nums[i]=nums[n];
      nums[n]=temp;

      i++; n--;
    }
}

vector<int> leader(vector<int>&nums){
    int n=nums.size()-1;
    int maxi=INT_MIN;
    vector<int>res;

    for(int i=n; i>=0; i--){
        if(nums[i]>maxi){
            maxi=nums[i];
            res.push_back(nums[i]);
        }
    }
    reverse(res);
    for(int i : res){
    }
    return res;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    

    vector<int> res=leader(arr);
    for(int i : res){
        cout<<i<<" ";
    }
    cout<<endl;
}