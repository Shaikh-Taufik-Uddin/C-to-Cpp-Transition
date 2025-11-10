// Two Sum : Check if a pair with given sum exists in Array

// brute force
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr={2,6,5,8,11};
	int target = 15;
	int n= arr.size();
	int i =0;
	bool flag=false;
	while(i<n-1)
	{
		for(int j=i+1;j<n;j++)
		{
			if(i!=j && arr[i]+arr[j]==target)
			{
				flag=true;
				cout<<"YES"<<endl;
				cout<< "["<<i<<","<<j<<"]";
			}
		}
		i++;
	}
	if(flag==false)
	{
		cout<< "NO"<<endl;
		cout<< "[-1,-1]";
	}
	return 0;
}
*/
// optimized  version 1 ;
/*
#include<iostream>
#include<vector>
#include<map>
using namespace std ;
int main()
{
	vector<int>arr={2,6,5,8,11};
	int target = 14;
	int n= arr.size();
	map<int,int>mpp;
	int idx;
	for(auto it :arr)
	{
		mpp[it]++;

	}
	for(int i=0;i<n;i++)
	{
		int r=target-arr[i];
		if(r!=arr[i] && mpp.find(r)!=mpp.end())
		{
			cout<<"yes";
			return 0;
		}
		else if(r==arr[i]&&mpp[arr[i]]>1)
		{
			cout << "yes";
			return 0;
		}
	}

	return 0;
}
*/
// optimized version 2
// wont work if there are duplicate numbers
/*
#include<iostream>
#include<vector>
#include<map>
using namespace std ;
int main()
{
	vector<int>arr={2,6,5,8,11};
	int target = 14;
	int n= arr.size();
	map<int,int>mpp;
	int idx;
	for(int i=0;i<n;i++)
	{
		mpp[arr[i]]=i;

	}
	for(int i=0;i<n;i++)
	{
		int r=target-arr[i];
		if(mpp.find(r)!=mpp.end())
		{
			cout<<"yes"<<endl<<i<<" "<<mpp[r];
			break;
		}
	}

	return 0;
}
*/
// fully working better version
/*
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	vector<int> arr = {2, 6, 5, 8, 11};
	int target = 14;
	int n = arr.size();

	map<int, int> mpp; // value -> index

	for (int i = 0; i < n; i++) // if the needed number is in map ?
	{
		int r = target - arr[i];
		if (mpp.find(r) != mpp.end())
		{
			cout << "yes" << endl;
			cout << i << " " << mpp[r]; // print the indices
			return 0;
		}
		mpp[arr[i]] = i; // if not enter the current value with its index
	}

	cout << "no";
	return 0;
} */

// best method (greedy approach)

// ONLY for SORTED arrays

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	vector<int> arr = {2, 5, 6, 8, 11};
	int target = 14;
	int n = arr.size();
	int i=0,j=n-1;
	while (i<j)
	{
		if(arr[i]+arr[j]==target)
		{
			cout<<"YES "<<i<<" "<<j;
			return 0;
		}
		else if(arr[i]+arr[j]>target)
		{
			j--;
		}
		else if(arr[i]+arr[j]<target)
		{
			i++;
		}
	}
	cout<<"NO"<< "(-1,-1)";

	return 0;
}