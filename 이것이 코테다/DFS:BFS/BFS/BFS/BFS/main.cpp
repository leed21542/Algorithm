//
//  main.cpp
//  BFS
//
//  Created by Sang Ho Yoo on 2020/10/06.
//
// BFS 는 큐 사용!!
//
//1. 시작 노드 큐에 넣고 방문표시
//2. 큐에서 제일 앞 노드 꺼내서 인접 노드 중 방문 안한 곳 큐에 넣고 방문체크
//3. 2번 과정 더 이상 수행할 수 없을 때까지 반복
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
bool visited[9];
vector<int> graph[9];

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true; //방문 표시
    
    while(!q.empty()){ //큐가 빌 때까지 돌린다.
        int x = q.front(); //제일 앞 큐 원소 꺼낸다.
        q.pop();
        
        for(int i=0; i<graph[x].size(); i++){
            int y = graph[x][i]; //연결된 간선 다 넣는다.
            
            if(!visited[y]){
                q.push(y); //연결된 간선 넣는다.
                visited[y] = true; //방문 체크
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // 노드 1에 연결된 노드 정보 저장
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);
    
    // 노드 2에 연결된 노드 정보 저장
    graph[2].push_back(1);
    graph[2].push_back(7);
    
    // 노드 3에 연결된 노드 정보 저장
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);
    
    // 노드 4에 연결된 노드 정보 저장
    graph[4].push_back(3);
    graph[4].push_back(5);
    
    // 노드 5에 연결된 노드 정보 저장
    graph[5].push_back(3);
    graph[5].push_back(4);
    
    // 노드 6에 연결된 노드 정보 저장
    graph[6].push_back(7);
    
    // 노드 7에 연결된 노드 정보 저장
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);
    
    // 노드 8에 연결된 노드 정보 저장
    graph[8].push_back(1);
    graph[8].push_back(7);
    
    bfs(1);
}
