
int fact(int x)
{
    int ans = 1;
    while (x)
    {
        ans*=x;
        x--;
    }
    return ans;

}

string kthPermutation(int nn, int k) {
    int n=nn;
    vector<int>a(n+1,0);
    string aa;

    while (n)
    {
        int xx = fact(n-1);
        n--;

        for (int i=1;i<=nn;i++)
        {
            if (a[i])
                continue;
            if (xx>=k)
            {
                aa+=to_string(i);
                a[i] = 1;
                break;
            }
            else
            {
                k-=xx;
            }
        }

    }
    return aa;

}
