#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  int N;
  cin>>N;
  for(int i=0;i<N;i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  int key;
  cin>>key;
  int start= 0;
  int end = v.size()-1;
  while(start<=end)
  {
    int mid = (start) + (end-start)/2;
    if(v[mid] == key)
    {
      return mid;
    }
    else if(v[mid] > key)
    {
      end = mid-1;
    }
    else
    {
      start = mid+1;
    }
  }
  return 0;
    
}
  
