class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch); //vowels can appear both in lower & upper case
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    
    string reverseVowels(string s) {
        int l=0;
        int h=s.size()-1;
        while(l<h){
            if(isVowel(s[l]) && isVowel(s[h])){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(isVowel(s[l]) == 0){
                l++; // no vowel at s[l]
            }
            else{ 
                h--; // no vowel at s[h]
            }
        }
        return s;
    }
};