#include<iostream>


using namespace std;


int main(){
   
    /**for symmetric patterns rows == columns**/
    int n;
    cin>>n;
    int i = 1, j;
     //pat 1
  /*  while(i<=n){
        j  = 1;
        while (j <=n)
        {
            cout<<"*";

            j += 1;
        }
        cout<<endl;
        i += 1 ;
    }*/
    //pat 2
    /*while(i<=n){
        j = 1;
        while(j<=n){
            cout<<i; // as we are going to print row no 
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
    */
    //pat 3
    //video 2
    /****1234
         1234
         1234*****/
    /*while(i<=n){
        j = 1;
        while(j <= n){
            cout<<j;
            j += 1;
        }
        cout<<endl;
        i += 1;

    }*/
    //pat4 4321 4321 4321
    /*    while(i<=n){
        j = 1;
        while(j <= n){
            cout<<n-j+1;
            j += 1;
        }
        cout<<endl;
        i += 1;

    }*/
    // pat 5 
    int count = 1;
    /*  while(i<=n){
        j = 1;
        while(j <= n){
            cout<<count<<" ";
            j += 1;
            count += 1;
        }
        cout<<endl;
        i += 1;

    }*/
    //pat 6
    /*    while(i<=n){
        j = 1;
        while(j <= i){
            cout<<"*";
            j += 1;
        }
        cout<<endl;
        i += 1;

    }*/
    //pat 7
    /*while(i<=n){
        j = 1;
        while(j <= i){
            cout<<i;
            j += 1;
        }
        cout<<endl;
        i += 1;

    }*/
    //pat 8
        /*while(i<=n){
        j = 1;
        while(j <= i){
            cout<<count<<" ";
            count += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;

    }*/
    //pat 9
    /*  while(i<=n){
        j = 1;
       //count = i;
        while(j <= i){
            cout<<i+j-1<<" ";//without using second variable
           // count += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;

    }*/
    //pat 10
 /*   while(i<=n){
        j = 1;
       count = i;
        while(j <= i){
            cout<<count<<" ";//without using second variable without count:use i-j+1
           count -= 1;
            j += 1;
        }
        cout<<endl;
        i += 1;

    } */
    //pat 11
 /* while(i<=n){
        j = 1;
        while(j <= n){
            char ch ='A'+ j - 1;//for ABC ABC ABC use j and for AAA BBB CCC use i
            cout<<ch<<" ";//
            j += 1;
        }
        cout<<endl;
        i += 1;

    }*/
    //pat 12
    char ch ='A';
/*  while(i<=n){
        j = 1;
       
        while(j <= n){
            cout<<ch<<" ";
            ch += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;

    }
*/
//pat 13 ABC BCD CDE
  /*while(i<=n){
        j = 1;
        ch = 'A' + i + j - 2 ;
        
        while(j <= n){
            cout<<ch<<" ";
            ch += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;

    }
  */
//pat 14 A BB CCC
   /* while(i<=n){
        j = 1;
       
        while(j <= i){
            cout<<ch<<" ";
            j += 1;
        }
        ch += 1;
        cout<<endl;
        i += 1;

    }*/
//pat 15 A BC DEF GHIJ
/*while(i<=n){
        j = 1;
        
        while(j <= i){
            cout<<ch<<" ";
            ch += 1;
            j += 1;
        }
        cout<<endl;
        i += 1;

    }
*/
//pat 16 A BC CDE DEFG
/*while(i<=n){
        j = 1;
        ch = 'A' + i + j -2;//formula
        while(j <= i){
            cout<<ch<<" ";
            ch += 1;
            j += 1;
        }

        cout<<endl;
        i += 1;

    }   
*/
//pat 17 D CD BCD ABCD
/*while(i<=n){
        j = 1;
        ch = 'A' + n - i;//formula
        while(j <= i){
            cout<<ch<<" ";
            ch += 1;
            j += 1;
        }

        cout<<endl; 
        i += 1;

    } 
//pat 18 using spaces 
/*
    *
   **
  ***
 ****
*/
while(i<=n){
        j = 1;
        int space = n - i;
        while(space){
            cout<<" ";
            space -= 1;

        }
        
        while(j <= i){
            cout<<'*';
            j += 1;
        }
        cout<<endl;
        i += 1;

    }

//homework

/*while(i<=n){
        j = 1;
        int space = 1;
        while(space <= i){
            cout<<" ";
            space += 1;

        }
        
        while(j <= n-i+1){
            cout<<i;//just print space to print 1 1 1 1 1 
                                            //    2 2 2
            j += 1;
        }
        cout<<endl;
        i += 1;

    }*/


    return 0;
}


