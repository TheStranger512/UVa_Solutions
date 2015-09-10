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
        vector <string> a;
        char ch[16];
        map <string, int> p;
        int i, k, l, m, n, o, r, j;
    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){



//    IN1; OUT1;
//    IN2; OUT2;

    scanf ("%d\n", &n);
    while (n){
       for (int i=0; i<n; i++){
            scanf ("%s[a-z]", &ch);
            s=string(ch);
            a.pb(s);
            p[s]=0;
        }
        for (int i=0; i<n; i++){
            scanf ("%s %d %d ", &ch, &m, &k);
            s=string(ch);
            if (k==0) continue;
            p[s]+=m%k-m;
            for (int j=0; j<k; j++){
                scanf ("%s[a-z]", ch);
                s=string(ch);
                p[s]+=m/k;
            }
        }
        for (int i=0; i<n; i++){
            printf("%s %d\n", a[i].c_str(), p[a[i]]);
        }
        p.clear();
        a.clear();
        n=0;
        scanf ("%d\n", &n);
        if (n) printf("\n");
    }

    return 0;
}
