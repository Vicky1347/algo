

    vector<int> parent;
    vector<int> Rank;
    
    int find(int a)
    {
        //base case
        if(parent[a]==a)
        return a;
        
        return parent[a]=find(parent[a]);
    }
    
    void unionset (int a,int b)
    {
        int parent_a=find(a);
        int parent_b=find(b);
        
        if (Rank[parent_a] > Rank[parent_b])
        {
            parent[parent_b] = parent_a;
        }
        else if (Rank[parent_b] > Rank[parent_a])
        {
            parent[parent_a] = parent_b;
        }
        else
        {
            parent[parent_b] = parent_a;
            Rank[parent_a]++;
        }
    }
