#include<bits/stdc++.h>
using namespace std;


int main(){


    ifstream file("input2.txt");

    if (!file) {
        cout << "File not opened";
        return 0;
    }

    string line;
    int curr=50;
    int cnt=0;
    while (getline(file, line)) {
        char ch = line[0];
        long long num = stoll(line.substr(1));
        //num=num%100;
        
        
        for(int i  = 0 ; i < num ; i++){
            if(ch == 'L'){
                curr -- ;
                if(curr < 0 ){
                    curr = 99 ;
                }
            }
            else if (ch == 'R'){
                curr ++ ;
                if(curr > 99){
                    curr = 0 ;
                }
            }

            if(curr == 0){
                cnt++;
            }
        }
        
    }
    cout<<cnt;
    

    file.close();
   
}