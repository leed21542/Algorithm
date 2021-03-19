//
//  main.cpp
//  음료수 얼려 먹기
//
//  Created by Sang Ho Yoo on 2020/10/06.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int graph[4][5];
bool visited[4][5];
int N,M;

void dfs(int x, int y){
    if(x < 0 || x >= N || y < 0 || y >= M)return; //범위 벗어나면 return
    
    if(graph[x][y]==0 && visited[x][y] == false){ //1이 아닌 곳까지만 간다.
        visited[x][y] = true; //방문 체크한다.
        
        dfs(x-1, y); //위로 간다.
        dfs(x+1,y); //아래
        dfs(x,y-1); //왼쪽
        dfs(x, y+1); //오른쪽
        return;
    }
    return;
}

int main(){
    int result = 0;
    cin >> N >> M;
    //vector<vector<int>> box(N,vector<int>(M,0)); //N * M 벡터 초기화
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%1d",&graph[i][j]);
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(graph[i][j] == 0 && visited[i][j] == false){ //얼음 찾는다.
                dfs(i,j);
                result++;
            }
        }
    }
    
    cout << result << '\n';
}
