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
        int h1[18], h2[37];
        int A[5], B[5];
        pair <int, vector <int> > a, b;
        char ch[2];
        int i, k, l, m, n, o, p, r;
    //End of Variables

    //Functions!!!
            bool COMP (int a, int b){return a%13<b%13;}

            void Fill(){
            //cout<<'2'-'0'<<" "<<'3'-'0'<<" "<<'4'-'0'<<" "<<'5'-'0'<<" "<<'6'-'0'<<" "<<'7'-'0'<<" "<<'8'-'0'<<" "<<'9'-'0'<<" "<<'T'-'0'<<" "<<'J'-'0'<<" "<<'Q'-'0'<<" "<<'K'-'0'<<" "<<'A'-'0'<<'\n';
            //cout<<'C'-'A'<<" "<<'D'-'A'<<" "<<'H'-'A'<<" "<<'S'-'A'<<'\n';
            h1[2]=0;
            h1[3]=1;
            h1[7]=2;
            h1[18]=3;
            h2[2]=0;
            h2[3]=1;
            h2[4]=2;
            h2[5]=3;
            h2[6]=4;
            h2[7]=5;
            h2[8]=6;
            h2[9]=7;
            h2[36]=8;
            h2[26]=9;
            h2[33]=10;
            h2[27]=11;
            h2[17]=12;
        }

        void HC(int C[5], pair <int, vector <int> > &c){
            c.pf=0;
            for (int i=4; i>-1; i--){
                c.ps.pb(C[i]);
            }
        }

        bool P(int C[5], pair <int, vector <int> > &c){
            c.pf=-1;
            for (int i=1; i<5; i++){
                if (C[i]%13==C[i-1]%13) {c.pf=i; break;}
            }
            if (c.pf==-1) return false;
            swap(C[0], C[c.pf-1]);
            swap(C[1], C[c.pf]);
            sort(C+2, C+5, COMP);
            c.pf=1;
            c.ps.pb(C[0]), c.ps.pb(C[2]), c.ps.pb(C[3]), c.ps.pb(C[4]);
            return true;

        }

        bool TP(int C[5], pair <int, vector <int> > &c){
            for (int i=1; i<5; i++){
                if (C[i]%13==C[i-1]%13) {c.ps.pb(i); i++;}
            }
            if (c.ps.size()<2) {c.ps.clear(); return false;}
            c.pf=2;
            swap(C[0], C[c.ps[0]-1]);
            swap(C[1], C[c.ps[0]]);
            swap(C[2], C[c.ps[1]-1]);
            swap(C[3], C[c.ps[1]]);
            c.ps.clear();
            c.ps.pb(C[0]), c.ps.pb(C[2]), c.ps.pb(C[4]);
            return true;
        }

        bool TK(int C[5], pair <int, vector <int> > &c){
            if (C[0]%13==C[1]%13 && C[1]%13==C[2]%13){
                c.pf=3;
                c.ps.pb(C[4]), c.ps.pb(C[3]), c.ps.pb(C[0]);
                return true;
            }
            if (C[1]%13==C[2]%13 && C[2]%13==C[3]%13){
                c.pf=3;
                c.ps.pb(C[4]), c.ps.pb(C[1]),  c.ps.pb(C[0]);
                return true;
            }
            if (C[2]%13==C[3]%13 && C[3]%13==C[4]%13){
                c.pf=3;
                c.ps.pb(C[2]), c.ps.pb(C[1]), c.ps.pb(C[0]);
                return true;
            }
            return false;
        }

        bool S(int C[5], pair <int, vector <int> > &c){
            for (int i=1; i<5; i++){
                if (C[i]%13-1!=C[i-1]%13) return false;
            }
            c.pf=4;
            c.ps.pb(C[4]);
            return true;
        }

        bool F(int C[5], pair <int, vector <int> > &c){
            for (int i=1; i<5; i++){
                if (C[i]/13!=C[i-1]/13) return false;
            }
            c.pf=5;
            for (int i=4; i>-1; i--){
                c.ps.pb(C[i]);
            }
            return true;
        }

        bool FH(int C[5], pair <int, vector <int> > &c){
            if (C[0]%13==C[1]%13 && C[1]%13==C[2]%13 && C[3]%13==C[4]%13){
                c.pf=6;
                c.ps.pb(C[0]);
                return true;
            }
            if (C[0]%13==C[1]%13 && C[2]%13==C[3]%13 && C[3]%13==C[4]%13){
                c.pf=6;
                c.ps.pb(C[4]);
                return true;
            }
            return false;
        }

        bool FK(int C[5], pair <int, vector <int> > &c){
            if (C[0]%13==C[1]%13 && C[1]%13==C[2]%13 && C[2]%13==C[3]%13) {
                c.pf=7;
                c.ps.pb(C[0]);
                return true;
            }
            if (C[1]==C[2] && C[2]==C[3] && C[3]==C[4]){
                c.pf=7;
                c.ps.pb(C[4]);
                return true;
            }
            return false;

        }

        bool SF(int C[5], pair <int, vector <int> > &c){
            for (int i=1; i<5; i++){
                if (C[i]-1!=C[i-1]) return false;
            }
            c.pf=8;
            for (int i=4; i>-1; i--){
                c.ps.pb(C[i]);
            }
            return true;
        }

        void ANS(){
            if (a.pf>b.pf) {printf("Black wins.\n"); return;}
            if (a.pf<b.pf) {printf("White wins.\n"); return;}
            for (int i=0; i<a.ps.size(); i++){
                if (a.ps[i]%13==b.ps[i]%13) continue;
                if (a.ps[i]%13>b.ps[i]%13) {printf("Black wins.\n"); return;}
                if (a.ps[i]%13<b.ps[i]%13) {printf("White wins.\n"); return;}
            }
            printf("Tie.\n");
        }
    //End of Functions!!!

int main(){


//    IN1; OUT1;
//    IN2; OUT2;


    Fill();
    while (scanf("%s", &ch)!=-1){
        A[0]=h1[ch[1]-'A']*13+h2[ch[0]-'0'];
        for (int i=1; i<5; i++){
            scanf ("%s", &ch);
            A[i]=(h1[ch[1]-'A'])*13+h2[ch[0]-'0'];
        }
        for (int i=0; i<5; i++){
            scanf ("%s", &ch);
            B[i]=(h1[ch[1]-'A'])*13+h2[ch[0]-'0'];
        }
        sort(A, A+5,COMP);
        sort(B, B+5, COMP);
        scanf ("%c", &ch[0]);
        if (!SF(A, a))
            if (!FK(A, a))
                if (!FH(A, a))
                    if (!F(A, a))
                        if (!S(A, a))
                            if (!TK(A, a))
                                if (!TP(A, a))
                                    if (!P(A, a))
                                        HC(A, a);
        if (!SF(B, b))
            if (!FK(B, b))
                if (!FH(B, b))
                    if (!F(B, b))
                        if (!S(B, b))
                            if (!TK(B, b))
                                if (!TP(B, b))
                                    if (!P(B, b))
                                        HC(B, b);
        ANS();
        a.ps.clear();
        b.ps.clear();

    }

    return 0;
}
