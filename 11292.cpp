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
        stack <int> s;
        int *a, *b;
        int i, k, l, m, n, o, p, r, sum;
    //End of Variables

    //Functions!!!
        bool COMP (Pii a, Pii b){return a.pf<b.pf;}
    //End of Functions!!!

int main(){


//    IN1; OUT1;
//    IN2; OUT2;

    scanf ("%d %d\n", &n, &m);
    while (m){
        k=m-1;
        sum=0;
        a=new int[n];
        b=new int[m];

        for (int i=0; n-i; i++){
            scanf ("%d\n", &a[i]);
        }
        for (int i=0; m-i; i++){
            scanf ("%d\n", &b[i]);
        }
        sort (a, a+n);
        sort (b, b+m);
        for (i=n-1; i+1; i--){
            while (b[k]>=a[i] && k+1){
                s.push(b[k]);
                k--;
            }
            if (s.size()) {sum+=s.top(); s.pop();}
            else {printf("Loowater is doomed!\n"); break;}
        }
        if (!(i+1)) printf("%d\n", sum);
        while (s.size()) {s.pop();}

        delete[] a;
        delete[] b;

        scanf ("%d %d\n", &n, &m);
    }

    return 0;
}
