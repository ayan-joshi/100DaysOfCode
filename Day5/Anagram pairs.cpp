#include<bits/stdc++.h>
bool isAnagram(string str1, string str2)
{
    //Write your code here
    if(str1.size() != str2.size()) return false;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2) return true;
    else return false;

}

// An Anagram is a word or phrase formed by rearranging the letters of a 
// different word or phrase, typically using all the original letters exactly once.
// so to find this between two string we first check their size if it's not equal return false there itself
// then sort both the strings if they are both equal after the sorting return true else false



// There is one more optimal solution for anagram
 bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int arr[26] = {0};
        for(int i=0;i<s.length();i++){
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i] != 0) return false;
        }
        return true;
    }

// here we take a array of 26 elements 
// then iterate through the array and increase for s[i] and decrease for t[i] if we found the same element
// at the end if arr[i] is having all values zero return true else false 
//ezyyyyyyyyyy