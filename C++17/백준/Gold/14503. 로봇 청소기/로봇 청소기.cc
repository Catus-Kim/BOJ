#include <bits/stdc++.h>

using namespace std;

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int r, c, d;
    cin >> r >> c >> d;

    vector<vector<int>> room(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> room[i][j];
        }
    }

    int ans = 0;
    while (true) {
        if (room[r][c] == 0) {
            room[r][c] = 2;
            ans++;
        }

        bool found = false;
        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < N && nc >= 0 && nc < M && room[nr][nc] == 0) {
                found = true;
                break;
            }
        }

        if (found) {
            d = (d + 3) % 4;
            int nr = r + dr[d];
            int nc = c + dc[d];
            if (nr >= 0 && nr < N && nc >= 0 && nc < M && room[nr][nc] == 0) {
                r = nr;
                c = nc;
            }
        } else {
            int br = r - dr[d];
            int bc = c - dc[d];
            if (br >= 0 && br < N && bc >= 0 && bc < M && room[br][bc] != 1) {
                r = br;
                c = bc;
            } else {
                break;
            }
        }
    }

    cout << ans;

    return 0;
}