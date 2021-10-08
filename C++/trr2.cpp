#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void DFS(int u){
	int i,j,top;
	top=1;
	stack[top]=u;
	cxet[u]=0;
	while(top>0){
		int s=stack[top];
		cout<<s<<" ";
		top--;
		for(int i=1; i<=n; i++){
			if(a[s][i]==1 && cxet[i]==1){
				cxet[i]=0;
				top++;
				stack[top]=i;
				break;
			}
		}
	}
	cout<<endl;
}
void BFS(int u){
	int i,j,dau,cuoi;
	dau=cuoi=1;
	queue[cuoi]=u;
	cxet[u]=0;
	while(dau<=cuoi){
		int s=queue[dau];
		dau++;
		cout<<s<<" ";
		for(i=1; i<=n; i++){
			if(a[s][i]==1 && cxet[i]==1){
				cuoi++;
				queue[cuoi]=i;
				cxet[i]=0;
			}
		}
	}
}
void TPLT_DFS(int a[][]){
	solt=0;
	for(int i=1; i<=n; i++){
		if(chuaxet[i]==1){
			DFS(u);
			solt++;
		}
	}
	return solt;
}
int TPLT_BFS(int a[][]){
	int solt=1;
	BFS(1);
	for(int i=1; i<=n; i++){
		if(cxet[i]==1){
			BFS(i);
			solt++;
		}
	}
	return solt;
}
void T_DFS(int a[][]){
	stack <int> s;
	s.push(u);
	chuaxet[u]=1;
	while(!s.empty()){
		u=s.top();
		s.pop();
		for(int  v=1; v<=n; v++){
			if(a[u][v]==1 && chuaxet[v]==0){
				s.push(u);
				s.push(v);
				dau[c]=u;
				cuoi[c]=v;
				c++;
				chuaxet[v]=1;
				break;
			}
		}
	}
	if(c<n-1){
		cout<<"Do thi khong lien thong."<<endl;
	}
	else{
		cout<<"\nCay khung T: ";
		for(int i=1; i<c; i++){
			if(dau[i]<cuoi[i]){
				cout<<"("<<dau[i]<<", "<<cuoi[i]<<")";
			}
			else{
				cout<<"("<<cuoi[i]<<", "<<dau[i]<<")";
			}
		}
	}
}
void T_BFS(int u){
	queue <int> q;
	q.push(u);
	chuaxet[u]=1;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(int v=1; v<=n; v++){
			if(a[u][v]==1 && chuaxet[v]==0){
				q.push(v);
				dau[c]=u;
				cuoi[c]=v;
				c++;
				chuaxet[v]=1;
			}
		}
	}
	if(c<n-1){
		cout<<"Do thi khong lien thong."<<endl;
	}
	else{
		cout<<"\nCay khung T: ";
		for(int i=1; i<c; i++){
			if(dau[i]<cuoi[i]){
				cout<<"("<<dau[i]<<", "<<cuoi[i]<<")";
			}
			else {
				cout<<"("<<cuoi[i]<<", "<<dau[i]<<")";
			}
		}
	}
}
void EULER(int a[][]){
	stack <int> s;
	s.push(u); // them dinh u vao ngan xep
	int t=1;
	while(!s.empty()){ //lap den khi stack rong thi thoi
		int v=s.top(); // lay phan tu dau ngan xep
		int x=1;
		while(x<=n && a[v][x]==0) x++;
		if(x<=n){
			s.push(x);
			a[v][x]=0;
			a[x][v]=0;
		}
		else{
			CE[t]=v;
			t++;
			s.pop();
		}
	}
	for(int i=t-1; i>0; i--){
		cout<<CE[i]<<" "; //in nguoc lai
	}
}
void DIJKSTRA(int u){
	int u,v;
	cout<<"Nhap duong di tu dinh s= "; cin>>s;
	cout<<"Den diem t= "; cin>>t;
	for(int v=1; v<=n; v++){
		d[v]=a[s][v];
		p[v]=s;
		vs[v]=0;
	}
	p[s]=0; d[s]=0; vs[s]=1;
	cout<<"Duong di ngan nhat tu dinh "<<s<<"den diem "<<t<<": "<<s<<" ";
	while(!vs[t]){
		int min=2000;
		for(int v=1; v<=n; v++){
			if(!vs[v] && d[v]<min){
				u=v;
				min=d[v];
			}
		}
		cout<<u<<" ";
		vs[u]=1;
		if(!vs[t]){
			for(v=1; v<=n; v++){
				if(!vs[v] && (d[u]+a[u][v]<d[v])){
					d[v]=d[u]+a[u][v];
					p[v]=u;
				}
			}
		}
	}
	cout<<"\nDo dai duong di ngan nhat = "<<d[t];
}
void FLOYD(int a[][]){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			d[i][j]=a[i][j];
			if(d[i][j]==max) s[i][j]=0;
			else s[i][j]=j;
		}
	}
	for(int k=1; k<=n; k++){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(d[i][k]!=max && d[i][j]>(d[i][k]+d[k][j])){
					d[i][j]=d[i][k]+d[k][j];
					s[i][j]=s[i][k];
				}
			}
		}
	}
}
void PRIM(int a[][], int u){
	int k, top, min, l, t, u;
	int s[100];
	sc=0; w=0; u=1;
	for(int i=0; i<=n; i++){
		chuaxet[i]=1;
	}
	top=1;
	s[top]=u;
	chuaxet[u]=0;
	while(sc<n-1){
		min=MAX;
		for(int i=1; i<=top; i++){
			t=s[i];
			for(int j=1; j,=n; j++){
				if(chuaxet[j] && min>a[t][j]){
					min=a[t][j];
					k=t;
					l=j;
				}
			}
		}
		sc++;
		w+=min;
		T[sc][1]=k;
		T[sc][2]=1;
		chuaxet[l]=0;
		a[k][l]=MAX; a[l][k]=MAX;
		top++; s[top]=1;
	}
}
void Heap(int first, int last){
	int j, k, t1, t2, t3;
	j=first;
	while(j<=last/2){
		if(2*j<last && w[2*j+1]<w[2*j]){
			k=2*j+1;
		}
		else k=2*j;
		if(w[k]<w[j]){
			t1=dau[j]; t2=cuoi[j]; t3=w[j];
			dau[j]=dau[k]; cuoi[j]=cuoi[k]; w[j]=w[k];
			dau[k]=t1; cuoi[k]=t2; w[k]=t3;
			j=k;
		}
		else j=last;
	}
}
int Find(int i){
	int tro=i;
	while(f[tro]>0) tro=f[tro];
	return tro;
}
void Union(int i, int j){
	int x=f[i]+f[j];
	if(f[i]>f[j]){
		f[i]=j; f[i]=x;
	}
	else{
		f[j]=i; f[i]=x;
	}
	void KRUSKAL (int a[][]){
		int i, last, u, v, r1, r2, ncanh, ndinh;
		for(int i=0; i<=n; i++) f[i]=-1;
		for(int m/2; i>0; i++){
			Heap(i,m);
		}
		last=m; ncanh=0; ndinh=0; minl=0; connect =True;
		while(ndinh<n-1 && ncanh<m){
			ncanh++; u=dau[l]; v=cuoi[l];
			rl=Find(u); r2=Find(v);
			if(r1!=r2){
				ndinh++; Union(r1,r2);
				daut[ndinh]=u; cuoit[ndinh]=v;
				min+=w[l];
			}
			dau[1]=dau[last]; cuoi[l]=cuoi[last]; w[l]=w[last]; last--;
			Heap(1, last);
		}
		if(ndinh!=n-1)connect = FALSE;
	}
}

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!

return 0;
}

