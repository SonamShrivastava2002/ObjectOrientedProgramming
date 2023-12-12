#include <bits/stdc++.h>
using namespace std;
template <typename key,typename val>
class Map{
    private:
        map<key,val>mp;
    public:
        void insert(key k,val v){
            mp[k] = v;
        }
        val print(key k){
            return mp[k];
        }
};