#include <bits/stdc++.h>
#include <fstream>
#define ll long long
#define pb push_back
#define maxn 1000005
#define V 10
using namespace std;
bool readFile(int graph[V][V], int &n){
	ifstream read("DT.INP");
	if(read.is_open()){
		read>>n;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				read>>graph[i][j];
			}
		}
		read.close();
		return true;
	}
	return false;
}
bool writeFile(int graph[V][V], int n, int value){
	ofstream write("DT.OUT");
	if(write.is_open()){
		write<<value<<endl;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				write<<graph[i][j]<<" ";
			}
			write<<endl;
		}
		return true;
	}
	return false;
}
bool BFS(int rGraph[V][V], int s, int t, int n, int parent[]){
	bool visited[V];
	memset(visited, 0, sizeof(visited));
	queue <int> q;
	q.push(s);
	visited[s]=true;
	parent[s]=-1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int v=1; v<=n; v++){
			if(visited[v]==false && rGraph[u][v]>0){
				q.push(v);
				parent[v]=u;
				visited[v]=true;
			}
		}
	}
	return (visited[t]==true);
}
int Ford_Fulkerson(int graph[V][V], int s, int t){
	int n=t, u, v;
	int rGraph[V][V];
	for(u=1; u<=n; u++){
		for(v=1; v<=n; v++){
			rGraph[u][v]=graph[u][v];
		}
	}
	int parent[V];
	int max_flow=0;
	while(BFS(rGraph, s, t, n, parent)){
		int path_flow=INT_MAX;
		for(v=t; v!=s; v=parent[v]){
			u=parent[v];
			path_flow=min(path_flow, rGraph[u][v]);
		}
		for(v=t; v!=s; v=parent[v]){
			u=parent[v];
			rGraph[u][v]-=path_flow;
			rGraph[v][u]+=path_flow;
		}
		max_flow+=path_flow;
	}
	return max_flow;
}

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int n, graph[V][V];
	if(!readFile(graph,n)){
		cout<<"Unable to read file.";
	}
	int val=Ford_Fulkerson(graph,1,n);
	if(!writeFile(graph,n,val)){
		cout<<"Unable to write file.";
	}
return 0;
}

