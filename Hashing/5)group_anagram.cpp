Code-:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        int n=strs.size();

        for(int i=0;i<n;i++)
        {
            string sortedStr=strs[i];
            sort(sortedStr.begin(),sortedStr.end());
            m[sortedStr].push_back(strs[i]);
        }
        
        vector<string>v1;
        for(auto x:m)
        {
            for(auto y:x.second)
            {
               v1.push_back(y);
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;
    }