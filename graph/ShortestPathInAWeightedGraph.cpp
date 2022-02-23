#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,source;
	cin>>n>>m;
	vector<pair<int, int> > g[n+1];
	int a,b,wt;

	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>wt;
		g[a].push_back({b,wt});
		g[b].push_back({a,wt});
	}

	cin>>source;

	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
	vector<int>dis(n+1,INT_MAX);
	dis[source] = 0;
	pq.push({0,source});

	while(!pq.empty())
	{
		int distance = pq.top().first;
		int parent = pq.top().second;
		pq.pop();

		for(auto it: g[parent])
		{
			int next = it.first;
			int nextDis = it.second;
			if(dis[next]>distance + nextDis)
			{
				dis[next] = distance + nextDis;
				pq.push({dis[next], next});
			}
			
		}
	}

	cout<<"The distance from source to "<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" is: "<<dis[i]<<endl;
	}
}