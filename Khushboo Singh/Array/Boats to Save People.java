class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int start=0,end=people.length-1,c=0;
        Arrays.sort(people);
        while(start<=end){
            if(people[start]+people[end]<=limit){
                c++;
                start++;
                end--;
            }
            else if(people[start]+people[end]>limit){
                c++;
                end--;
            
            }
        }
        return c;
        
    }
}
