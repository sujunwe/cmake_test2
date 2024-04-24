#include <iostream>
#include "pnc_map.h"

using std::cout, std::endl;

void pncMapTest()
{
    cout << "this is pnc_map test." << endl;
    PNCMap my_map;
    my_map.mapInfo();
}

int main()
{
    pncMapTest();
    
    return 0;
}
