#include <iostream>
#include <vector>
using namespace std;
main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    cout<<"Reverse vector : "<<endl;
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

}
    