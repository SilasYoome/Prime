#include <iostream>

using namespace std;

int Prime(int);
int main()
{
   int PrimeNUM = 107,NoPrimeNUM = 88;
   cout << PrimeNUM ;
   Prime(PrimeNUM) ;
   cout << endl << NoPrimeNUM;
   Prime(NoPrimeNUM);
   
   return 0;
}
int Prime(int P)
{
    int i;
    for(i=2;i < P;i++)
    {
        if(P % i == 0)
        {
            cout << " is Not Prime.";
            break;
        }    
    }
    if(i == P) cout << " is Prime.";
    
    return 0;
}