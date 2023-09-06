#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    stack<int> st;
    int count = 0;
    int n = pattern.size();
    for(int i=0;i<n;i++){
        if(pattern[i] == '('){
            st.push(i);
        }
        else if(pattern[i] == ')'){
            if(st.empty()) count++; 
            else{
                if(st.top() < i) st.pop();
            }
        }
    }
    count = count + st.size();
    return count;

}

// if the string is like ')((()' in this answer should be 3 first for the close bracket and then 2 for the open bracket so 2+1 = 3
// We can use stack here to easily solve the problem
// firstly if its '(' bracket so we have to just push it in to the stack
// if its ')' bracket then we need to first check if it's empty if it's empty then just increase the count to add the open bracket 
// if it's not empty , check if the top element of the stack (which stores the index of the corresponding open parenthesis) 
// is less than the current index. If it is, pop the top element from the stack, indicating that a matching pair of parentheses has been found
// at the end add st.size and count to the count variable and return the count variable 
// completed 