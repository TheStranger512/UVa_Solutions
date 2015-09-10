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
        char ch;
        int i, k, l, m, n, o, r, t;
    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){


//    IN1; OUT1;
//    IN2; OUT2;

    scanf ("%d\n", &t);
    while (t--){
        scanf ("%c %d %d\n", &ch, &m, &n);
        switch(ch){
            case 'r':
                printf("%d\n", min(m, n));
                break;
            case 'k':
                printf("%d\n", int(ceil(float(m*n/2))));
                break;
            case 'Q':
                printf("%d\n", min(m, n));
                break;
            default:
                printf("%d\n", int(floor((n+1)/2))*int(floor((m+1)/2)));
        }
    }

    return 0;
}
