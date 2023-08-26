/*
    Time complexity: O(N) 
    Space complexity: O(1)
    
    Where 'N' is the size of an input array 'A'.
*/

long long totalChocolates(int n, vector<int> a) {
    
 long long totalRemoved = 0;
  for (int i = 0; i < n; i++) {
  // If current element greater than 23, add excess chocolates to total.
        if (a[i] > 23) {
            totalRemoved += a[i] - 23;
        }
    }
    return totalRemoved;
}