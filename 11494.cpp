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
        Pii a, b;

    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf("%d %d %d %d\n", &a.pf, &a.ps, &b.pf, &b.ps), a.pf){
        if (a==b) {printf("0\n"); continue;}
        if (abs(a.pf-b.pf)==abs(a.ps-b.ps)) {printf("1\n"); continue;}
        if (!(a.pf-b.pf) || !(a.ps-b.ps)) {printf("1\n"); continue;}
        printf("2\n");
    }

    return 0;
}
