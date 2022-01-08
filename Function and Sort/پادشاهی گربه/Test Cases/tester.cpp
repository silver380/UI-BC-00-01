#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{

    ifstream test_in(argv[1]);    /* This stream reads from test's input file   */
    ifstream test_out(argv[2]);   /* This stream reads from test's output file  */
    ifstream user_out(argv[3]);   /* This stream reads from user's output file  */

    /* Your code here */
    /* If user's output is correct, return 0, otherwise return 1       */
    /* e.g.: Here the problem is: read n numbers and print their sum:  */

    string user_output;
    user_out >> user_output;

    string s , t;
    test_in >> s >> t;
    string ss = s;
    int n = s.size() ;
    for(int i = 0 , x = 0;i  < n; i ++){
        x = i ;
        for(int j = i + 1; j < n ; j++){
            if(s[j] <= s[x] ){
                x = j ;
            }
        }
        if(s[x] < s[i]){
            swap(s[x],s[i]) ;
            break ;
        }
    }
    if(s < t) {
        if(user_output == "---")
            return 1;
        if(user_output == s)
            return 0;
        if(user_output <= ss && user_output < t)
        {
            return 0;
        }
        return 1;
    }
    else {
        if(user_output == "---")
            return 0;
        return 1;
    }
}

