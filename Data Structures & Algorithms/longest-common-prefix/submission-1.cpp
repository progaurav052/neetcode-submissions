class Solution {
public:
    int get_longest_common_prefix_index(string a, string b)
    {
        int i;
        for(i=0;i<min(a.length(),b.length());i++)
        {
            if(a[i]!=b[i])
            {
                break;
            }
        }
        return i-1;

    }
    string longestCommonPrefix(vector<string>& strs) {
        // will change over time 
        string res=strs[0];
        int index=-1;
        for(int i=1;i<strs.size();i++)
        {
            index=get_longest_common_prefix_index(strs[i],res);
            if(index>=0)
            {
                res=res.substr(0,index+1);
            }
            else if(index==-1)
            {
                res="";
                break;
            }
        }
        return res;
        
    }
};