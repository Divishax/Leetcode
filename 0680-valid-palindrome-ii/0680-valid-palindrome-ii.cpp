class Solution {
public:
    bool checkPalindrome(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1; //last index
        while(i<j){
            if(s[i]==s[j]){ //equal h toh iterate
                i++;
                j--;
            }
            else{
                //not equal
                //1 removal allowed
                //check palindrome for remaining string after removal
                
                //ith character remove
                bool ans1 = checkPalindrome(s,i+1,j);
                //jth character remove
                bool ans2 = checkPalindrome(s,i,j-1);
                return ans1 || ans2;
            }
        }
        //agr yha tk pahonche ho toh valid palindrome h
        return true;
    }
};