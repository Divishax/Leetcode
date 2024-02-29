class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0;
        int h=s.size()-1;
        while(l<h){
            if(isalpha(s[l]) && isalpha(s[h])){ //isalpha is C++ function
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(!isalpha(s[l])){ // s[l] is not alpha
                l++;
            }
            else{
                h--; // s[h] is not alpha
            }
        }
        return s;
    }
};