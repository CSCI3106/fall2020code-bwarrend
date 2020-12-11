#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) << endl
#define INFC numeric_limits<int>::max()
#define endl "\n"

#define infi 1000000000  

class Node { 
public: 
    int name; 

    vector<pair<int, int> > children; 
    Node(int name){ 
        this->name = name; 
    } 

    void add_child(int childName, int weight){ 
        pair<int, int> p; 
        p.first = childName; 
        p.second = weight; 
        children.push_back(p); 
    } 
}; 
  
vector<int> dijkstraDist(vector<Node*> g, int s, vector<int>& path){ 
    vector<int> dist(g.size()); 
    bool visited[g.size()]; 

    for (int i = 0; i < g.size(); i++) { 
        visited[i] = false; 
        path[i] = -1; 
        dist[i] = infi; 
    }

    dist[s] = 0; 
    path[s] = -1; 
    int current = s; 

    unordered_set<int> sett; 
    while (true) {  
        visited[current] = true; 
        for (int i = 0; 
			i < g[current]->children.size(); 
			i++) { 
            int v = g[current]->children[i].first; 
            if (visited[v]) continue; 
  
            sett.insert(v); 
            int alt = dist[current] + g[current]->children[i].second; 

            if (alt < dist[v]) { 
                dist[v] = alt; 
                path[v] = current; 
            } 
        } 

        sett.erase(current); 
        if (sett.empty()) 
            break; 

        int minDist = infi; 
        int index = 0; 
  
        for (int a: sett) { 
            if (dist[a] < minDist) { 
                minDist = dist[a]; 
                index = a; 
            } 
        } 
        current = index; 
    } 
    return dist; 
} 

  
int main(){ 

    int n, m, q, s;
    while(true){
        cin >> n >> m >> q >> s;
        if(n == 0) exit(0);

        vector<Node*> nodes;

        for(int i = 0; i < n; ++i){
            Node* a = new Node(i);
            nodes.push_back(a);
        }

        int u, v, w;
        for(int i = 0; i < m; ++i){
            cin >> u >> v >> w;
            nodes[u]->add_child(v, w);
        }

        vector<int> path(nodes.size());
        vector<int> dist = dijkstraDist(nodes, s, path);

        int query;
        for(int i = 0; i < q; ++i){
            cin >> query;
            if(dist[query] == infi) cout << "Impossible" << endl;
            else cout << dist[query] << endl;
        }
        
        cout << endl;

        nodes.clear();
        path.clear();
        dist.clear();
    }


    return 0;
} 