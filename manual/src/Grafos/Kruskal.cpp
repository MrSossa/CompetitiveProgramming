const int MAX = 1e6-1;
int root[MAX];
const int nodes = 4, edges = 5;
pair <long long, pair<int, int> > p[MAX];

int parent(int a)                                                       //Buscar el padre del nodo
{
    while(root[a] != a)
    {
        root[a] = root[root[a]];
        a = root[a];
    }
    return a;
}

void union_find(int a, int b)                                         //Verificar si dos nodos tienen una misma union
{
    int d = parent(a);
    int e = parent(b);
    root[d] = root[e];
}

long long kruskal()
{
    int a, b;
    long long cost, minCost = 0;
    for(int i = 0 ; i < edges ; ++i)
    {
        a = p[i].second.first;
        b = p[i].second.second;
        cost = p[i].first;
        if(parent(a) != parent(b))                                  //Tener en cuenta si no genera un ciclo
        {
            minCost += cost;
            union_find(a, b);
        }
    }
    return minCost;
}