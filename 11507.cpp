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
    typedef pair <bool, char> Pii;

    //Variables!!!
        char ch[2];
        Pii *a, k;
        map <char, Pii> p;
        int i, l, m, n, o, r;

    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf("%d\n",  &n), n){
        n--;
        a=new Pii[n];
        p['x']=mp(true, 'x');
        p['y']=mp(true, 'y');
        p['z']=mp(true, 'z');

        for (int i=0; i<n; i++){
            scanf ("%2s ", ch);
            a[n-1-i]=mp(ch[0]-'-', ch[1]);
        }
        for (int i=0; i<n; i++){
            if (a[i].ps=='o') continue;
            k=p['x'];
            p['x']=mp(!(p[a[i].ps].pf^a[i].pf), p[a[i].ps].ps);
            p[a[i].ps]=mp(a[i].pf^k.pf, k.ps);
        }
        if (p['x'].pf) printf("+");
        else printf("-");
        printf("%c\n", p['x'].ps);
        delete[] a;
    }

    return 0;
}
