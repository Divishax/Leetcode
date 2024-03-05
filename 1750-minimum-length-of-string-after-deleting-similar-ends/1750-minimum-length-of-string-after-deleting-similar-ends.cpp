class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        int prefPtr = 0;
        int suffPtr = n-1;

        while(s[prefPtr] == s[suffPtr] && prefPtr<suffPtr){

            while((prefPtr+1)<n && s[prefPtr]==s[prefPtr+1])
                prefPtr++;
            while((suffPtr-1) >=0 && s[suffPtr] == s[suffPtr-1])
                suffPtr--;
            
            if(prefPtr>=suffPtr){
                return 0;
            }
            else{
                prefPtr++;
                suffPtr--;
            }
        }

        return suffPtr-prefPtr+1;
    }
};