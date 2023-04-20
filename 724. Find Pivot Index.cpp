#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, x=-1;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        cin >> p;
        nums.push_back(p);
    }

    //vector<int> sum;
    //sum.push_back(nums[0]);
    int leftsum = 0,sum = 0;
    for(int i=0; i<nums.size(); i++)
    {
        sum = sum + nums[i];
    }
    //cout << sum << endl;
    for(int i=0; i<nums.size(); i++)
    {
        if(leftsum == sum-leftsum-nums[i]){
            x = i;
            break;
        }
        leftsum = leftsum+nums[i];
    }
    cout << x << endl;

}

