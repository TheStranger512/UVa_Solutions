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
        int *a, *b, *p, *q;
        int i, k, m, n, o, t;
        bool B;

    //End of Variables

    //Functions!!!
        void GiveAns(int *a, int *b){
            int l=0, r=0;
            int v[10]={0};
            for (int i=0; i<n; i++){
                if (a[i]==b[i]) {l++; v[a[i]]++;}
            }
            for (int i=1; i<10; i++){
                r+=min(p[i], q[i])-v[i];
            }
            printf("    (%d,%d)\n", l, r);
        }
    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf("%d\n", &n), n){
        t++;
        a=new int[n];
        p=new int[10]();
        for (int i=0; i<n; i++){
            scanf("%d ", &a[i]);
            p[a[i]]++;
        }
        printf("Game %d:\n", t);
        B=true;
        while (B){
            b=new int[n];
            q=new int[10]();
            for (int i=0; i<n; i++){
                scanf("%d ", &b[i]);
                q[b[i]]++;
            }
            if (b[0]==0) {B=false; continue;}
            GiveAns(a, b);
            delete[] b;
        }
        delete[] a;
    }

    return 0;
}
