// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    /*zad 1

    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    */



    /*zad2, 3
   int fahr, celsius;
   int start, limit, krok;

   start = 0;
   limit = 200;
   krok = 20;

   for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
       float celsius = (5.0 / 9.0) * (fahr - 32.0);
       cout << fahr << "\t" << celsius << endl;
   }
   */

   /*zad5
   int fahr, celsius;
   int start, limit, krok;

   start = 0;
   limit = 200;
  krok = 20;

   for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
       float celsius = (5 / 9) * (fahr - 32.0);
       cout << fahr << "\t" << celsius << endl;
   }
   */

   /*zad 6
   int fahr, celsius;
   int start, limit, krok;
   start = 0;

   cout << "wartosc koncowa: ";
   cin >> limit;
   cout << "krok: ";
   cin >> krok;

   for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) {
    float celsius = (5.0 / 9.0) * (fahr - 32.0);
       cout << fahr << "\t" << celsius << endl;
   }
   */
   /*zad 7
   double liczba;

   for (int i = 1; i <= 10; i++) {
       cout << "podaj liczbe rzeczywista: " << endl;
       cin >> liczba;
       if (liczba > 0) {
           cout << "liczba dodatnia: " << liczba << endl;
       }

   }
   */




   /*zad 8

   for (int i = 0; i <=100; i = i +2) {
       cout << i << endl;
   }
   */

   /*zad9

   int n;

   cout << "podaj liczbe, ktora bedzie dzielnikiem: ";
   cin >> n;

   cout << "liczby podzielne przez " << n << " to: " << endl;

   for (int i = 0; i <= 100; i++) {
       if (i % n == 0) {
           cout << i << endl;
       }
   }
   */

   /*zad 10
   int n;
    cout << "podaj liczbe, ktora bedzie dzielnikiem: ";
   cin >> n;
   int counter = 0;

   cout << "ilosc liczb podzielnych przez " << n << " to: ";

   for (int i = 0; i <= 100; i++) {
       if (i % n == 0) {
           counter++;
       }
   }
   cout << counter << endl;
   */
   
 /*zad11

int a, b, min, max;
    
cout << "podaj dwie liczby calkowite: " << endl;
cin >> a;
cin >> b;

if (a > b) {
        max = a;
        min = b;
    }
    else {
        max = b;
        min = a;
    }
for (int i = min; i <= max; i++) {
    if (i % 3 == 0) {
        cout << i << endl;
    }
}
*/

 /*zad 12

double liczba, suma, srednia;
   int n;
   suma=0;

   cout << "podaj ilosc liczb: ";
   cin >> n;

   for (int i=1; i<= n; i++) {
       cout << "podaj " <<i<<" liczbe: "<<endl;
       cin >>liczba;
       suma=suma + liczba;
   }
   srednia = suma/n;
   cout << srednia;
   */

/*zad 13
for (int i = 100; i >= 0; i--) {
    cout << i << endl;
}
*/

/* zad 14
 */
/*
 int a, b, c;

    cout<<"podaj 3 liczby: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a<b && a<c) {
        cout<<"najmniejsza liczba to: "<<a;
        }
        else if (b<a && b<c) {
          cout<<"najmniejsza liczba to: "<<b;
      }
      else  {
          cout<<"najmniejsza liczba to: "<<c;
      }
      */





/*zad15
int n, m, losowa;

cout << "Ile liczb chcesz losowac? ";
cin >> n;

cout << "Podaj granice przedzialu od 0 do...: ";
cin >> m;

for (int i = 1; i <= n; i++) {
    cout << "Losujemy liczbe nr: " << i << ": " << endl;
    losowa = rand() % (m + 1);
    cout << losowa;
}
*/


/*zad16


int numerek, ile, x;
cout << "Podaj twoj szczesliwy numerek z przedzialu od 1 do 10: ";
cin >> numerek;

ile = 0;
for (int i = 1; i <= 10; i++) {
  
    x = rand() % 10 + 1;
    cout << "Losuje " << i << " raz i wyszlo " << x << endl;

    
    if (x == numerek)  ile++;
}

cout << "Twoj numerek byl " << ile << " razy";
*/

       

    

    
    
    


     
    
      
    






















        return 0;
}