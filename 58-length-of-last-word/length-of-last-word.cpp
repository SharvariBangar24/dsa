class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int word_len = 0; 
        // since we want it to start from the end ..we will follow an ulta loop 
        int i = s.length() - 1;

        while(i >= 0 && s[i] == ' ')
        {
            i-- ;
        }
        while(i>= 0 && s[i] != ' ')
        {
            word_len += 1;
            i--;
        }
    return word_len;
    }
};