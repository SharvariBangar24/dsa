class Solution {
public:
    int countBeautifulPairs(vector<int>& nums)
    {
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int firstDigit = nums[i];

            while (firstDigit >= 10)
            {
                firstDigit = firstDigit / 10;
            }

            for (int j = i + 1; j < nums.size(); j++)
            {
                int lastDigit = nums[j] % 10;
                if (gcd(firstDigit, lastDigit) == 1)
                {
                    count++;
                }
            }
        }

        return count;
    }
};