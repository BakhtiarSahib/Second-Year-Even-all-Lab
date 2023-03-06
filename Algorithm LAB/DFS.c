#include<stdio.h>
void DFS(int);
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10]
void main()
{
    int i,j;
    printf("Enter number of vertices:");

    scanf("%d",&n);
    //read the adjecency matrix
    printf("\nEnter adjecency matrix of the graph:");

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&G[i][j]);

    DFS(0);
}
void DFS(int i)
{
    int j;
    printf("\n%d",i);//i visited
    visited[i]=1;//visited node 1 dye declare korbo
    for(j=0; j<n; j++)
        if(!visited[j]&&G[i][j]==1)
            DFS(j);
}


