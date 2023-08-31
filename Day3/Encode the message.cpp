#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int n = message.size();
    string ans;
    int count = 1;
    for(int i=0;i<n;i++){
      if (message[i] == message[i + 1]) {
        count++;
      }
      else if (message[i] != message[i + 1]){
        ans += message[i] + to_string(count);
        count = 1;
      }
    }
    return ans;
}

// example : for a string aabbc output should be a2b2c1
// firstly we iterate in the string then check if i = i+1
// if yes then count++ if not we add the message and the count of message with concatenation in string
// at the end return the ans