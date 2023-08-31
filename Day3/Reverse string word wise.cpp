#include<bits/stdc++.h>

void reverse(char input[], int i, int j){
    while(i < j){
        swap(input[i],input[j]);
        i++;
        j--;
    }
}

void reverseString(char input[]){
    int i = 0, j = input.length() - 1;
    reverse(input, i, j);
    int start = 0, end = 0;
    for(i = 0;i<input.size();i++){
        if(input[i] == ' '){
            end = i - 1;
            reverse(input, start, end);
            end = i + 1;
            start = i + 1;
        }
    }    
    end = i - 1;
    reverse(input , start , end);
}

// Calculate the length using strlen() function
// reverse the whole string 
// reverse the current word (wrote function for it)
// at last reverse last word writter for i-1
