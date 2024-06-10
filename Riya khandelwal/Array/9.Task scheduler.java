class Solution {
    public int leastInterval(char[] tasks, int n) {
        int[] arr = new int[26];
        int c=0;
        for (char task : tasks) {
            arr[task - 'A']++;
        }
        // for(int i=0;i<tasks.length;i++)
        // {
        //     for(int j=i+1;j<tasks.length;j++)
        //     {
        //         if(tasks[i] == tasks[j])
        //         {
                    
        //            c++;
        //         }
        //     }
        // }
        Arrays.sort(arr);
       
        int maximum_freq = arr[25]-1;
        int total_gap = maximum_freq*n;
        for(int i=24; i>=0 && arr[i]>0;i--)
        {
            total_gap -= Math.min(maximum_freq,arr[i]);

        }
        return total_gap > 0 ? total_gap + tasks.length : tasks.length;
        

    }
}

//T.C = O(N)

//S.C = O(N)
