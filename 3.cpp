#include<bits/stdc++.h>
using namespace std;


int digits_sum(int n)
{
    int sum = 0;
    while (n) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
  
void sortarrray_digitsum(int a[], int n)
{
    
    vector<pair<int,int> >v;
    for (int i = 0; i < n; i++) {
        v.push_back(make_pair(digits_sum(a[i]), a[i]));
    }
    
    sort(v.begin(), v.end());
  
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << " ";
      }
}

int main()
{
  int n;
  cin>>n;
  int a[n];

  for(int i=0;i<n;i++)
  {

     cin>>a[i];
   }
   
   sortarrray_digitsum(a, n);
   return 0;
}
