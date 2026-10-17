
class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) 
    {
        map<string, int> freq;
        int maxi = 0;

        for (int i = 0; i <= s.length() - minSize; i++)
        {
            map<char, int> mp;

            for (int j = i; j < i + minSize; j++)
            {
                mp[s[j]]++;
            }

            if (mp.size() <= maxLetters)
            {
                string sub = s.substr(i, minSize);
                freq[sub]++;
            }
        }

        for (auto it : freq)
        {
            maxi = max(maxi, it.second);
        }

        return maxi;
    }
};
