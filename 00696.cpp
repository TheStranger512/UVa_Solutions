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
# define mod(a, b) ((a%b+b)%b)
# define Mod 1000000007
//End of Defines

using namespace std;

    typedef long long ll;
    typedef long double ld;
    typedef pair <int, int> Pii;

    //Variables!!!
        int i, k, l, m, n, o, r, t;
    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){


//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf ("%d %d\n", &m, &n), m || n){
                if (min(m, n)==1) {printf("%d knights may be placed on a %d row %d column board.\n", max(m, n), m, n); continue;}
                if (min(m, n)==2) {printf("%d knights may be placed on a %d row %d column board.\n", (max(m, n)/4)*4+(max(m, n)%4==1 ?2 :(max(m, n)%4>=2 ?4 :0)), m, n); continue;}
                printf("%d knights may be placed on a %d row %d column board.\n", int(ceil(float(m*n)/2)), m, n);
    }

    return 0;
}
