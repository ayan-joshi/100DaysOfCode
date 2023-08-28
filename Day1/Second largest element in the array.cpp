#include <bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr) {
  // Write your code here.
  sort(arr.begin(),arr.end());
  int largest = arr[n-1];
  for(int i=n-2;i>=0;i--){
      if(arr[i] != largest) return arr[i];
  }
  return -1;
}
// here firstly we sort the wwhole array 
// then we started the for loop from the end 
// then checked if the largest is equal to the next element 
// if not then it is the slargest and we return otherwise we run the loop 
// return -1 for the case with all same variable