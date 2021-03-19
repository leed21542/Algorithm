#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<vector<int>> board = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
vector<int> moves = {1,5,3,5,1,2,1,4};
int answer = 0;

int main(){
    stack<int>s;
    for(int i=0; i<moves.size(); i++)
    {
        for(int j=0; j<board.size(); j++)
        {
            if(board[j][moves[i]-1]!=0)
            {
                if(!s.empty() && s.top() == board[j][moves[i]-1])
                {
                    s.pop();
                    answer+=2;
                }
                else{
                    s.push(board[j][moves[i]-1]);
                }
                board[j][moves[i]-1] = 0;
                break;
            }
        }
    }
    printf("%d",answer);
    
    return 0;
}
