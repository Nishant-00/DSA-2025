// Input : nums = [2, 4, 5, -1, -3, -4]

// Output : [2, -1, 4, -3, 5, -4]

// Explanation: The positive number 2, 4, 5 maintain their relative positions 
// and -1, -3, -4 maintain their relative positions

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {

      // int n=nums.size();
      // vector<int> pos;
      // vector<int> neg;


      // for(int i=0; i<n; i++){
      //   if(nums[i]<0){
      //     neg.push_back(nums[i]);
      //   }
      //   else{
      //     pos.push_back(nums[i]);
      //   }
      // }
    

      // for(int i=0; i<n/2; i++){
      //   nums[i*2]=pos[i];
      //   nums[i*2 + 1]=neg[i];
      // }

      // return nums;


      int n=nums.size();
      vector<int> res(n);
      int pos=0;
      int neg=1;

      for(int i=0; i<n; i++){
        if(nums[i]<0){
          res[neg]=nums[i];
          neg+=2;
        }
        else{
          res[pos]=nums[i];
          pos+=2;
        }
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
    

    vector<int> res=rearrangeArray(arr);
    for(int i=0;i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}