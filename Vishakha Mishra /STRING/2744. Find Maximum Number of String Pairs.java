class Solution {
    public int maximumNumberOfStringPairs(String[] words) {
        HashSet<String> set = new HashSet<>();
        int count=0;
        for(String word: words){
            String r=new StringBuilder(word).reverse().toString(); 
            if(set.contains(r)){
                count++;
            }
            else set.add(word);
        }
        return count;
    }
}
