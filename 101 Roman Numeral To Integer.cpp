
int romanToInt(string s)
{
    unordered_map<char, int> d = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    char last = 'M';
    int ans = 0;

    for (char i : s)
    {
        if (d[last] >= d[i])
        {
            ans += d[i];
        }
        else
        {
            ans += d[i] - 2 * d[last];
        }
        last = i;
    }
    return ans;
}
