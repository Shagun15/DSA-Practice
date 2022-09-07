class Solution {
public:
    string kthDistinct(vector<string>& s, int k) {
        
        unordered_map<string,int>m;
        int i,cnt=0;
        int n=s.size();
        
        for(i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(m[s[i]]==1)
            {
                cnt++;
                if(k==cnt)
                {
                    return s[i];
                }
        }
        }
        return "";
    }
};
