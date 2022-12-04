#include<bits/stdc++.h>
using namespace std;

int main()
{
        vector<string> ans;
        int count=0;
        for(int i=0;i<sentence.size();i++)
        {
           
            if(sentence[i] == ' ')
            {
                string k;
                k = sentence.substr(count,i);
                count = i+1;
                ans.push_back(k);
            }
        }
}
