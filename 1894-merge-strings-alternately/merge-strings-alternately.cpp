class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string merged_string = "";
        int i = 0 ;
        //to traverse through both the words
        while(i < word1.length() && i < word2.length())
        {
            merged_string += word1[i];
            merged_string += word2[i];
            i++;
        }

        if( word1.length() > word2.length())
        {
            //cuz even if word 1 is bigger than word 2 ..i shouldnt go out of limits 
            while(i < word1.length())
            {
                 merged_string += word1[i];
                 i++;
            }
        }
        else
        {
            while(i < word2.length())
            {
                 merged_string += word2[i];
                 i++;
            }
        }
    return merged_string;
    }
};


