#include<iostream>
#include<stack>
#include<vector>
#include<deque>

using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }    
    deque<int> q(k);
    int i;
    for(i=0;i<k;i++)
    {
        while((!q.empty())&&arr[i]>=arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    for(;i<n;i++){
    cout<<arr[q.front()]<<" ";
    while((!q.empty())&&(q.front()<=i-k))
    {
        q.pop_front();
    }
    while((!q.empty())&&(arr[i]>=arr[q.back()]))
    {
        q.pop_back();
    }
    q.push_back(i);
   
}
cout<<arr[q.front()];
}
