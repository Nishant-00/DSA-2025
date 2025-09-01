// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
// To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements 
// that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.


#include<bits/stdc++.h>
using namespace std;


    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        
///////////////////////////BRUTE FORCE///////////////////////////////////
        // vector<int> res;
        // for(int i=0; i<m; i++){
        //     res.push_back(nums1[i]);
        // }
        // for(int i=0; i<res.size(); i++){
        //     cout<<res[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0; i<n; i++){
        //     res.push_back(nums2[i]);
        // }

        // sort(res.begin(), res.end());

///////////////////////////OPTIMAL///////////////////////////////////
        vector<int> res;
        int i=0; int j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i++]);
            }
            else{
                res.push_back(nums2[j++]);
            }
        }

        while(i<m){
            
                res.push_back(nums1[i++]);
        }
        while(j<n){
            res.push_back(nums2[j++]);
        }
        nums1.clear();
        for(int k=0;k<res.size();k++)
        {
            nums1.push_back(res[k]);
        }

        return ;
        
    }

int main(){

    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={2, 5, 6};
    int m=nums1.size();
    int n =nums2.size();

    merge(nums1, m, nums2, n);

    for(int i : nums1){
        cout<<i<<" ";
    }
    cout<<endl;





}