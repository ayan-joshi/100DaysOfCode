#include <iostream>
using namespace std;

int main() {
    //Write your code here
    char x;
    cin>>x;
    if(x>='a' && x<='z') cout << 0;
    else if(x>='A' && x<='Z') cout<< 1;
    else cout<<-1;
}

// when a-z , return 0 
// when A-Z , return 1
// else -1