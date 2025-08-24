/**
* Author: Hasibul Islam
* Created on: 2025-08-18 22:20
* Short Desc: permutation considering duplicate
* IDEA: generate all permutation and having a hash to check duplicate
*/

#include <bits/stdc++.h>

using namespace std;

void permutation(string str, int index, set<string> &hash)
{
    int i;

    if (index == str.size())
    {
        hash.insert(str);
        return;
    }

    for (i = index; i < str.size(); i++)
    {
        swap(str[index], str[i]);
        permutation(str, index + 1, hash);
        swap(str[index], str[i]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    set<string> hash;
    vector<string> ans;
    
    cin >> str;
    cin.ignore();

    permutation(str, 0, hash);

    cout << hash.size() << endl;
    for (auto value: hash)
    {
        cout << value << endl;
    }
    
    return 0;
}