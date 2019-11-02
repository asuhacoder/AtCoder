#include<iostream>
using namespace std;

int N, K, Q;

int main() {
    cin >> N;
    cin >> K;
    cin >> Q; 

    int array[Q];
    for (int i=0;i<Q;i++) {
        cin >> array[i];
    }

    int point_array[N];

    for (int i=0;i<N;i++) {
        point_array[i] = K;
    }

    for (int i=0;i<Q;i++) {
        int winner = array[i] - 1;
        
        for (int player=0;player<N;player++) {
            //cout << "player" << player << endl;
            //cout << point_array[player] << endl;
            if (player != winner) {
                point_array[player]--;
            }
            //cout << point_array[player] << endl;
        }
    }

    for (int i=0;i<N;i++) {
        if (point_array[i] > 0) {
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}
return
