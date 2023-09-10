#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n){
    if(n == 0 || n ==1){
        return;
    }
      for(int i = 0; i < n-1; i++){
        if(arr[i+1] < arr[i]){
            swap(arr[i], arr[i+1]);
        }
    }
    n = n - 1;
    bubbleSort(arr, n);
}
//In bubble sort we take 2 adjacent elements to compare and swap them 