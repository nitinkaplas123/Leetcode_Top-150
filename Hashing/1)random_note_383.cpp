Solution 1-:
Steps-:
1)Making map 

Code-: Time->O(N) Space->O(N)
bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.length();
        int n2=magazine.length();
        unordered_map<char,int>m;
        for(int i=0;i<n2;i++)
        {
            m[magazine[i]]++;
        }

        for(int i=0;i<n1;i++)
        {
            if(m.find(ransomNote[i])!=m.end())
            {
                m[ransomNote[i]]--;
                if(m[ransomNote[i]]==0)
                m.erase(ransomNote[i]);
            }
            else
            return false;
        }
        return true;
}



Solution 2-:
Steps-:
1)As its small charcters we can use 26 size array.

Code-:
bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.length();
        int n2=magazine.length();
        int count[26]={0};
        for(int i=0;i<n2;i++)
        {
           count[magazine[i]-'a']++;
        }

        for(int i=0;i<n1;i++)
        {
            if(count[ransomNote[i]-'a']!=0)
            count[ransomNote[i]-'a']--;
            else
            return false;
        }
        return true;
}