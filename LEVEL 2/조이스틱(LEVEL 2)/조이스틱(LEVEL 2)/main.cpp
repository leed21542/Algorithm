#include <iostream>
#include <vector>
#include <string>
using namespace std;

string name = "JBAB";

int main(int argc, const char * argv[]) {
    
    vector<string> A(name.size(),"A"); //입력 받은 문자의 길이만큼 A로 초기화된 벡터를 만든다.
    vector<int> check(name.size()); //바꿨는지 안바꿨는지 확인하는 배열
    int front = 0;
    int rear = name.size()-1;
    int count = 0;
    int result = 0;
    int check_count = 0;
    int A_check = 0;
    
    for(int i=0; i<name.size(); i++){ //A는 미리 센다.
        if(name[i] == 'A'){
            check_count++;
            check[i] = 1;
            A_check++;
        }
    }
    
    while(check_count != name.size()){
        //위와 아래 중 어디로 갈지 정한다.
        if(name[front] != 'A'){
            if(name[front] >= 'N'){ //아래로 움직이는게 빠른 경우
                count += 'Z' - name[front] + 1;
                check_count++;
                check[front] = 1; //이 곳은 이미 움직였다.
            }
            else{
                count += name[front] - 'A';
                check_count++;
                check[front] = 1;
            }
        }
        
        if(check_count == name.size())break;
        //좌, 우 중 어디로 갈지 정한다.
        int r_distance = 0, l_distance = 0;
        int r_count = 0, l_count = 0;
        int r_che = front, l_che = front;
        
        if(A_check == 0){ //A가 없으면 무조건 오른쪽으로 이동
            front++;
            count++;
        }
        else{
            while(1){ //오른쪽으로 가서 찾는다.
                if(name[r_che] != 'A' && check[r_che]!=1){ //오른쪽에서 다음 위치 까지의 거리를 계산
                    r_distance = r_count;//오른쪽 거리 계산 확정
                    break;
                }
                else{
                    r_che++;
                    r_count++;
                    if(r_che > name.size()-1)r_che = 0;
                }
            }
            
                while(1){ //왼쪽으로 가서
                    if(name[l_che] != 'A' && check[l_che] != 1){
                        l_distance = l_count;
                        break;
                    }
                    else{
                        l_che--;
                        l_count++;
                        if(l_che < 0)l_che = name.size()-1; //제일 마지막으로 이동
                    }
                }
                
                if(r_count < l_count){
                    front = r_che;
                    count += r_count;
                }
                else if(r_count == l_count){
                    front = r_che;
                    count += r_count;
                }
                else {
                    front = l_che;
                    count += l_count;
                }
            }
    }
    int answer = count;
    
    cout << count << '\n';
}
