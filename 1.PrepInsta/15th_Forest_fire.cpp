/* 
Roco is an island near Africa which is very prone to forest fire. Forest fire is such that it destroys the complete forest. 
Not a single tree is left.This island has been cursed by God , and the curse is that whenever a tree catches fire, 
it passes the fire to all its adjacent tree in all 8 directions,North, South, East, West, North-East, North-West, South-East, and South-West.
And it is given that the fire is spreading every minute in the given manner, i.e every tree is passing fire to its adjacent tree.
Suppose that the forest layout is as follows where T denotes tree and W denotes water.

W W T W W
W W T T W
W T T T W
T T W W T
W W W T W

If suppose the tree that catches the fire is at (3,3), then the fire from (3,3) will be passed on to (2,3), (3,4), (3,2), (4,2), (2,4), which will happen in the second minute.

The tree in the fire in the first minute is highlighted below.
W W T W W
W W T T W
W T T' T W
T T W W T
W W W T W
The trees in the fire in the second minute are highlighted below.
W W T W W
W W T' T' W
W T' T' T' W
T T' W W T
W W W T W
The trees in the fire in the third minute are highlighted below.
W W T' W W
W W T' T' W
W T' T' T' W
T' T' W W T'
W W W T W
The trees in the fire in the fourth minute are highlighted below.
W W T' W W
W W T' T' W
W T' T' T' W
T' T' W W T'
W W W T' W
From the above forest layout, you can see the whole forest on fire in the fourth minute.

Your task is that given the location of the first tree that catches fire, 
determine how long would it take for the entire forest to be on fire. 
You may assume that the lay out of the forest is such that the whole forest will catch fire for sure and that there will be at least one tree in the forest

Input Format:
First line contains two integers, M, N, space separated, giving the size of the forest in terms of the number of rows and columns respectively.
The next line contains two integers X,Y, space separated, giving the coordinates of the first tree that catches the fire.
The next M lines, where ith line containing N characters each of which is either T or W, giving the position of the Tree and Water in the  ith row of the forest.

Output Format:
Single integer indicating the number of minutes taken for the entire forest to catch fire

Constrains:
3 ≤ M ≤ 20
3 ≤ N ≤ 20

Sample Input 1:
3 3
1 3
W T T
T W W
W T T
Sample Output 1:
5

Explanation:
In the first minute, tree at (1,3) catches fire,
In the second minute,tree at (1,2) catches fire,
In the third minute,the tree at (2,1) catches fire,
In the fourth minute tree at (3,2) catches fire and 
In the fifth minute the last tree at (3,3) catches fire.

Sample Input 2:
6 6
1 6
W T T T T T
T W W W W W
W T T T T T
W W W W W T
T T T T T T
T W W W W W

Sample Output 2:
16

 */
#include<bits/stdc++.h>
using namespace std;
int m,n,c=0;
int t[21][21];

bool isvalid(int x,int y){
    if((x>=1 && x<=m) && (y>=1 && y<=n)) return true;
    return false;
}
int ap[] = {1,1,0,-1,-1,-1,0,1};
int bp[] = {0,1,1,0,1,-1,-1,-1};

void fcount(int r , int s){
    queue<pair<int,int>> q;
    int op,flag,x,y;
    q.push(make_pair(r,s));
    while(!q.empty()){
        op = q.size();
        for(int i=0; i<op; i++){
            tie(x,y) = q.front();
            q.pop();
            t[x][y] = -1;
            for(int p=0; p<8;p++){
                if(isvalid(x+ap[p], y+bp[p]) && t[x+ap[p]][y+bp[p]] == 1 ){
                    t[x+ap[p]][y+bp[p]] = -1;
                    q.push(make_pair(x+ap[p] , y+bp[p]));
                }
            }
        }
        c++;
    }
    
}


int main(int argc , char const *argv[]){
    int x,y,i,j;
    char ch;
    cin>>m>>n;
    cin>>x>>y;
    for( i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            cin>>ch;
            if(ch=='T') t[i][j] =1;
        }
    }
    fcount(x,y);
    cout<<c<<'\n';
    return 0;
}
