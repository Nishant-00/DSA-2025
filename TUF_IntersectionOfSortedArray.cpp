#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0, j=0;
        vector<int>res;

        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++; j++;
            }
            else if(nums1[i]!=nums2[j] && nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]!=nums2[j] && nums2[j]<nums1[i]) {
                j++;
            }

        }
        return res;

    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> nums2 = {3, 3, 4, 4, 5, 8};

    // Create an instance of the Solution class
    Solution finder;

    // Get intersection of nums1 and nums2 using class method
    vector<int> ans = finder.intersectionArray(nums1, nums2);

    cout << "Intersection of nums1 and nums2 is:" << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}