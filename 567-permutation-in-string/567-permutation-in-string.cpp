class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1_size=s1.size();
        int s2_size=s2.size();
        if(s1_size>s2_size)return false;
        vector<int>big(26,0);
        vector<int>small(26,0);
        for(int i=0;i<s1.size();i++)
        {
            small[s1[i]-'a']++;
            big[s2[i]-'a']++;
        }
        if(big==small)return true;
        for(int i=1;i<=s2_size-s1_size;i++)
        {
            big[s2[i-1]-'a']--;
            big[s2[i+s1_size-1]-'a']++;
            if(big==small)
                return true;
        }
        return false;
    }
};