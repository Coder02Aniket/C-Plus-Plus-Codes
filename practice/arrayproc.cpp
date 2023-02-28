#include <bits/stdc++.h>
using namespace std ;

int processArray(std::vector<int> &array)
{
  /*
   * Do not make any changes outside this function.
   *
   * Modify this function to process `array` as indicated
   * in the question. At the end, return the length of the
   * array.
   *
   * Do not print anything in this function
   * Do not write anything to the standard output
   *
   * Submit this entire program (not just this function)
   * as your answer
   */
  // int first_ele = 0;
  int count = 0;
  
  for(int i = 0 ; i < array.size() ; i++){
      if(array[i]>= 100){

        if(count>=1){
            array.erase(array.begin()+i) ;
            i--;
          }
         count++ ;
      }
      else{
        count = 0 ;
      }
  }

}

int main(void)
{
  std::vector<int> array;
  int val;
  while (std::cin >> val)
  {
    if (val < 0)
      break;
    array.push_back(val);
  }
  int new_len = processArray(array);
  for (std::vector<int>::iterator a = array.begin(); a != array.end(); a++)
  {
    std::cout << *a << std::endl;
  }
  return 0;
}
