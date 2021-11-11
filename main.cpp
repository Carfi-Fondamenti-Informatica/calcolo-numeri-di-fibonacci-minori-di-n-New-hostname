#include <iostream>
using namespace std;

int main() {
   
   int n = 0, primo = 1, secondo = 1, somma = 0, i = 0;
   
   cin >> n;
   
   cout << primo << endl;
   cout << secondo << endl;
   
   for(i = 0; i < n; i++)
   {
      somma = primo + secondo;
      primo = secondo;
      secondo = somma;
      
      cout << somma << endl;
   }
   return 0;
}
