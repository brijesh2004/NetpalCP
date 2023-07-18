// revertsort algorith cost
#include<bits/stdc++.h>
using namespace std;
int reversort(vector<int>v){
    int cost = 0;
    for(int i=0;i<v.size()-1;i++){
       int m = *min_element(v.begin()+i,v.end());
       auto x = find(v.begin(),v.end(),m);
       reverse(v.begin()+i,x+1);
       cost +=  distance(v.begin(),x) - i+1;
    }
    return cost;
}
int main(){
int T;
cin>>T;
for(int c = 1;c<T+1;c++){
    int N;
    cin>>N;
    vector<int>v;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
//     for(int i=0;i<N;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

 cout<<"Case #"<<c<<": "<<reversort(v)<<endl;
}
}
