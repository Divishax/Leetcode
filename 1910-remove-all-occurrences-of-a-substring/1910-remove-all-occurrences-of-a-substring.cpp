class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.find(part) != string::npos){ //npos=no position
            // if inside loop,it means part exists in string
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};