// #include <bits/stdc++.h>
 
// using namespace std;
 
// int main()
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(NULL);

 
// 	int n;
// 	cin >> n;
// 	// n = 5 ;
// 	long long sum = 0;

// 	// Bit Manipulation

// 	// vector<long long> arr(n,0);
// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	cin >> arr[i];
// 	// 	sum = sum + arr[i];
// 	// }
 
// 	// long long  no_of_combination = 1 << n , grp1 , grp2 , diff = INT32_MAX;
// 	// for (int comb = 1 ; comb < no_of_combination; comb++)
// 	// {
// 	// 	grp1 = sum;
// 	// 	for (int i = 0; i < n; i++)
// 	// 	{
// 	// 		if ((comb & (1 << i)) != 0)
// 	// 		{
// 	// 			grp1 = grp1 -  arr[i];
				
// 	// 		}
// 	// 	}
// 	// 	grp2 = sum - grp1 ;
// 	// 	diff = min(diff,abs(grp1-grp2));
// 	// }
// 	// cout << diff << endl ;
 
 
// 	return 0;
// }
#include <bits/stdc++.h>

using namespace std;
#define int long long
void RecursiveSubset(int ind, int arr[], int size, int grp1, int sum, vector<int>& diff)
{
	if (ind == size)
	{
		if(grp1 != sum){
			int grp2 = sum - grp1;
			diff.push_back(abs(grp2 - grp1));

		}
		return ;
	}
	// pick condition
	grp1 = grp1 + arr[ind];
	RecursiveSubset(ind + 1, arr, size, grp1, sum, diff);
	grp1 = grp1 - arr[ind];
	// not pick condition
	RecursiveSubset(ind + 1, arr, size, grp1, sum, diff);
}
main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	// n = 10;
	long long sum = 0, mini = INT32_MAX;
	long long arr[n] ;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}


	vector<int>diff ;
	RecursiveSubset(0, arr, n, 0, sum, diff) ;
	for(int i : diff){
		mini = min(mini,i);
	}
	cout << mini << endl ;
	return 0;
}