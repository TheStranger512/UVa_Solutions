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
        int h[37];
        char a[52][2];
        char ch[2];
        int i, k, l, m, n, o, p, r, t;
    //End of Variables

    //Functions!!!

            void Fill(){
            //cout<<'2'-'0'<<" "<<'3'-'0'<<" "<<'4'-'0'<<" "<<'5'-'0'<<" "<<'6'-'0'<<" "<<'7'-'0'<<" "<<'8'-'0'<<" "<<'9'-'0'<<" "<<'T'-'0'<<" "<<'J'-'0'<<" "<<'Q'-'0'<<" "<<'K'-'0'<<" "<<'A'-'0'<<'\n';
            //cout<<'C'-'A'<<" "<<'D'-'A'<<" "<<'H'-'A'<<" "<<'S'-'A'<<'\n';
            h[2]=0;
            h[3]=1;
            h[4]=2;
            h[5]=3;
            h[6]=4;
            h[7]=5;
            h[8]=6;
            h[9]=7;
            h[36]=8;
            h[26]=9;
            h[33]=10;
            h[27]=11;
            h[17]=12;
        }
    //End of Functions!!!

int main(){


//    IN1; OUT1;
//    IN2; OUT2;


    Fill();
    scanf("%d\n", &t);
    r=t;
    while(t--){
        for (int i=0; i<52; i++){
            scanf ("%s", &ch);
            a[i][0]=ch[0], a[i][1]=ch[1];
        }
        k=26, p=0;
        for (int i=0; i<3; i++){
            if (h[a[k][0]-'0']>7) {p+=10; k-=1;}
            else {p+=h[a[k][0]-'0']+2; k-=(10-h[a[k][0]-'0']-2)+1;}
        }
        if (p-1<=k) printf("Case %d: %c%c\n", r-t, a[p-1][0], a[p-1][1]);
        else printf("Case %d: %c%c\n", r-t, a[p-1+26-k][0], a[p-1+26-k][1]);
    }

    return 0;
}
