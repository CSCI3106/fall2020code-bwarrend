#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cout << "DEBUG: " << (#x) << " = " << (x) << endl
#define co cout<<
#define endl <<"\n"
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define getI(a) int a; cin >> a
#define getII(a, b) int a,b; cin>>a>>b
#define getIII(a,b,c) int a,b,c; cin>>a>>b>>c
#define F(i,L,R) for (int i = L; i < R; ++i)
#define C2I(ch) ch -= 48
#define infi 1000000000



class Node { 
public: 
    int name;
    int jumps;
    vector<pair<int, int> > children; 
    
    Node(int name, int jumps){ 
        this->name = name;
        this->jumps = jumps;
    } 

    void add_child(int childName){ 
        int weight = 1;
        pair<int, int> p;
        p.first = childName;
        p.second = weight;
        children.push_back(p);
    } 
}; 
  
vector<int> dijkstraDist(vector<Node*> g, int s, vector<int>& path, int query){ 
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
                if(v == query){
                    break;
                }
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

    vector<Node*> nodes;
    getII(rows, columns);
    
    F(i, 0, rows){
        string line; cin >> line;
        F(j, 0, columns){
            Node* a = new Node(i*j, C2I(line[j]));
            nodes.pb(a);
        }
    }

    F(r, 0, rows){
        F(c, 0, columns){
            // co "(" << r << ", " << c << "): " << nodes[columns*r+c]->name endl;
            
            int j = nodes[columns*r+c]->jumps;
            //UP
            if(r - j >= 0){                
                nodes[columns*r+c]->add_child(columns*(r-j)+c);
            }
            //LEFT
            if(c - j >= 0){
                nodes[columns*r+c]->add_child(columns*r+c-j);
            }
            //DOWN
            if(r + j <= rows-1){
                nodes[columns*r+c]->add_child(columns*(r+j)+c);
            }
            //RIGHT
            if(c + j <= columns-1){
                nodes[columns*r+c]->add_child(columns*r+c+j);
            }
        }
    }   
        int query = nodes.size()-1;

        vector<int> path(nodes.size());
        vector<int> dist = dijkstraDist(nodes, 0, path, query);
    
        

        if(dist[query] == infi) cout << "-1" endl;
        else cout << dist[query] endl;


    return 0;
} 