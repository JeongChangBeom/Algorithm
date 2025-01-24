#include <string>
using namespace std;

bool visited[11][11][11][11];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};

int solution(string dirs) {
    int answer = 0;
    
    int x = 5;
    int y = 5;
    
    int rotate = 0;
    
    for(int i=0;i<dirs.size();i++){
        if(dirs[i] == 'U'){
            rotate = 0;
        }
        else if(dirs[i] == 'D'){
            rotate = 1;
        }
        else if(dirs[i] == 'R'){
            rotate = 2;
        }
        else if(dirs[i] == 'L'){
            rotate = 3;
        }
        
        int next_x = x + dx[rotate];
        int next_y = y + dy[rotate];
        
        if (next_x >= 0 && next_x < 11 && next_y >= 0 && next_y < 11) {
            if (!visited[x][y][next_x][next_y] && !visited[next_x][next_y][x][y]) {
                visited[x][y][next_x][next_y] = true;
                visited[next_x][next_y][x][y] = true;
                
                answer++;
            }
            x = next_x;
            y = next_y;
        }
    }
    return answer;
}