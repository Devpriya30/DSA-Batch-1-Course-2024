//Day 6
//Quention 34
//https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> ans;
    int n=arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if (i > 0 && arr[i] == arr[i - 1]) // Skip duplicates
            continue;
        int left = i+1;
        int right = n-1;
        while(left<right){
            int ele = arr[i]+arr[left]+arr[right];
            if(ele<0){
                left++;
            }
            else if(ele>0){
                right--;
            }
            else{
                ans.push_back({arr[i],arr[left],arr[right]});
                while (left < right && arr[left] == arr[left + 1]) left++;       //
                while (left < right && arr[right] == arr[right - 1]) right--;
                left++;
                right--;
            }
        }

    }
        return ans;
    }
};

//Time Complexity -> O(n**2)
