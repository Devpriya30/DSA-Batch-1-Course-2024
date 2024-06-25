class Solution {
    public boolean uniqueOccurrences(int[] arr) {

        Map<Integer,Integer> map = new HashMap<>();
        //int[] a = new int[map.size()];

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
         int[] a = new int[map.size()];
        int index = 0;

        
        for (int count : map.values()) {
            a[index++] = count;
        }

        
        for (int i = 0; i < a.length; i++) {
            for (int j = i + 1; j < a.length; j++) {
                if (a[i] == a[j]) {
                    return false;
                }
            }
        }

        return true;
    }
}

//T.C =O(n^2)

//S.C = O(n)
