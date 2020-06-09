#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long maxpair(vector<long> arr)
{
	sort(arr.begin(),arr.end());
	return (arr[arr.size()-1]*arr[arr.size()-2]);
}


int main()
{
 	int n,a;
	vector<long> arr;

	cin>>n;
	for(int i=0;i<n;i++)
		{
			cin>>a;
			arr.push_back(a);
		}

	cout<<maxpair(arr);
	return 0;
}