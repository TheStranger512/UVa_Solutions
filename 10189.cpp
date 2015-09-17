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
        char **ch;
        int i, k, l, m, n, o, p, t;
    //End of Variables

    //Functions!!!
        void AddToAdjacent(int x, int y){
            for (int i=x-1; i<x+2; i++){
                for (int j=y-1; j<y+2; j++){
                    if (ch[i][j]!='*') ch[i][j]++;
                }
            }
        }
    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf("%d %d\n", &n, &m), n || m){
        if (t) printf("\n");
        t++;
        printf("Field #%d:\n", t);
        ch=new char*[n+2];
        ch[0]=new char[m+2];
        ch[n+1]=new char[m+2];
        for (int i=1; i<n+1; i++){
            ch[i]=new char[m+2];
            for (int j=1; j<m+2; j++){
                scanf("%c", &ch[i][j]);
                if (ch[i][j]!='*') ch[i][j]='0';
            }
        }
        for (int i=1; i<n+1; i++){
            for (int j=1; j<m+1; j++){
                if (ch[i][j]=='*') AddToAdjacent(i, j);
            }
        }
        for (int i=1; i<n+1; i++){
            delete[] ch[i-1];
            for (int j=1; j<m+1; j++){
                printf("%c", ch[i][j]);
            }
            printf("\n");
        }
        delete[] ch[n+1];
        delete[] ch;
    }

    return 0;
}
