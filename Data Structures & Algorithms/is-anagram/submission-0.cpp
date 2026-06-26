class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()==0 && t.size()==0)
        {
            return true;
        }
        if(s.size()==0 || t.size()==0)
        {
            return false;
        }

        vector<int>hash1(26,0);
        vector<int>hash2(26.0);

        for(int i=0;i<s.size();i++)
        {
           hash1[s[i]-'a']++;
        }
        for(int j=0;j<t.size();j++)
        {
           hash2[t[j]-'a']++;
        }
        if(hash1==hash2)
        {
            return true;

        }
        return false;

    }
};
