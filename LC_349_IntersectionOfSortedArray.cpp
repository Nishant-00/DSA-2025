////LC version of intersection is diffent than TUF
//Reason being this version does not allows duplicates while TUF does.

#include<bits/stdc++.h>
using namespace std;



    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int> us1;
        unordered_set<int> us2;
        int n=nums1.size();
        int m=nums2.size();

        for(int i=0; i<n; i++){
            us1.insert(nums1[i]);
        }
         for(int i=0; i<m; i++){
            us2.insert(nums2[i]);
        }

        for(auto i : us1){
            if(us2.find(i)!=us2.end()){
                res.push_back(i);
            }
        }
        

        return res;

    }



int main(){
    vector<int>nums1 = {1,2,2,1};
    vector<int>nums2 = {2,2};

    vector<int> res=intersection(nums1, nums2);

    for(int i : res){
        cout<<i<<" ";
    }

    cout<<endl;
}
