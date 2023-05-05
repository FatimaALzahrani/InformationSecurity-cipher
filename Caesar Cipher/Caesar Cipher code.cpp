#include "bits/stdc++.h"
long long a[1000001];
using namespace std;
int main() {
    string ar[26];
    string plainText;
    getline(cin,plainText);
    string ch="abcdefghijklmnopqrstuvwxyz";
    for (int i = 1; i <= 26; ++i) {
        string re="";
        for (int j = 0; j < plainText.length(); ++j) {
            int r= ch.find(tolower(plainText[j]));
            if(plainText[j]==' ')
                re+=' ';
            else
            re+=(ch[(r+i)%26]);
        }
        ar[i-1]=re;
    }
    for (int i = 0; i < 26; ++i) {
        cout <<"key: "<< i+1 << endl;
        cout << ar[i] << endl;
    }
}
//    int a,b,c;
//    cin>>a>>b>>c;
//    int maxm=max(max(a,b),c);
//    int minm=min(min(a,b),c);
//    cout<<maxm-minm;
//}
//    int t,n,k;
//     cin>>t;
//        while(t--){
//            cin>>n;
//            string s="";
//            for (int i = 1; i <= n; ++i) {
//                s+=to_string(i);
//            }
//            cout<<s[n-1]<<endl;
//            }
//        }
//    int a;
//    cin >> a;
//    while (a--) {
//        string b;
//        cin >> b;
//        int t = 0;
//        if (b.length() == 1 || b[b.length() - 1] == '0') {
//            cout << 1 << endl;
//            cout << b << endl;
//        } else {
//            vector<string> v;
//            for (int i = 0; i < b.length(); ++i) {
//                string ne = "";
//                ne += b[i];
//                for (int j = i + 1; j < b.length(); ++j) {
//                    ne += '0';
//                }
//                v.push_back(ne);
//            }
//            map<string,int>str;
//            for (auto ve: v) {
//                string r="";
//                for (int i = 0; i < ve.length(); ++i) {
//                    r+='0';
//                }
//                if (ve==r)
//                    continue;
//                else{
//                    t++;
//                    str.insert({ve,ve.length()});
//                }
//            }
//            for (int i = 0; i < str.size(); ++i) {
//
//            }
//        }
//    }
//}
//________________________________
//int main(){
//    int n;
//    cin>>n;
//    vector<int> ar2;
//    int ar1[n];
//    for (int i = 0; i < n; ++i) {
//        int h,a;
//        cin>>h>>a;
//        ar1[i]=h;
//        ar2.push_back(a);
//    }
//    int sum=0;
//    for (int i = 0; i < n; ++i) {
//        sum+=count(ar2.begin(), ar2.end(),ar1[i]);
//    }
//    cout<<sum;
//}
//______________________________
//using namespace std;
//int main(){
//    int t;
//    cin>>t;
//    int count=0;
//    while (t--){
//        int a,b;
//        cin>>a>>b;
//        if(a>=0 && b>=0)
//            cout<<(a*2)<<endl;
//        else if(a<0 && b<0)
//            cout<<(a*-1)+(b*-1)<<endl;
//        else if((a<0 || b<0)&&(a==0||b==0))
//            cout<<(a*-2)+(b*-2)-1<<endl;
//        else if(a<=0 &&  b>=0)
//            cout<<abs(a)*2 -1<<endl;
//        else if (a>=0 && b<=0)
//            cout<<abs(a)*2 +1<<endl;
//    }
//}
//    string s;
//    cin>>s;
//    map<int,int>val;
//    s+="+";
//    string t="";
//    for (int i = 0; i < s.length(); ++i) {
//        if(s[i]=='+'){
//            val[stoi(t)]++;
//            t="";
//            continue;
//        }
//        t+=s[i];
//    }
//    string re="";
//    for(auto mp : val){
//       while(mp.second) {
//           re += to_string(mp.first) + "+";
//           mp.second--;
//       }
//
//    }
//    cout<<re.substr(0,re.length()-1);
//}
//    string s1,s2,s3;
//    cin>>s1>>s2>>s3;
//    map<char,int> ch;
//    int a='A';
//    for (int i = 0; i < 26; ++i) {
//        ch[a];
//        a++;
//    }
//    map<char,int>mp2=ch;
//    string s4=s1+s2;
//    for (int i = 0; i < s4.length(); ++i) {
//       ch[s4[i]]++;
//    }
//    for (int i = 0; i < s3.length(); ++i) {
//        mp2[s3[i]]++;
//    }
//    cout<<(mp2==ch?"YES":"NO");
//}
//    long long n;
//    cin>>n;
//    int re=0;
//    if(n>=100) {
//        re += n / 100;
//        n = n % 100;
//    }
//    if(n>=20) {
//        re += n/20;
//        n=n%20;
//    }
//    if(n>=10) {
//        re += n/10;
//        n=n%10;
//    }
//    if(n>=5) {
//        re += n/5;
//        n=n%5;
//    }
//    re+=n;
//    cout<<re;
//}


//template<class x>
//using ordered_set = tree<x, null_type,less<x>, rb_tree_tag,tree_order_statistics_node_update>;
//
//#define int long long
//#define endl '\n'
//#define mod 1000000007
////\
//#define mod 1686876991
//signed main () {
//    cin.tie(0)->sync_with_stdio(0);
//    int n;
//    cin >> n;
//    int a[n];
//    bool imp = 0;
//    __int128 x = 1;
//    __int128 bad = ((1ull) << 63) - 1;
//    for (int i = 0 ; i < n ; i++) {
//        cin >> a[i];
//        if (a[i] == 0) {
//            cout << 0 << endl;
//            return 0;
//        }
//        if (!imp) x *= a[i];
//        if (x > bad) imp = 1;
//    }
//    if (imp) cout << -1 << endl;
//    else cout << (unsigned long long)(x) << endl;
//}


//  |__|__|
//  |__|__|

//  |__|__|__|
//  |__|__|__|
//  |__|__|__|




















//
//    int main() {
//        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//        int t;
//        cin>>t;//6
//        while(t--){
//            int n;//3
//            string s;//ABA
//            cin>>n>>s;
//            char ch='A';
//            map<char,int>m;
//            for (int i = 1; i <=26; ++i) {//{(A,2)  (B,1)  (C,0) ... (Z,0) }
//                m.insert({ch,0});
//                ch++;
//            }
//            for (int i = 0; i < n; ++i) {//ABA
//                for (char j ='A'; j <='Z'; ++j) {//
//                    if(s[i]==j) {
//                        m[j]++;
//                        break;
//                    }
//                }
//            }
//            int b=0;
//            for(auto mp:m){
//                if(mp.second>0){
//                    b+=mp.second+1;
//                }
//            }
//            cout<<b<<endl;
//        }
//
//}
//
//
//
//
//
//
//
//
//









//     int tt;
//     cin >> tt;
//     while (tt--) {
//         int n, d;
//         cin >> n >> d;
//         int mx = 1;
//         int mn1 = 100, mn2 = 100;
//         for (int i = 0; i < n; ++i) {
//             int a;
//             cin >> a;
//             if (a > mx) mx = a;
//             if (a <= mn1) {
//                 mn2 = mn1;
//                 mn1 = a;
//             }//
//             else if (a < mn2) {
//                 mn2 = a;
//             }
//         }
//         if (mx <= d) {
//             cout << "YES\n";
//         }//
//         else {
//             if (mn1 + mn2 <= d) cout << "YES\n";
//             else cout << "NO\n";
//         }
//     }
//     return 0;
// }
