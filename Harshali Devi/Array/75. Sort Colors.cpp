//Day 2
//Question 11
//https://leetcode.com/problems/sort-colors/

//Method 1
class Solution {
public:
    //count sort
    //dnf algo -> dutch national flag algo
    void sortColors(vector<int>& nums) { 
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

//Time Complexity -> O(n)

//Method 2
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int min;
        for(int i=0;i<nums.size()-1;i++){
            min=i;
            for(int j=i+1;j<nums.size();j++){
                if (nums[j]<nums[min]){
                    min=j;
                }
            }
            swap(nums[i],nums[min]);
        }
    }
};

//Time Complexity -> O(n**2) 
