#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

map<string,int> mmap;

int Cell_num, net_num;

typedef struct{ //cell에 대한 정보 저장 구조체
    string cell;
    int cell_size;
    char block;
}Cell;

typedef struct{ //net에 대한 정보 저장 구조체
    int Aside;
    int Bside;
} Net;

typedef struct{
    int size_A;
    vector<int> A_side;
    vector<int> B_side;
    int gain;
    int total_gain;
} pass;

vector<int>V[50]; //각 cell에 대한 net의 정보
Cell cell_information[50]; //cell 정보 저장 배열
Net net_information[50]; //net 정보 저장 배열
int Iindex;
int gain[50]={0,}; //step 1에서 각 cell별로 gain 구하는 배열
int Lock_Cell[50] = {0,}; //Cell이 이동하여 Lock된 cell
pass pass_result[50]; // 각 단계별로 모든 정보 저장하는 배열.
vector<string> T_net[50];

int Total_gain = 0; //각 과정별로 총 gain을 계산하기 위한 변수
int MAX_gain = 0;

bool choose = false;

map<string,int> map_cell; //cell 정보를 인덱스로 바로 찾기 위해 map을 사용
map<string,int> map_net; // net 정보를 인덱스로 바로 찾기 위해 map을 사용

int pass_result_index = 0;

int Base_cell = 0; //Base_cell 변수


int main()
{
    fin >> Cell_num >> net_num;
    
    for(int i=0; i<Cell_num; i++){ //Cell 정보 받는 for문
        string n1;
        int n2;
        char n3;
        fin >> n1 >> n2 >> n3;
        
        map_cell.insert(make_pair(n1, i)); //cell 정보를 map을 이용하여 저장
        
        cell_information[i].cell = n1; //cell 이름 입력
        cell_information[i].cell_size = n2; //cell 크기 입력
        cell_information[i].block = n3; //블록 입력
    }
    
    for(int i=0; i<net_num; i++){
        string n1;
        int n2;
        fin >> n1 >> n2;
        
        map_net.insert(make_pair(n1, i)); //net 정보를 map을 이용하여 저장
        
        for(int j=0; j<n2; j++){
            string n;
            fin >> n;
        }
    }
}
