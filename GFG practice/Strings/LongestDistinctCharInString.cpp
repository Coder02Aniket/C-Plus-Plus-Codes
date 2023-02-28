#include<iostream>
#include<unordered_set>


using namespace std;

int longestSubstringDistinctChars(string s){
    unordered_set<char> uset ;

    int size_of_str = s.size() ;
    int t_count = 0 ;
    int fin_count = 1;
    
    for(int i = 0  ;  i < size_of_str ; i++){
        if(uset.find(s[i]) == uset.end()){
            uset.insert(s[i]);
            t_count++;
        }
        else{
            uset.clear() ;
            t_count = 0 ;
        }
        fin_count = max(t_count,fin_count);
    }
    uset.clear() ;
    return fin_count ;
}
int main(){
    string a  = "aniketshankarnangare";
    // cin >> a ;
    cout << longestSubstringDistinctChars(a) ;

    
    return 0;
} 