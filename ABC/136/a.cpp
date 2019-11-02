#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void){
    int A, B, C;
    cin >> A >> B >> C;
    cout << max(0, C - A + B) << endl;
 
    return 0;
}
