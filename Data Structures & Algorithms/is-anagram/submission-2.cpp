class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
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
           hash1[t[j]-'a']--;
        }
        for(int k=0;k<s.size();k++)
        {
            if(hash1[s[k]-'a']!=0)
            {
                return false;
            }
        }

        return true;

    }
};
