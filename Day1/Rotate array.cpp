vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    vector<int> ans;
    for(int i=k;i<n;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}
// here k is given so we have to rotate the array that times 
// if array is [1 2 3 4 5] , k = 2 so rotated array will be [3 4 5 1 2] 
// firstly we took an array started the loop from kth index so inserted element [3 4 5]
// then started the loop from initial posotion till k and stored in the vector 
// at last return the vector 
//ezyyyyyyyyyyy