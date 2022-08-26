#include <bits/stdc++.h>
using namespace std;

//creating bool function for returning true or false values

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second == b.second ? a.first < b.first : a.second < b.second;
}

vector<pair<int, int>> sortmap(unordered_map<int, int>& mp){
    vector<pair<int, int>> v;
    
    for(auto& p: mp)
        v.push_back(p);
        
    sort(begin(v), end(v), cmp);
    return v;
}

int main()
{
	unordered_map<int,int>mp;
    
    //declaring size of an array
    int size;
    
    //taking input of size of an array
    cin>>size;
    
    //declaring a as array elements and b as frequencies in an array
    int a, b;
    
    for(int i=0; i<size; i++){
        cin>>a>>b;
        mp[a] = b;
    }
    //for sorting array in order of increasing values
    
    vector<pair<int, int>> result = sortmap(mp);
    
    //declaring auto for initialising data type
    
    for(auto& x: result){
    	//printing out keys and values with frequencies
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}