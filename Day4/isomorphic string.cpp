bool areIsomorphic(string &str1, string &str2)
{
    // Write your code here
  unordered_map<char, char> mp, mp2;
        for (int i=0; i<str1.length(); ++i) {
            if (mp[str1[i]] && mp[str1[i]]!= str2[i]) return false;
            if (mp2[str2[i]] && mp2[str2[i]]!= str1[i]) return false;
            mp[str1[i]]=str2[i];
            mp2[str2[i]]=str1[i];
        }
        return true;
    
}

// Two strings str1 and str2 are isomorphic if the characters in str1 can be replaced to get str2.
// Two unordered maps mp and mp2 are declared. These maps will be used to store character mappings between str1 and str2.
// The code iterates through each character of the input strings using a for loop.
// Inside the loop, it checks if there's already a mapping for the current character in both mp and mp2. If there is a mapping and it doesn't match
//  the corresponding character in the other string, the function returns false. This is because if a character maps to different characters in the other string,
//   the strings cannot be isomorphic.
// If there is no mapping for the current character in either map, it creates a mapping between the current 
// character in str1 and the current character in str2, and vice versa, in mp and mp2 respectively.
// The loop continues until all characters in the strings are processed.
// After the loop, if the function has not returned false, it means that the strings are isomorphic, and it returns true.
