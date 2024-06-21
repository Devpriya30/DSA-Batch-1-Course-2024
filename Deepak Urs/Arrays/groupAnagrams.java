import java.util.*;

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> res = new ArrayList<>();
        Map<String, List<String>> mp = new HashMap<>();

        for(int i = 0; i< strs.length; i++) {
            char[] k = strs[i].toCharArray();
            Arrays.sort(k);
            String key = new String(k);

            if(mp.containsKey(key)) {
                mp.get(key).add(strs[i]);
            }
            else {
                List<String> lt = new ArrayList<>();
                lt.add(strs[i]);
                mp.put(key, lt);
            }
        }

        for(String k: mp.keySet()){
            res.add(mp.get(k));
        }

        return res;
    }
}