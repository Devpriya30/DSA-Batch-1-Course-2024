class Solution {
    public int sumOfUnique(int[] nums) {
     int sum = 0;
     Map<Integer,Integer> map = new HashMap<>();
     for(int num : nums)
     {
        if(map.containsKey(num))
        {
            map.put(num,map.get(num)+1);
        }
        else
        {
            map.put(num,1);
        }

     }  
     
     for( Map.Entry<Integer,Integer> entry: map.entrySet())
     {
        if(entry.getValue() == 1)
        {
            sum += entry.getKey();
            
        } 

     }
    
     return sum;
    }
}

//T.C = O(n)

//S.C = O(n)
