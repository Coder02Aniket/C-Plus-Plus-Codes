// https://practice.geeksforgeeks.org/problems/check-if-it-is-possible-to-convert-one-string-into-another-with-given-constraints4116/1
/****
Given two strings S and T, which contains three characters i.e 'A', 'B' and '#' only. Check whether it is possible to convert the first string into another string by performing following operations on string first.
1- A can move towards Left only
2- B can move towards Right only
3- Neither A nor B should cross each other
Note: Moving i'th character towards Left one step means swap i'th with (i-1)'th charecter [ i-1>=0 ]. Moving i'th character towards Right one step means swap i'th with (i+1)'th charecter [ i+1< string's length ]. 
*****/
#include<bits/stdc++.h>



using namespace std;
class Solution {
  public:
    int isItPossible(string S, string T, int M, int N){
    // Logic number 1 Wrong One 
    //     char t ;
    //     int index = 0 , cnt1,cnt2 ;
    //     #A#B# #B#A#
        if(M != N){
            return 0 ; 
        }
    //     for(int i = 0 ;i < M ; i++){
    //         if(S[i]=='#'){
    //             cnt1++;
    //         }
    //         if(T[i]=='#'){
    //             cnt2++;
    //         }
    //     }
    //     if(cnt1!=cnt2){
    //         return 0 ;
    //     }
    //     for(int i  =  0 ; i < T.length() ; i++){
    //         if(T[i]!='#'){
    //             t = T[i];
    //             if(index == S.length()){
    //                 return 0 ;
    //             }
    //             for(; index < S.length() ; index++ ){
    //                 if(S[index] != '#' && S[index] != t){
    //                     return 0 ;
    //                 }
    //                 else if(S[index] == t){
    //                     index++;
    //                     break ;
    //                 }
    //             }
    //         }
    //     }
    //     return 1 ;
    // }
    // Second Logic solved problem by comparing constriants 

        vector<pair<char,int>>Svpair,Tvpair;
        for(int i = 0 ; i < M ; i++){
            if(S[i]!='#'){
                Svpair.push_back(make_pair(S[i],i));

            }
            if(T[i]!='#'){
                Tvpair.push_back(make_pair(T[i],i));
            }
        }
        if(Svpair.size() != Tvpair.size()){
                return 0 ;
        }
        for(int i = 0 ; i < Svpair.size(); i++){
            if(Svpair[i].first != Tvpair[i].first){
                return 0 ; 
            } 
            else if(Svpair[i].first == 'A' && Svpair[i].second < Tvpair[i].second){
                return 0 ;
            }
            else if(Svpair[i].first=='B' && Svpair[i].second > Tvpair[i].second){
                return 0 ;
            }
        }
        return 1 ;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution* ob ;
    cout << ob->isItPossible("#A#B#","#B#A#",5,5);
    
    return 0;
}