//SOLUTION 1

class Solution {
 public:
  double myPow(double x, long n) {
        return pow(x,n);
    }
};

//we can directly return the value using the power function, but it is not a good solution.
TIME COMPLEXITY : O(n log n)
SPACE COMPLEXITY : O(1)

//SOLUTION 2

class Solution {
 public:
  double myPow(double x, long n) {
    if (n == 0)
    return 1;
    if(n == 1)
    return x;
    if (n < 0)
    return 1 / myPow(x, -n);
    if (n % 2 == 1)
    return x * myPow(x, n - 1);
    return myPow(x * x, n / 2);
    }
};

TIME COMPLEXITY : O(log n)
SPACE COMPLEXITY : O(1)

