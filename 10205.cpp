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
        char ch[100];
        string H[4], h[13];
        int a[2][52];
        int **b;
        int i, k, l, m, n, o, p, r, j, t;
        bool B;
    //End of Variables

    //Functions!!!
        void Fill(){
            H[0]="Clubs";
            H[1]="Diamonds";
            H[2]="Hearts";
            H[3]="Spades";
            h[0]="2";
            h[1]="3";
            h[2]="4";
            h[3]="5";
            h[4]="6";
            h[5]="7";
            h[6]="8";
            h[7]="9";
            h[8]="10";
            h[9]="Jack";
            h[10]="Queen";
            h[11]="King";
            h[12]="Ace";
        }
    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    Fill();
    scanf ("%d\n", &t);
    scanf ("%d", &n);
    while (t--){
        b=new int*[n];
        for (int i=0; i<52; i++){
            a[0][i]=i;
        }
        for (int i=0; i<n; i++){
            b[i]=new int[52];
            for (int j=0; j<52; j++){
                scanf ("%d", &b[i][j]);
                b[i][j]--;
            }
        }
        B=false;
        while (scanf ("%[^0-9]%d", &ch, &k)>1){
            if (ch[0]=='\n' && ch[1]=='\n') break;
            k--;
            B=!B;
            for (int i=0; i<52; i++){
                a[B][i]=a[!B][b[k][i]];
            }
        }
        for (int i=0; i<52; i++){
            printf("%s of %s\n", h[a[B][i]%13].c_str(), H[a[B][i]/13].c_str());
        }
        if (t) printf("\n");
        for (int i=0; i<n; i++){
            delete[] b[i];
        }
        delete[] b;
        swap (n, k);

    }

    return 0;
}
