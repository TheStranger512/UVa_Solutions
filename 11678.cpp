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
        int *p, *a, *b;
        int i, k, l, m, n, o, r, j;
    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){


//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf("%d %d\n", &n, &m), n && m){
        p=new int[100001]();
        a=new int[n]();
        b=new int[m]();
        l=r=0;
        for (int i=0; i<n; i++){
            scanf("%d ", &a[i]);
            p[a[i]]=1;
        }
        for (int i=0; i<m;  i++){
            scanf("%d ", &b[i]);
            if (p[b[i]]==1 || p[b[i]]==3) p[b[i]]=3;
            else {p[b[i]]=3; r++;}
        }
        for (int i=0; i<n;  i++){
            if (p[a[i]]==2 || p[a[i]]==3) p[a[i]]=3;
            else {p[a[i]]=3; l++;}
        }
        printf("%d\n", min(l, r));
    }

    return 0;
}
