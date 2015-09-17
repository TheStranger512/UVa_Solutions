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
        char **ch, **ch2;
        int i, k, l, m, n, o, p, t;
        bool B;
    //End of Variables

    //Functions!!!
        void AddToAdjacent(int x, int y){
            for (int i=x-1; i<x+2; i++){
                for (int j=y-1; j<y+2; j++){
                    if (ch[i][j]!='*') ch[i][j]++;
                }
            }
        }

        void PrintBoardTouched(){
            for (int i=1; i<n+1; i++){
                if (i-1) printf("\n");
                for (int j=1; j<n+1; j++){
                    if (ch2[i][j]=='x' || ch[i][j]=='*') printf("%c", ch[i][j]);
                    else printf(".");
                }
                //printf("\n");
            }
        }

        void PrintBoard(){
            for (int i=1; i<n+1; i++){
                if (i-1) printf("\n");
                for (int j=1; j<n+1; j++){
                    if (ch2[i][j]=='x') printf("%c", ch[i][j]);
                    else printf(".");
                }
            }
            //printf("\n");
        }
    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    scanf("%d", &t);
    o=t;
    while(o--){
        if (o+1!=t) printf("\n");
        B=false;
        scanf("%d\n", &n);
        ch=new char*[n+2];
        ch2=new char*[n+2];
        ch[0]=new char[n+2];
        ch[n+1]=new char[n+2];
        ch2[0]=new char[n+2];
        ch2[n+1]=new char[n+2];
        for (int i=1; i<n+1; i++){
            ch[i]=new char[n+2];
            for (int j=1; j<n+2; j++){
                scanf("%c", &ch[i][j]);
                if (ch[i][j]=='.') ch[i][j]='0';
            }
        }
        for (int i=1; i<n+1; i++){
            for (int j=1; j<n+1; j++){
                if (ch[i][j]=='*') AddToAdjacent(i, j);
            }
        }
        for (int i=1; i<n+1; i++){
            ch2[i]=new char[n+2];
            for (int j=1; j<n+2; j++){
                scanf("%c", &ch2[i][j]);
                if (ch2[i][j]=='x' && ch[i][j]=='*') B=true;
            }
        }
        if (B) PrintBoardTouched();
        else PrintBoard();
        printf("\n");
        for (int i=0; i<n+2; i++){
            delete[] ch[i];
            delete[] ch2[i];
        }
        delete[] ch;
        delete[] ch2;
    }


    return 0;
}
