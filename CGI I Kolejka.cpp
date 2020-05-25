#include <queue>
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
  cout << "ContentType:application/json;charset=UTF-8" << (char)13 << (char)10
      << "\n"
      << "[ \n "
          << "  { \"liczba\":\"1\", \"liczba\":\"2\" }, \n"
          << "  { \"liczba\":\"3\", \"liczba\":\"4\" } \n"
          << "]";
          
        std::queue < int > kolejkaLiczb;
 int liczba = 0;
 std::cout << "Podaj liczbe:\n";
    std::cin >> liczba;
   
    kolejkaLiczb.push( 1 );
    kolejkaLiczb.push( 2 );
    kolejkaLiczb.push( 3 );
    kolejkaLiczb.push( 4 );
    kolejkaLiczb.push( liczba );
    std::cout << "Ostatnia liczba w kolejce to:\n" << kolejkaLiczb.back() << std::endl;
    kolejkaLiczb.back() *= 2;
    std::cout << "Ostatnia liczba w kolejce to:\n" << kolejkaLiczb.back() << std::endl;
 std::cout << "Podaj liczby (wpisz 0 by zakonczyc):\n";
  do {
    std::cin >> liczba;
    kolejkaLiczb.push (liczba);
  } while (liczba);
  std::cout << "Liczby w kolejce: ";
  while (!kolejkaLiczb.empty())
  {
    std::cout << ' ' << kolejkaLiczb.front();
    kolejkaLiczb.pop();
  }
  std::cout << '\n';
fstream plik;
plik.open("c:\\od.txt");
plik<<liczba<<endl;
     plik.close();  
 return 0;
}
