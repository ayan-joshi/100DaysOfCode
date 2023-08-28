#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    //  Write your code here.
    int modified = 0;
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            modified++;
            if(modified > 1) return false;
            if(i<2 || arr[i-2] <= arr[i]) arr[i-1] = arr[1];
            else arr[i] = arr[i-1];
        }
    }
    return true;
    
}
// so here we have to find non decreasing array with just one modfication allowed 
// if it is a non decreasing aaray we have to return true else false
// here is a intuition as example [3 1 4] so here as 1 means arr[i] < arr[i-1] so we need to modify it to 3 therefor [ 3 3 4]
// but in case when arr[i-2] <= arr[i] , [1 4 3] so we replace arr[i-1] with arr[i] so it become [1 3 3 ] valid with one modification 
// so this was non decreasing array  