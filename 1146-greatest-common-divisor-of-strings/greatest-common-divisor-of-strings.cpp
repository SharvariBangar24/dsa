class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        if(str1 + str2 != str2 + str1)  
        //abcabc == abcabc  but racecar != carrace
        return "";

    int total_common= gcd(str1.length() , str2.length());

    //str1.substr(starting_index, number_of_characters)
    return str1.substr(0, total_common);
    }
};