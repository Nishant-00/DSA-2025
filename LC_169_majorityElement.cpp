
// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

#include<bits/stdc++.h>
using namespace std;

int majorityEle(vector<int>&nums){
    cout<<"fun"<<endl;
    map<int, int> m;
        int res=0, count=0;

        for(auto x : nums){
            m[x]++;
        }
        for(auto i : m){
            if(i.second>count){
                count=i.second;
                res=i.first;
            }
        }
        cout<<endl;
    
    return res;
}

int main(){
    int n;
    cin>>n;

    vector<int>nums(n);
    cout<<"Main fun"<<endl;

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int k=majorityEle(nums);

    cout<<"Element with most number of occurences is : "<<k;
}