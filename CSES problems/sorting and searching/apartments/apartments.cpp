#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> desired(n), size(m);
    int res = 0;
    for (int i = 0; i<n;i++){cin >> desired[i];}
    for (int i = 0; i<m;i++){cin >> size[i];} 

    for (auto customer : desired){
        //idfk, gonna skip this and learn binary search
        for (int i = -k; i<k;i++){find(size.begin(), size.end(), customer+i);}
    }
    //case one, no appartments available
    //Case two, one apartment
    //case 3, multiple (one is closer)
    //case 4, both same dist;
    //maybe start from biggest desired size


    return 0;
}