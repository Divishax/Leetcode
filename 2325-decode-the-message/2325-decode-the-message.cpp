class Solution {
public:
    string decodeMessage(string key, string message) {
        // create mapping
        char start='a';
        char mapping[300]={0};

        for(auto ch:key){ //key k har ek character pe traverse krna h
            if(ch != ' ' && mapping[ch] == 0){ //char ki mapping pehle se exist na krti ho
                mapping[ch] = start;
                start++;
            }
        }

        // use mapping
        string ans;
        for(auto ch:message){
            if(ch == ' '){
                ans.push_back(' ');
            }
            else{
                char decodedChar = mapping[ch];
                ans.push_back(decodedChar);
            }
        }
        return ans;
    }
};