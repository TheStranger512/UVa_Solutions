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
    typedef pair <pair <int, int>, string> Pii;

    //Variables!!!
        vector <Pii> a[4];
        string s;
        char ch[52], ch1;
        int h1[19], h2[37];
        int i, k, l, m, n, o;
    //End of Variables

    //Functions!!!
        bool COMP(Pii a, Pii b){
            if (h1[a.pf.pf]==h1[b.pf.pf]) return h2[a.pf.ps]<h2[b.pf.ps];
            else return h1[a.pf.pf]<h1[b.pf.pf];
        }


        void Fill(){
            //cout<<'2'-'0'<<" "<<'3'-'0'<<" "<<'4'-'0'<<" "<<'5'-'0'<<" "<<'6'-'0'<<" "<<'7'-'0'<<" "<<'8'-'0'<<" "<<'9'-'0'<<" "<<'T'-'0'<<" "<<'J'-'0'<<" "<<'Q'-'0'<<" "<<'K'-'0'<<" "<<'A'-'0'<<'\n';
            //cout<<'C'-'A'<<" "<<'D'-'A'<<" "<<'S'-'A'<<" "<<'H'-'A'<<'\n';
            h1[2]=1;
            h1[3]=2;
            h1[18]=3;
            h1[7]=4;
            h2[2]=1;
            h2[3]=2;
            h2[4]=3;
            h2[5]=4;
            h2[6]=5;
            h2[7]=6;
            h2[8]=7;
            h2[9]=8;
            h2[36]=9;
            h2[26]=10;
            h2[33]=11;
            h2[27]=12;
            h2[17]=13;
        }
    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    Fill();
    while (scanf("%c\n", &ch1), ch1!='#'){
        scanf("%s\n", ch);
        if (ch1=='S') k=1;
        if (ch1=='W') k=2;
        if (ch1=='N') k=3;
        if (ch1=='E') k=0;
        for (int i=0; i<52; i+=2){
            s.pb(ch[i]);
            s.pb(ch[i+1]);
            a[k].pb(mp(mp(ch[i]-'A', ch[i+1]-'0'), s));
            s.clear();
            k++;
            k%=4;
        }
        scanf("%s\n", ch);
        for (int i=0; i<52; i+=2){
            s.pb(ch[i]);
            s.pb(ch[i+1]);
            a[k].pb(mp(mp(ch[i]-'A', ch[i+1]-'0'), s));
            s.clear();
            k++;
            k%=4;
        }
        for (int i=0; i<4; i++){
            sort(a[i].begin(), a[i].end(), COMP);
        }
        printf("S:");
        for (int i=0; i<13; i++){
            printf(" %c%c", a[0][i].ps[0], a[0][i].ps[1]);
        }
        printf("\nW:");
        for (int i=0; i<13; i++){
            printf(" %c%c", a[1][i].ps[0], a[1][i].ps[1]);
        }
        printf("\nN:");
        for (int i=0; i<13; i++){
            printf(" %c%c", a[2][i].ps[0], a[2][i].ps[1]);
        }
        printf("\nE:");
        for (int i=0; i<13; i++){
            printf(" %c%c", a[3][i].ps[0], a[3][i].ps[1]);
        }
        printf("\n");
        a[0].clear();
        a[1].clear();
        a[2].clear();
        a[3].clear();

    }



    return 0;
}
