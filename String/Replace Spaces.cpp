#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string result;
    for (char c : str) {
        if (c == ' ') {
            result += "@40";
        } else {
            result += c;
        }
    }
    return result;
}
