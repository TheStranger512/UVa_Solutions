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
        int h, u, d, f, i;
        double k, j;



    //End of Variables

    //Functions!!!

    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    scanf ("%d %d %d %d\n", &h, &u, &d, &f);
    while (h){
        i=1, k=0, j=u-d;
        while (j+d<=h && j>=0){
            i++;
            k+=double(u*f)/100;
            if (k>double(u)) j-=d;
            else j+=u-d-k;
        }
        if (j>=0) printf("success on day %d\n", i);
        else printf("failure on day %d\n", i);
        scanf ("%d %d %d %d\n", &h, &u, &d, &f);
    }

    return 0;
}
