//Leetcode problem no 26. 
//Remove Duplicates from a sorted array.

//IP : [1, 2, 3, 3, 4, 4, 5]
//OP : [1, 2, 3, 4, 5]

#include<bits/stdc++.h>
using namespace std;

/////////////////////Brute Force//////////////////////////////
// int removeDuplicates(vector<int>&arr, int n){
//     set<int> s;
    
//     for(int i=0; i<n; i++){
//         s.insert(arr[i]);
//     }
//     arr.clear();

//     for(auto x : s){
//         arr.push_back(x);
//     }
//     return s.size()+1;
// }
///////////////////////////////////////////////////////////

////////////////////OPTIMAL//////////////////////// 
int removeDuplicates(vector<int>&arr, int n){
    
    int count=1;

    for(int i=1; i<n; i++){
        if(arr[i]!=arr[count-1]){
            arr[count++]=arr[i];
        }
    }
    return count;
}
//////////////////////////////////////////////// 
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