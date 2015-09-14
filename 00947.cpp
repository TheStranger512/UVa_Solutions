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
    typedef pair <pair <int, int>, string> Piic;

    //Variables!!!
        char ch[5], ch2[5];
        vector <int> a;
        int b[10];
        int i, k, l, m, n, o, r;
    //End of Variables

    //Functions!!!
        void FindSecretCode(char ch[5], char ch2[5]){
            int b2[10]={0};
            int q[10]={0};
            int l2=0, r2=0;
            for (int i=0; i<k; i++){
                b2[ch2[i]-'0']++;
            }
            for (int i=0; i<k; i++){
                if (ch2[i]==ch[i]) {l2++; q[ch[i]-'0']--; b2[ch2[i]-'0']--;}
            }
            for (int i=1; i<10; i++){
                r2+=min(q[i]+b[i], b2[i]);
            }
            if (l==l2 && r==r2) o++;
        }
    //End of Functions!!!

int main(){

//    IN1; OUT1;
//    IN2; OUT2;

    scanf("%d", &n);
    for (int i=0; i<n; i++){
        o=0;
        for (int i=1; i<10; i++){
            b[i]=0;
        }
        scanf("%s %d %d", &ch, &l, &r);
        for (k=0; ch[k]!='\000'; k++){
            b[ch[k]-'0']++;
        }
        for (int i1=1; i1<10; i1++){
            for (int i2=1; i2<10; i2++){
                if (k==2){
                    ch2[0]='0'+i1;
                    ch2[1]='0'+i2;
                    FindSecretCode(ch, ch2);
                    memset(ch2, 0, 5);
                }else{
                    for (int i3=1; i3<10; i3++)
                    if (k==3){
                        ch2[0]='0'+i1;
                        ch2[1]='0'+i2;
                        ch2[2]='0'+i3;
                        FindSecretCode(ch, ch2);
                        memset(ch2, 0, 5);
                    }else{
                        for (int i4=1; i4<10; i4++){
                            if (k==4){
                                ch2[0]='0'+i1;
                                ch2[1]='0'+i2;
                                ch2[2]='0'+i3;
                                ch2[3]='0'+i4;
                                FindSecretCode(ch, ch2);
                                memset(ch2, 0, 5);
                            }else{
                                for (int i5=1; i5<10; i5++){
                                    ch2[0]='0'+i1;
                                    ch2[1]='0'+i2;
                                    ch2[2]='0'+i3;
                                    ch2[3]='0'+i4;
                                    ch2[4]='0'+i5;
                                    FindSecretCode(ch, ch2);
                                    memset(ch2, 0, 5);
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", o);
    }

    return 0;
}
