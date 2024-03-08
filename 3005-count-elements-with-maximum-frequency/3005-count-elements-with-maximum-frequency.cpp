class Solution {
public:
    int maxFrequencyElements(vector<int>& a) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int> frequency(101,0);
        for(int i=0;i<a.size();i++)frequency[a[i]]++;
        int maxFreq=0,ans=0;
        for(int i=1;i<101;i++)maxFreq=max(maxFreq,frequency[i]);
        for(int i=1;i<101;i++)if(frequency[i]==maxFreq)ans+=frequency[i];
        return ans;

    }
};