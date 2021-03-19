//
//  main.cpp
//  미로 탈출
//
//  Created by Sang Ho Yoo on 2020/10/06.
//

//괴물을 만나지 않으면 그 방향을 계속 간다.
#include <iostream>
#include <queue>

using namespace std;

int graph[201][201];
int n,m;

//이동할 네 가지 방향 정의 (상, 하, 좌, 우)
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

int bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x,y});
    
    while(!q.empty()){ //큐가 빌 때까지 돈다.
        int x = q.front().first;
        int y = q.front().second;
        q.pop(); //위에서 부터 비운다.
        
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >=m)continue; //범우 벗어나면 무시
            if(graph[nx][ny] == 0)continue; //괴물 만나면 넘어간다.
            
            if(graph[nx][ny] == 1){ //갈 수 있는 곳이면 가서 최소 길이 저장
                graph[nx][ny] = graph[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
    
    return graph[n-1][m-1];
}

int main(int argc, const char * argv[]) {
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%1d",&graph[i][j]);
        }
    }
    
    int result = bfs(0,0);
    cout << result << '\n';
}
