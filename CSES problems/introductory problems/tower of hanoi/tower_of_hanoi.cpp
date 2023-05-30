#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> moves;

void getmoves(int n, int A, int B, int C){
    if (n == 0){return;}
    getmoves(n-1, A, C, B);
    moves.push_back(make_pair(A, C));
    getmoves(n-1, B, A, C);
}

int main(){
    int n;
    cin >> n;
    getmoves(n,1, 2, 3);
    cout <<moves.size()<<"\n";
    for (auto el:moves){cout << el.first<< " "<< el.second<<"\n";}
    return 0;
}