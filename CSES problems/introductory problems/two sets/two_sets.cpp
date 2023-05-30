#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long N;
    cin >> N;
 
    bool possible;
    vector<long long> set1, set2;
 
    long long sum = (N*(N+1))/2;
 
    if (N == 1){//OK
        possible = false;
    }
    else if (sum % 2 == 0){
        if(N%2==1){
            possible = true;
            int ct = 0;
            for (long long i = 1; i<=N-4; i+=4){
                set1.push_back(i);
                set1.push_back(i+1);
                set2.push_back(i+2);
                set2.push_back(i+3);
                ct+=4;
            }
            int diff = N-ct;
            ct++;
            if (diff == 0){}
            else if(diff == 1){set1.push_back(ct);}
            else if(diff == 2){set1.push_back(ct);set1.push_back(ct+1);}
            else if(diff == 3){set1.push_back(ct);set1.push_back(ct+1);set2.push_back(ct+2);}
            else if(diff == 4){set1.push_back(ct);set1.push_back(ct+1);set2.push_back(ct+2);set2.push_back(ct+3);}
            
            
 
        }
        else{//OK
            if(N%4 == 0){
                possible = true;
                for (long long i = 0; i < N/2; i+=2){
                    set1.push_back(i+1);
                    set2.push_back(i+2);
                }
                for (long long i = N/2 ; i < N; i+=2){
                    set2.push_back(i+1);
                    set1.push_back(i+2);
                }
            }
            else{possible = false;}
        }
    }
    else{possible = false;}//OK
    
 
  
 
 
 
    if(possible){
        cout << "YES"<<'\n';
 
        cout << set1.size()<<'\n';
        for (long long el: set1){
            cout << el << " ";
        } cout <<'\n';
 
        cout << set2.size()<<'\n';
        for (long long el: set2){
            cout << el << " ";
        } cout <<'\n';
    }
    else{
        cout << "NO";
    }
 
    return 0;
}