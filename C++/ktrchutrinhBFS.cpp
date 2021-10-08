#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector <int> ke[1003];
int vs[1003];
int V, E;
// Chu trình là xu?t phát t? 1 di?m và t?i 1 di?m có th? quay l?i dc
// VD 1 3 2 1



bool DFS(int u, vector<int> parent)
{
	//cout << u << " ";
	vs[u] = 1;
	for (int i = 0; i < ke[u].size(); i++)
	{
		int v = ke[u][i];
		if (vs[v] == 0)
		{
			parent[v] = u;
			DFS(v,parent);
		}
		else if (parent[u] != v)
			return true;
	}
	return false;
	
}

bool Cycle()
{
	for (int i = 0; i < 1003; i++)
		vs[i] = 0;
	
	for (int i = 1; i <= V; i++)
	{
		vector <int> parent(1003, -1);

		if (vs[i] == 0 && DFS(i,parent) == true)
			return true;
	}
	return false;
}

void process()
{
	cin >> V >> E;
	for (int i = 0; i < 1003; i++)
	{
		ke[i].clear();
		vs[i] = 0;
	}
	for (int i = 1; i <= E; i++)
	{
		int u, v;	cin >> u >> v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	
	if (Cycle())
		cout << "YES";
	else
		cout << "NO";

	cout << endl;
}

int main()
{
	int T;	cin >> T;
	while (T--)
	{
		process();
	}


	return 0;
}
