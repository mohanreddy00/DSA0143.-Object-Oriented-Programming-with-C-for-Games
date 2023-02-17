#include<bits/stdc++.h>
using namespace std;
int main(){
// s1 is the string which is converted to uppercase
string s1 = "abcde";
// using transform() function and ::toupper in STL
transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
cout<<s1<<endl;
// s2 is the string which is converted to lowercase
string s2 = "WXYZ";
// using transform() function and ::tolower in STL
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
cout<<s2<<endl;
return 0;
}
