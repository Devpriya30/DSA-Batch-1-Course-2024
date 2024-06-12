class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        // Map<Integer,Integer> map = new map<>();
        // for(int i=0 ;i<arr2.length;i++)
        // for(int a : arr2)
        int[] a = new int[arr1.length];
        int index = 0;
        for(int i=0 ;i<arr2.length;i++)
        { 
            for(int j=0 ;j<arr1.length; j++)
            {
                if(arr2[i] == arr1[j])
                {
                      a[index++] = arr1[j];
                        
                }
                
                
            }
            


        }
        Arrays.sort(arr1);
        for (int j = 0; j < arr1.length; j++) {
            boolean found = false;
            for (int k = 0; k < arr2.length; k++) {
                if (arr1[j] == arr2[k]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                a[index++] = arr1[j];
            }
        }

      return a;
    }
        
}

//T.C = O(n^2)

//S.C = O(n)
    
