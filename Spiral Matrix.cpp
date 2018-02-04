#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main()
{

        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif
	int n;
	cin >> n;
	int total=n*n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
	}
	int l=n;
	int n_i=1;
	int i=0,j=0;

	while(n_i<=total)
	{
		while(i<l&&j<l)
		{
			arr[i][j]=n_i;
			j++;
			n_i++;
		}
		i++;
		j=l-1;
		while(i<l&&j<l)
		{
			arr[i][j]=n_i;
			i++;
			n_i++;
		}
		j--;
		i--;
		while(i>=n-l&&j>=n-l)
		{
			arr[i][j]=n_i;
			j--;
			n_i++;
		}
		i--;
		j++;
		while(i>n-l&&j>=n-l)
		{
			arr[i][j]=n_i;
			i--;
			n_i++;
		}
		i++;
		j++;
		l--;
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
