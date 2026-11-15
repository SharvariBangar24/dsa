
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        //gpt Sol 
        const long long MOD = 1000000007;

        long long even = 1, odd = 0;
        long long ans = 0;
        int prefix = 0;

        for (int x : arr) {
            prefix = (prefix + x) % 2;

            if (prefix == 1) {
                ans = (ans + even) % MOD;
                odd++;
            }
            else {
                ans = (ans + odd) % MOD;
                even++;
            }
        }

        return ans;
    }
};


/***
class Solution {
public:
    int numOfSubarrays(vector<int>& arr)
    {
        int n = arr.size();
        long long ans = 0;

        for(int i = 0; i < n; i++) 
        {
            int sum = 0;

            for(int j = i; j < n; j++) 
            {
                sum += arr[j];

                if(sum % 2 != 0) {
                    ans++;
                }
            }
        }

        return ans % 1000000007;
    }
};
***/