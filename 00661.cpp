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
    typedef pair <bool, int> Pii;

    //Variables!!!
        Pii *a;
        int i, k, l, m, n, o, p, r, c, maxi, t=1;



    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    while(scanf("%d %d %d\n", &n, &m, &c)==3 && !(n==0 && m==0 && c==0)){
        maxi=0, r=0;
        printf("Sequence %d\n", t++);
        a=new Pii[n];
        for (int i=0; i<n; i++){
            scanf ("%d\n", &a[i].ps);
        }
        for (int i=0; i<m; i++){
            scanf ("%d\n", &k);
            k--;
            a[k].pf=!a[k].pf;
            if (a[k].pf) r+=a[k].ps;
            else r-=a[k].ps;
            maxi=max(r, maxi);
        }
        if (maxi>c) printf("Fuse was blown.\n\n");
        else printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",maxi);
        delete[] a;
    }

    return 0;
}
