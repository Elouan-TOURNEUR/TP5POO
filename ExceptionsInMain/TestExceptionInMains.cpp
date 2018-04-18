#include <iostream>
#include <iomanip>
#include "CstCodErr.h"
#include "CException.h"
using namespace std;
namespace nsUtil {



string testExceptionsInMain(char ch)
{

    CException exception3 ("exceptionQuelconque", 200) ;
    CException exception4 ("444" , 222) ;
    if (ch == 'a')
        throw exception() ;
    if (ch == 'b')
    {
     string s ;
     cout << s.at(0) ;
    }
    if (ch == 'c')
        throw exception3 ;
    else
        throw exception4 ;
}



}


