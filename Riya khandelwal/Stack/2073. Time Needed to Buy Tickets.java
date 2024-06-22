class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
         
        int totaltime = 0;

        for(int i=0;i<tickets.length;i++)
        {
            if(i<=k)
            {
                totaltime += Math.min(tickets[i],tickets[k]);
            }
            else
            {
                totaltime += Math.min(tickets[i],tickets[k] - 1);
            }
        } 
        return totaltime;
    }
}

//T.C = O(n)

//S.C = O(1)
