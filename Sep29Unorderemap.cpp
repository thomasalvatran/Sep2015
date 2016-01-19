//
// Compile this example with Visual Studio 2010
// or g++ 4.5 using -std=c++0x
//
#include <iostream>
#include <unordered_map>
#include <string>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

typedef pair<string, string> Name;

int main(){

    map<string, string> telephone_numbers;
    telephone_numbers["Fred Smith"] = "7347829";
    cout << "Number for Fred Smith is " << telephone_numbers["Fred Smith"] << endl;
    telephone_numbers.insert(make_pair("Tovantran", "7326192771"));
    cout << "Number for Tovantran is " << telephone_numbers["Tovantran"] << endl;
    telephone_numbers.insert(pair<string, string>("tovan", "6134151588"));
    cout << "Number for tovan is " << telephone_numbers["tovan"] << endl;

    cout << "-------unordered_map---------" << endl;
    unordered_map<string,float> Stocks;
//    Stocks stocks;
    Stocks["APPL"] = 111.50;
    Stocks["CSCO"] = 66.50;
    Stocks["INTC"] = 22.50;
    Stocks["BABA"] = 120.50;

    cout <<"aapl stock " << Stocks["APPL"] <<" " << sizeof(Stocks) << endl;
    unordered_map<string, float>::iterator pos;
    for (pos = Stocks.begin(); pos != Stocks.end(); pos++)
           cout << pos->first << " " << pos->second << endl;

    cout << "-------map in order---------" << endl;
    typedef map<string, float> Stock;
    Stock stock;
    stock["ALA"] = 2.01;
    stock["PMCS"] = 4.54;
    stock["FB"] = 6.43;
    stock["GPRO"] = 22.55;
    Stock::iterator p;
    for (p = stock.begin(); p != stock.end(); p++)
        cout << p->first << " " << p->second << endl;


    typedef pair<char, int> N;

    std::pair<int,char>(42,'A');
    std::make_pair(42,'B');

    map<char, int> m;
    int i;
    m['A', 11] = 1111;
    m.insert(pair<char, int>('B', 12));
    m.insert(make_pair('C', 13));
    m.insert(make_pair('C', 1313));
    m.insert(N('E', 14));

//    map<N, int> ids;
    map< pair<char, int>, int > ids;   //declaring
    ids[N('C', 14)] = 40000;
    ids[make_pair('D', 444)] = 5000;
//    ids.insert(make_pair('W', 12),3);
    ids.insert(make_pair(make_pair('W',12),333));  //initialize
             //make_pair(make_pair does not work in unordered_map
    cout << ids[make_pair('W', 12)] << endl;       //invoking


    cout << m['A',11] << endl;
    cout << m['B'] << endl;
    cout << m['B', 12] << endl;
    cout << m['C'] << endl;
//    m['C'] = 1212;
     cout << m['C'] << endl;
     m.insert(make_pair('C', 10));
     cout << m['C'] << endl;
}

//
// Compile this example with Visual Studio 2010
// or g++ 4.5 using -std=c++0x
//
//#include <iostream>
//#include <unordered_map>
//#include <string>
//#include <map>
//#include <functional>

//using namespace std;

//typedef pair<string,string> Name;

////typedef string Name;
//size_t name_hash( const Name & name )
//{
//    return hash<string>()(name.first) ^ hash<string>()(name.second); //hash pair
//}
//int main(int argc, char* argv[])
//{
////    unordered_map<Name,int> ids;
//    unordered_map< Name,int,function<size_t( const Name & name )> > ids(100, name_hash );
////    unordered_map<Name,int,function<decltype(name_hash)>> ids(100, name_hash );
//    ids[Name("Mark", "Nelson")] = 40561;
//    ids[Name("Andrew","Binstock")] = 40562;
//    for ( auto ii = ids.begin() ; ii != ids.end() ; ii++ )
//        cout << ii->first.first
//        << " "
//        << ii->first.second
//        << " : "
//        << ii->second
//        << endl;

//        cout << hash<const char*>()("Mark Nelson") << endl;  //no hash< pair<string,string> >

//        return 0;
//}
