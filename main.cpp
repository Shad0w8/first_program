#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main()
{
    map <char, int> freq;
    string s;
    getline(cin, s);
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        freq[c]++;
    }

    map<char ,int>::iterator itr;
    for(itr=freq.begin();itr!=freq.end();itr++)
    {
        cout<<(itr->first)<<" : "<<(itr->second)<<"\n";
    }
}
