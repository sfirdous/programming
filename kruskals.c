#include<stdio.h>
typedef struct{
    char src,dest;
    int weight;
}edge;
edge graph[12] = { 
    {'a','b',5},{'a','c',3}, {'b','e',2}, {'b','c',4}, 
    {'b','d',6},{'c','d',5}, {'c','f',6}, {'d','e',8}, 
    {'d','f',6},{'e','f',3}, {'e','g',5}, {'f','g',4} 
};
int MSTvertices[10];
void sort(edge graph[],int nE){
    int i,pass;
    edge temp;
    for (pass = 1; pass <= nE-1; pass++)
    {
        for ( i = 0; i < nE-pass; i++)
        {
            if(graph[i].weight>graph[i+1].weight){
                temp = graph[i];
                graph[i] = graph[i+1];
                graph[i+1] = temp;
            }
        }
        
    }
}
    int find(int v,int nV){
        //return 1 if vertex v is in the selcted vertices list
        for (int k = 0; k < nV; k++)
        {
            if(MSTvertices[k] == v){
                return 1;
            }
        }
        return 0;
        
    }

    void kruskalMST(int nV,int nE){
        edge mst[14];
        int i = 1,j=2,k=1,count=1,mincost=0,first = 0,second = 0;
        //arrange edges in ascending order
        sort(graph,nE);
        mst[0] = graph[0]; //add first edge to MST
        MSTvertices[0] = graph[0].src;
        MSTvertices[1] = graph[0].dest;
        mincost = graph[0].weight;
        while(count<=nV-1)
        {
            first = find(graph[i].src,nV);//check if first vertex is in selected list
            second = find(graph[i].dest,nV);//check if second vertex is inn selected list
            if(!(first&&second)){
                mst[k++] = graph[i]; //add edge to MST
                count++;
                mincost = mincost + graph[i].weight;
                if(first)
                    MSTvertices[j++] = graph[i].dest;
                else
                    MSTvertices[j++] = graph[i].src;
            }
            i++; //next edge
        }
    

    //The edges minimum spanning tree are
    for(i=0;i<nV-1;i++){
        printf("%c -- %c == %d\n",mst[i].src,mst[i].dest,mst[i].weight);
    }
    printf("Minumum Cost of Spanning tree: %d",mincost);
    }


void main()
{
    int nV = 7,nE =12;
    kruskalMST(nV,nE);
}