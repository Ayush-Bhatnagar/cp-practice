#include<bits/stdc++.h>
using namespace std;

string getUnique(string t)
{
    int i, n;
    n = t.size();
    string ans;
    char ch = t[0];
    ans.push_back(ch);
    for(i=1;i<n;i++) {
        if(t[i]!=ch) {
            ch = t[i];
            ans.push_back(t[i]);
        }
    }
    //cout<<t<<" "<<t.size() <<" =>unique: "<<ans<<" "<<ans.size()<<"\n";
    return ans;
}

void solve()
{
    string s, p;
    cin>>s>>p;
    int slen, plen, i;
    slen = s.size();
    plen = p.size();
    //cout<<"s: "<<s<<"\n";
    //cout<<"p: "<<p<<"\n";
    unordered_map<char, int> umap;
    for(i=0; i<plen; i++)
    {
        umap[p[i]]++;
    }
    string trim;
    for(i=0;i<slen;i++)
    {
        if(umap[s[i]]) {
            --umap[s[i]];
        }
        else {
            trim.push_back(s[i]);
        }
    }
    int tlen = trim.size();
    string punique = getUnique(p);
    int pulen = punique.size();
    //cout<<"pulen "<<pulen<<"\n";
    sort(trim.begin(), trim.end());
    //cout<<"trim: "<<trim<<"\n";
    int pos = -1;
    int strt = 0;
    while(strt<tlen)
    {
        if(trim[strt] < punique[0]) {
            strt++;
        }
        else if(trim[strt] == punique[0]) {
            if(pulen==1) {
                pos=strt;
                break;
            }
            else if(trim[strt] < punique[1]) {
                strt++;
            }
            else if(trim[strt] > punique[1]) {
                pos = strt;
                break;
            }
        }
        else if(trim[strt] > punique[0]) {
            pos = strt;
            break;
        }
    }
    string ans = "";
    if(pos==-1) {
        ans.append(trim);
        ans.append(p);
    }
    else {
        string begin = trim.substr(0, pos);
        string end = trim.substr(pos);
        ans.append(begin);
        ans.append(p);
        ans.append(end);
        //cout<<"begin: "<<begin<<"\n";
        //cout<<"end: "<<end<<"\n"; 
    }
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}