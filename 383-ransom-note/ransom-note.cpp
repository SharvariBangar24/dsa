class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        map<char, int> mp;

        //  Count letters in magazine
        for(int i = 0; i < magazine.size(); i++)
        {
            mp[magazine[i]]++;
        }

        // Check ransomNote letters
        for(int j = 0; j < ransomNote.size(); j++)
        {
            if(mp[ransomNote[j]] == 0)
            {
                return false;
            }

            mp[ransomNote[j]]--;
        }

        return true;
    }
};