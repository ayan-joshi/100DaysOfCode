#include <bits/stdc++.h>
int firstMissing(int arr[], int n) {
  // Write your code here.
  sort(arr,arr+n);
  int num = 1;
  for(int i=0;i<n;i++){
      if(arr[i] >=1){
          if(arr[i] != num){
              return num;
          }
          num++;
      }
  }
  return num;
}

// we have to find first smallest missing positive number in the array 
// Sort the input array in ascending order.
// Initialize the number to start looking for.
// Iterate through the sorted array to find the first missing positive integer.
// Only consider positive or zero values , if a gap is found return the current number.
// If no missing positive integer is found in the array, return the next positive integer.
