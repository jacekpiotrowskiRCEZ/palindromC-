
#include <iostream>

using namespace std;

#include <string>

string slowo;

bool rowne;



int main()

{



    cout << "Podaj s�owo\n";

rowne=true;

    cin >> slowo;



    for( int i=0;i<slowo.length()/2;i++){

            cout<<"\n\n"<<i<<"\t"<<slowo[i]<<"\t"<<slowo[slowo.length()-1-i];

        if (slowo[i]!=slowo[slowo.length()-1-i]){

          rowne=false;

          break;

        }

    }

    if (rowne==false)cout<<"\nS�owo "<<slowo<<" nie jest Palindromem";

    else cout<<"\nS�owo "<<slowo<<"  JEST Palindromem";



}
