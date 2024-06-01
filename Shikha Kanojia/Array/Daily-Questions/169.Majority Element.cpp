class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's voting algorithm

        int n = nums.size();

        int cnt= 0; 
        int ele;

        for(int i = 0 ; i<n ; i++)  //TC O(N)
    
        {
            if(cnt == 0 )
            {
                cnt = 1 ;
                ele = nums[i];
            }

            else if(nums[i] == ele)
            {
                cnt++;
            }
            else if(nums[i] != ele)
            {
                cnt--;
            }
        }
        
             return ele;
            
        
    
    }
};









// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count = 0;
//         int ele;
//         // iterating over the array
//         for(auto i: nums){
//             if(count == 0){
//                 ele = i;
//                 count++;
//             }
//             else if(i == ele)
//                 count++;
//             else 
//                 --count;
//         }
//         // checking whether the element is majority //we require this loop only in that condition where there is no
                                                    //surity if majority element exist or not.
//         int cnt = 0;
//         for(auto i: nums){
//             if(ele == i)
//                 ++cnt;
//         }
//         // checking for the size condition
//         if(cnt > nums.size()/2)
//             return ele;
//         return -1;
//     }
// };
