class Solution {
    public int lengthOfLongestSubstring(String s) {
        int[] uselength = new int[128];
        int maxlength = 0;

    
      for(int i=0,j=0 ; i<s.length() ; i++)
      {
          char c = s.charAt(i);
          j = Math.max(j,uselength[c]);
          maxlength = Math.max(maxlength,i-j+1);
          uselength[c] = i+1;
      }
      return maxlength;
    }
}

//T.C = O(n)

//S.C = O(n)
