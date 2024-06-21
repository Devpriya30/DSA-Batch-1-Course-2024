class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count=0;
        int max=arr[0];
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]>max){
                max=arr[i];
            }
            if(max==i){
                count++;
            }
        }
        return count;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
