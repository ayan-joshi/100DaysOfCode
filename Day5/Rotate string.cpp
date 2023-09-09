 bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        string ans = s + s;
        if(ans.find(goal) != string::npos ){
            return true;
        }
        else return false;
    }

// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
// A shift on s consists of moving the leftmost character of s to the rightmost position.
// For example, if s = "abcde", then it will be "bcdea" after one shift.
// for the solution we took a string with s + s , so goal will always be the part of the string s+s
// example s+s = "abcdeabcde" therefore goal 'bcdea" is found in s+s
// then we just find the goal string in ans if found then return true else false 
// Time complexity for worst case is O(n^2) and space complexity is o(n) for s+s
