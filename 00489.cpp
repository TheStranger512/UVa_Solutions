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
        char ch;
        pair <bool, bool> *a;
        int i, k, m, n, o, t, l, r;
        bool B;

    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    while(scanf("%d\n", &n), n+1){
        a=new pair<bool, bool>[26]();
        l=r=0;
        printf("Round %d\n", n);
        while (scanf("%c", &ch), ch!='\n'){
            if (!a[ch-'a'].pf) {a[ch-'a'].pf=true; l++;}
        }
        while (scanf("%c", &ch), ch!='\n'){
            if (!l) continue;
            if (r==7) continue;
            if (a[ch-'a'].pf && !a[ch-'a'].ps) {a[ch-'a'].ps=true; l--;}
            if (!a[ch-'a'].pf && !a[ch-'a'].ps) {a[ch-'a'].ps=true; r++;}
        }
        if (!l) printf("You win.\n");
        else if (r==7) printf("You lose.\n");
        else printf("You chickened out.\n");
        delete[] a;
        }

    return 0;
}
