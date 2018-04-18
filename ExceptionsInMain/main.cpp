#include <iostream>
#include "TestExceptionInMains.cpp"
using namespace std;
using namespace nsUtil;
int main()
{
    try
    {
        char ch ;
        cout << "Saisir a, b, c, ou d" << endl ;
        cin >> ch ;
        testExceptionsInMain(ch) ;
        return KNoExc ;
    }
    catch (const CException & e)
    {
        cerr << "Libelle : " << e.getLibelle() << '\n'
             << "code : " << e.getCodErr() << '\n' ;
        return e.getCodErr() ;
    }
    catch (const out_of_range & e)
    {
       cerr << "Exception hots limites " << e.what() << '\n' ;
       return KExcStd ;
    }
    catch (const exception & e)
    {
        cerr << "Exception de type exception" << endl ;
    }
    catch (int e)
    {
        cerr << "erreur de type entier" << endl ;
    }


}
