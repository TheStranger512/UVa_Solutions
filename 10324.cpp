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
        char ch[1000000];
        int i, k, l, m, n, o, p, r, j, t=1;


    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf("%s\n%d", ch, &n)==2){
        printf("Case %d:\n", t++);
        for (int i=0; i<n; i++){
            scanf ("%d %d\n", &l, &r);
            if (l>r) swap(l, r);
            int j=l;
            while (ch[l]==ch[j] && j<r+1){j++;}
            if (j==r+1) printf("Yes\n");
            else printf("No\n");
        }
    }

    return 0;
}
