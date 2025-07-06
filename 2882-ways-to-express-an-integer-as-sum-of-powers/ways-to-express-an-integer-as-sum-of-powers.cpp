class Solution {
public:
    int dp[305][305];
    int mod = 1e9 + 7;

    int f(int sum, int i, int n, int x) {
        if (sum > n) return 0;
        if (sum == n) return 1;
        if (i > n) return 0;

        if (dp[sum][i] != -1)
            return dp[sum][i];

        long long power = 1;
        for (int j = 0; j < x; ++j) {
            power *= i;
            if (power > n) break;
        }

        int take = 0;
        if (sum + power <= n)
            take = f(sum + (int)power, i + 1, n, x);

        int skip = f(sum, i + 1, n, x);

        return dp[sum][i] = (take + skip) % mod;
    }

    int numberOfWays(int n, int x) {
        memset(dp, -1, sizeof(dp));
        return f(0, 1, n, x);
    }
};
