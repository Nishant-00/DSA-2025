
#include<bits/stdc++.h>
using namespace std;

    void merge(vector<int>&nums, int low, int mid, int high){

        int left=low;
        int right=mid+1;
        vector<int>temp;

        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i=low; i<=high; i++){
            nums[i]=temp[i-low];
        }
        
    }

     void ms(vector<int>&nums, int low, int high){

        if(low==high){return; }
        int mid = (low+high)/2;

        ms(nums, low, mid);
        ms(nums, mid+1, high);
        merge(nums, low, mid, high);
     }


    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        ms(nums, 0, n-1);

        return nums;

    }

int main(){
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    vector<int> sortedArr = mergeSort(arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << sortedArr[i] << " ";
    cout << endl;

    return 0;
}