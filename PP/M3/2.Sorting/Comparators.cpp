#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y)
{
    if (x.first != y.first)
    {
        return x.first < y.first;
    }
    else
    {
        return x.second < y.second;
    }
}

int main()
{

    vector<int> v = {23, 5, 234, 6, 43, 2, 345, 34};
    vector<pair<int,int>> vec;
    for (int i = 0; i < v.size(); i++){
        vec.push_back({v[i],i});
    }

    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i].first << " ";
    }
    cout << endl;

}