#define vout(msg,x)    cout<<"\n"<<msg;for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <algorithm>    // for_each
#include <vector>       // vector
using namespace std;


int main () {
  int book[12] = {12, 34, 56, 78, 90, 11, 13, 29} ;


  auto result = minmax({123 , 21, 36, 564, 45});
  auto xmin = min( {12,2,3,4,55} ) ;
  auto xmax = max( {"막걸리", "순두부", "소주", "맥주", "순대", "피자" } ) ;
  cout << "\n min(): " << xmin  ;
  cout << "\n max(): " << xmax ;

  cout << "\n minmax(  ): ";
  cout << "\n min= " << result.first << "\n max= " << result.second << '\n';



  return 0;
}
