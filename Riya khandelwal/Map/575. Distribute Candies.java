class Solution {
    public int distributeCandies(int[] candyType) {  

       
       Set<Integer> set = new HashSet<>();

       for(int i=0; i<candyType.length ; i++)
       {
            set.add(candyType[i]);
       } 

       for(int i=0; i<set.size() ; i++)
       {
            if(set.size()  <= candyType.length/2)
            {
                return set.size();
            }
       }
       return candyType.length/2;
    }
}

//T.c = O(n)

//s.C = O(n)
