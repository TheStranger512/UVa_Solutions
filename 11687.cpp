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
        char ch[1000000];
        string s;
        int i, k, l, m, n, o;
    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    while (scanf("%s\n", ch), (ch[0]!='E' || ch[1]!='N' || ch[2]!='D')){
        s=string(ch), i=0;
        if (s=="1") {printf("%d\n", 1); continue;}
        while (s.size()>1){
            i++, k=s.size();
            s.clear();
            while (k>0){
                s.pb('0'+k%10);
                k/=10;
            }
        }
        printf("%d\n", i+2);
    }

    return 0;
}
