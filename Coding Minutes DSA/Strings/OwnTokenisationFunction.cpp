#include<iostream>
#include<cstring>


using namespace std;

char *mystrtok(char *str, char delim){
    static char *input = NULL ;
    if(str != NULL){
        input = str ;
    }
    char *token = new char[strlen(input)+1] ;

}
int main(){
    mystrtok("aniket",'\0') ;
    return 0;
}