#include <bits/stdc++.h>
using namespace std;

int main() {

    string que = "4487-9581,755745207-755766099,954895848-955063124,4358832-4497315,15-47,1-12,9198808-9258771,657981-762275,6256098346-6256303872,142-282,13092529-13179528,96201296-96341879,19767340-19916378,2809036-2830862,335850-499986,172437-315144,764434-793133,910543-1082670,2142179-2279203,6649545-6713098,6464587849-6464677024,858399-904491,1328-4021,72798-159206,89777719-90005812,91891792-91938279,314-963,48-130,527903-594370,24240-60212";

    stringstream ss(que);
    string token;
    long long answer = 0;

    while (getline(ss, token, ',')) {

        stringstream range_ss(token);
        string range[2];

        getline(range_ss, range[0], '-');
        getline(range_ss, range[1], '-');

        long long start = stoll(range[0]);
        long long end   = stoll(range[1]);

        for (long long i = start; i <= end; i++) {

            string s = to_string(i);
            int len = s.length();
            int half = len / 2;
            bool flag = true;


            if(len % 2 == 0){
                for (int j = 0; j < len / 2; j++) {
                if (s[j] == s[half + j]) {
                    continue;
                    
                }
                else {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                answer += i;
            }
            }

            
        }
    }

    cout << answer << endl;
    return 0;
}
