int MAX = 1000000;
vector<int> desc[MAX]; // Inicializado arreglo
vector<vector<int>> g(MAX);
int cont = 1;
int DFS_PA (int node){
    desc[node] = ++cont;
    int menor = cont;
    for(auto u : g[node]){
        if desc[u] = 0:
            int min_m = DFS_PA(u);
            if(min_m < menor)
                menor = min_m;
            if (min_m >= desc[node])
                // n es un punto de articulacion
                cout<<n<<" ";
        else if(desc[u] < menor)
            menor = desc[u];
    }
    return menor;
}