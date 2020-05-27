/*
Test Case 
7
10
1 2 6
1 3 5
1 4 5
4 3 -2
3 2 -2
2 5 -1
3 5 1
4 6 -1
6 7 3
5 7 3
1       */
#include<bits/stdc++.h>
#define INF 1e9
using namespace std;
class Edge{
    public:
    int src;
    int dest;
    int weight;
};
class Graph{
    public:
    int v,e;
    Edge *edge;
    Graph(int v,int e){
        this->v=v;
        this->e=e;
        edge=new Edge[e];
    }
    void addEdge(int u,int v,int w,int count){
        edge[count].src=u;
        edge[count].dest=v;
        edge[count].weight=w;
    }
    void BellmanFord(int src) {
        int distance[v];
        for(int i=0;i<v;i++){
            if(i==src) {
                distance[i] = 0;
            }else {
                distance[i] = INF;
            }
        }        
        //Relaxation should be done v-1 times
	//For each single time relaxation cover all the edges . All the edges will automatically covered and relaxed
        for(int i=1;i<=v-1;i++){
            for(int j=0;j<e;j++){
                int src = edge[j].src;
                int dest = edge[j].dest;
                int wt = edge[j].weight;
                //Relaxation check
                if(distance[src]!=INF && distance[src] + wt < distance[dest]){
                    distance[dest]=distance[src] + wt;
                }
            }
        }
        //Check for negative edge cycle
            for(int j=0;j<e;j++){
                int src = edge[j].src;
                int dest = edge[j].dest;
                int wt = edge[j].weight;
 
                //Relaxation
                if(distance[src]!=INF && distance[src] + wt < distance[dest]){
                    cout<<"Graph has negative cycle";
                    return;
                }
            }
            for(int i=0;i<v;i++) {
                cout<<i<<"- "<<distance[i]<<endl;
            }
            return;
    }
}; 
 
int main()
{
    int v,e;
    cin>>v>>e;
    Graph g(v,e);
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g.addEdge(u,v,w,i);
    }
    g.BellmanFord(0); 
}