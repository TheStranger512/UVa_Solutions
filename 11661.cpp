# include <bits/stdc++.h>


//Defines
# define Pi 3.14159265358979323846
# define pf first
# define ps second
# define mp make_pair
# define pb push_back
# define IN1  freopen ("input.txt", "r", stdin);
# define OUT1 freopen ("output.txt", "w", stdout);
# define IN2  freopen ("", "r", stdin);
# define OUT2 freopen ("", "w", stdout);
# define Mod 1000000007
//End of Defines

using namespace std;

    typedef long long ll;
    typedef long double ld;
    typedef pair <int, int> Pii;

    //Variables!!!
        string s;
        int i, k, l, m, n, r;

    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;


    while (scanf("%d\n", &n), n){
        m=l=r=INT_MAX;
        getline(cin, s);
        for (int i=0; i<s.size(); i++){
            if (s[i]=='Z') m=0;
            if (s[i]=='R'){r=i; m=min(m, abs(l-r));}
            if (s[i]=='D'){l=i; m=min(m, abs(l-r));}
        }
        printf("%d\n", m);
    }

    return 0;
}
