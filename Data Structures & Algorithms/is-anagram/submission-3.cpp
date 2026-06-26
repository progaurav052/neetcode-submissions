class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>char_set1(256,0);
        vector<int>char_set2(256,0);

        if(s.length() != t.length())
        {
            return false;
        }

        else
        {
            for(int i=0;i<s.length();i++)
            {
                char_set1[s[i]]++;
                char_set2[t[i]]++;

            }

            if(char_set1 == char_set2)
            {
                return true;
            }
        }
        return false;
        

    }
};
