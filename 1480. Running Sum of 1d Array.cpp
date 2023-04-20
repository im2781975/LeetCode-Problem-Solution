#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        cin >> p;
        nums.push_back(p);
    }

    vector<int> sum;
    sum.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++)
    {
        int x = sum[i-1]+nums[i];
        sum.push_back(x);
    }

    for(int i=0; i<sum.size(); i++)
    {
        cout << sum[i] << " ";
    }

}
