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
        int a[3], b[2], *c;
        int i, k, l, m, n, o, r, j;
    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){


//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf("%d %d %d %d %d\n", &a[0], &a[1], &a[2], &b[0], &b[1]), a[0]){
        c=new int[53]();
        c[a[0]]=c[a[1]]=c[a[2]]=c[b[0]]=c[b[1]]=1;
        k=0;
        sort (a, a+3);
        if (b[1]<b[0]) swap(b[1], b[0]);
        for (int i=1; i>-1; i--){
            l=r=-1;
            for (int j=2; j>-1; j--){
                if (a[j]>b[i] && c[a[j]]!=2) l=j;
                if (a[j]<b[i] && c[a[j]]!=2) r=j;
            }
            if (l==-1) {c[a[r]]=2; k++;}
            else c[a[l]]=2;
        }
        for (int i=0; i<3; i++){
            if (c[a[i]]!=2) l=a[i]+1;
        }
        if (k==0) printf("-1\n");
        if (k==2){
            for (int i=1; i<53; i++){
                if (!c[i]) {l=i; break;}
            }
            printf("%d\n", l);
        }
        if (k==1){
            while (c[l] && l<53) l++;
            if (l==53) printf("-1\n");
            else printf("%d\n", l);
        }
        delete[] c;
    }

    return 0;
}
