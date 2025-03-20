#include <iostream>
using namespace std;
main(){
   int h[5]={1,2,3,4,5};
   int l=0;
   int maxl=h[l];
   maxl=max(maxl,h[++l]);
   cout<<maxl<<endl;
   

}