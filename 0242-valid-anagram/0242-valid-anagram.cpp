class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int> lookup;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            lookup[c]++;
        }
        for(int i=0;i<t.length();i++)
        {
            char c=t[i];
            lookup[c]--;
        }
        for(auto it:lookup)
        {
            if(it.second==0)
                c++;
        }        
        if(c==lookup.size())
            return true;
        else
            return false;
    }
};