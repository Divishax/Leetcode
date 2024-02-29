class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashTable[256]={0};
        for(int i=0;i<s.size();i++){
            hashTable[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            hashTable[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(hashTable[i] != 0){
                return false;
            }
        }
        return true;
    }
};