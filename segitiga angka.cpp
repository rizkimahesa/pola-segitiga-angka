#include <iostream>
using namespace std;
 
int main(){
    int nilai, a, b, c;
    cin >> a;
          for(nilai = 1; nilai <= a ; nilai++){
              for(b = 2; b <= nilai ; b++){
              cout<<"  ";
              }
              for(c = a; c >= nilai ; c--){
              cout<< c <<" ";
              }
              cout << endl;
              }
      return 0;
}
