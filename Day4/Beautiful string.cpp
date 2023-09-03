int makeBeautiful(string str) {
	// Write your code here
	string str1 , str2 ;
	int n = str.size();
	for(int i=0;i<n;i++){
		if(i % 2 == 0){
			str1.push_back('0');
			str2.push_back('1');
		}
		else{
			str1.push_back('1');
			str2.push_back('0');
		}
	}
	int cnt1 = 0, cnt2 = 0;
	for(int i=0;i<n;i++){
		if(str[i] != str1[i]){
			cnt1++;
		}
		if(str[i] != str2[i]){
			cnt2++;
		}
	}
	return min(cnt1,cnt2);
	
}

// 1010 , 010, 0101 this kind ofstrings are named as beautiful string
// we neeed to return number of changes required to make the string beautiful
// firstly we iterate in the array and gave even and odd position to 0 and 1 and vice vera with else 
//then took two cnt variable and iterated in the array and if it's not the beautiful string we have increase the count 
// at the end return the mini of cnt needed for the beautiful string 