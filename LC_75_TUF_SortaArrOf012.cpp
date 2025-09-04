#include<bits/stdc++.h>
using namespace std;


//Using STL
// void sortarray(vector<int>&nums){
//     int c0=0, c1=0, c2=0;

//     for(int i : nums){
//         if(i==0){c0++;}
//         else if(i==1){c1++;}
//         else {c2++;}
//     }
//     nums.clear();
//     nums.insert(nums.end(), c0, 0);
//     nums.insert(nums.end(), c1, 1);
//     nums.insert(nums.end(), c2, 2);
// }

void sortarray(vector<int>&nums){
    int low=0, mid=0, high=nums.size()-1;

    while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                low++; mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
}

int main(){

    int n;
    cin>>n;

    vector<int>nums(n);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    
    sortarray(nums);

    for(int i=0;i<n; i++){
        cout<<nums[i]<<" ";
    }

    cout<<endl;

}