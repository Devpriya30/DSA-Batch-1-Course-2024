class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //row
        int n = matrix[0].size(); // column

         // we will not Create a vector of row of m size and col of n size we will amke cahnges in row n col only
    
        // vector<int> row(m,0);  --> matrix[..][0]
   
         // vector<int> col(n,0);  --> matrix[0][..]

    int col0 = 1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                // mark i-th row:
                matrix[i][0] = 0;

                // mark j-th column:
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] != 0) {
                // check for col & row:
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    //step 3: Finally mark the 1st col & then 1st row:
    if (matrix[0][0] == 0) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
 }

};






         

    

//Brute FORCE APPROACH (1)
//TC :- O(n*m) + O(n+m) +O(n*m) ~ O(n^3)
//SC :- O(1)

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m = matrix.size(); //row
//         int n = matrix[0].size(); // column

//                                                            //Start iterating over matrix and if find 0 then mark particular row and col -1
//     for(int i=0;i<m;i++)                                  //O(n*m)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {



//         for(int i=0 ; i<m ; i++)         //loop for row and will if find non zero element
//                                             // mark -1 or -ve no.   using -56 becoz -1 giving some error
//                                                   //O(n+m)
//            {
//             if(matrix[i][j] !=0 )
                
//                      matrix[i][j] = -56;
//            }

              
//             for(int j = 0 ; j<n ; j++)      //loop for col and will if find non zero element
//                                             // mark -1 or -ve no.   

//             {
//                if(matrix[i][j] !=0 )               
                    
//                      matrix[i][j] = -56;

//             }   
//         }
//     }
//  }

//         for(int i=0;i<m;i++)          //now marking all -ve to 0 again
//                                                //O(n*m)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(matrix[i][j]==-56)
//                 matrix[i][j]=0;
//             }
//         }
//     }
// };
 
 

 //BETTER APPROACH 
 //TC - O(2*n*m) 
 //SC - O(m)+O(n)


//      void setZeroes(vector<vector<int>>& matrix) {
//         int m = matrix.size(); //row
//         int n = matrix[0].size(); // column

//         vector<int> row(m,0);   //Create a vector of row of m size and col of n size
//         vector<int> col(n,0);

//         for(int i= 0 ; i<m ; i++)  // start iterating over matrix and if find zero mark new row n col with 1
//                                     //O(n*m)
//         {
//             for(int j=0 ; j<n ; j++)
//             {
//                 if(matrix[i][j] == 0)
//                 {
//                     row[i] = 1;
//                     col[j] = 1;
//                 }
//             }
//         }

//         for(int i=0;i<m;i++)   //again iterate on matrix if find in nwe row or either in col 1 then mark entire row n col to 0
//         {                                      //O(n*m)
//             for(int j=0;j<n;j++)
//             {
//                 if(row[i] || col[j])
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
// };
