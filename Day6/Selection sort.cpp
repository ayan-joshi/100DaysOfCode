#include <bits/stdc++.h> 


void selectionSort(vector<int>& arr, int n){   
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

// selction sort is a sorting technique which runs two loops 
// first loop is at the minm position and j runs from i+1
// the compare elements in the loop and minimum of it is swapped to the ith position 
// somewhat similar to insertion sort