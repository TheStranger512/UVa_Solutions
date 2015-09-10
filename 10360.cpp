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

    struct str{
        int x, y, w;
    }o, maxi;

    //Variables!!!
            ll **a;
            str *b;
            int i, k, l, d, m, n, p, r, j, t;
    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){


//    IN1; OUT1;
//    IN2; OUT2;

    scanf ("%d", &t);
    while (t--){
        o.x=INT_MIN, o.y=INT_MIN;
        maxi.w=INT_MIN;
        scanf ("%d\n", &d);
        scanf ("%d\n", &n);
        b=new str[n];
        for (int i=0; i<n; i++){
            scanf("%d %d %d\n", &b[i].x, &b[i].y, &b[i].w);
            o.x=max(o.x, b[i].x);
            o.y=max(o.y, b[i].y);
        }
        o.x+=d+1, o.y+=d+1;
        a= new ll*[o.x+2];
        for (int i=0; i<o.x+2; i++){
            a[i]=new ll[o.y+2]();
        }
        for (int i=0; i<n; i++){
            a[b[i].x+1][b[i].y+1]=b[i].w;
        }
        for (int i=1; i<o.x+2; i++){
            for (int j=1; j<o.y+2; j++){
                a[i][j]+=a[i][j-1]+a[i-1][j]-a[i-1][j-1];
            }
        }
        for (int i=0; i<o.x+2; i++){
            for (int j=0; j<o.y+2; j++){
                p=min(min(i, j), 2*d+1);
                if (maxi.w<a[i][j]-a[i][j-p]-a[i-p][j]+a[i-p][j-p]){
                    maxi.x=max(0, i-d);
                    maxi.y=max(0, j-d);
                    maxi.w=a[i][j]-a[i][j-p]-a[i-p][j]+a[i-p][j-p];
                }
            }
        }
        if (maxi.x==0) maxi.x=1;
        if (maxi.y==0) maxi.y=1;
        printf("%d %d %d\n", maxi.x-1, maxi.y-1, maxi.w);
        for (int i=0; i<o.x+2; i++){
            delete[] a[i];
        }
        delete[] a;
        delete[] b;
    }

    return 0;
}
