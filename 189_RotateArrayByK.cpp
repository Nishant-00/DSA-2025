#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {

    ////////////////////BRUTE FORCE/////O(n*k)////////////
        // int temp, back;
        // int n=nums.size();

        // while(k--){
        //     back=nums[n-1];

        //     for(int i=n-1; i>0; i--){
        //         nums[i]=nums[i-1];
        //     }
        //     nums[0]=back;

        // }


        ///////////////////OPTIMAL/////////O(n)///////
         int n = nums.size();
        k = k % n;  // in case k > n

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
    }

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    

    rotate(arr, k);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}