class Solution {
    public int findLucky(int[] arr) {
    int max =-1; // -1 if frequecy are not equal
   // int[] a = new int[arr.length];
    Map<Integer,Integer> map = new HashMap<>();
    for(int num:arr)
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
    for(Map.Entry<Integer,Integer> entry : map.entrySet())
    {
        if(entry.getValue() == entry.getKey())
        {
            max = Math.max(entry.getValue(),max);
               
        }
    }
    return max;
    
    
    }
}

//T.C =O(n)

//S.C = O(n)
