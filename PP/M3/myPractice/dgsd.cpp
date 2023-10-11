#include <bits/stdc++.h>

using namespace std;

struct triplet
{

    int val;

    int freq;

    int indx;
};

bool cmp(triplet t1, triplet t2)
{

    if (t1.freq != t2.freq)
    {

        return t1.freq < t2.freq;
    }

    if (t1.val != t2.val)
    {

        return t1.val < t2.val;
    }

    if (t1.indx != t2.indx)
    {

        return t1.indx < t2.indx;
    }
}

int main()
{

    // your code goes here

    int t;

    cin >> t;

    int i = 0;

    while (i < t)
    {

        int n;

        cin >> n;

        vector<int> v(n);

        vector<int> freq(n + 1, 0);

        for (int j = 0; j < n - 1; j++)
        {

            v.push_back(v[i]);
        }

        for (int p = 0; p < n; p++)
        {

            freq[v[i]]++;
        }

        vector<triplet> vr;

        for (int i = 0; i < n; i++)
        {

            triplet t;

            t.val = v[i];

            t.freq = freq[v[i]];

            t.indx = i;

            vr.push_back(t);
        }

        sort(v.begin(), v.end(), cmp);
    }

    return 0;
}