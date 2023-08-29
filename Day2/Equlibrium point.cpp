int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int sum = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    int left = 0;
    for(int i=0;i<n;i++){
        sum = sum - arr[i];
    
    if(left == sum) return i;
    left = left + arr[i];
    }
    return -1;

}

// so here we have to find the equilibrium point which means in a array left and right sum of respective to element should be same
// [1 2 6 0 4 -1] here 6 is the element of which left and right sum of the element is equal to 3 so we have to return the index which is 2
// firstly we found the sum of the whole array 
//  // Iterate through each index to find the equilibrium index
// Subtract the current element value from the total sum.
// If the sum of elements on the left side is equal to the sum on the right side,
// return the current index as the equilibrium index.
// Add the current element value to the left sum.
// return -1 if no equlibrium is found.