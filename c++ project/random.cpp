#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
using namespace std;

int p()
{
ofstream outfile;
outfile.open("ec attendance.txt");
int i;
for(i=0;i<42;++i)
{
    outfile<<rand()%45+1;
}
outfile.close();
return 0;
}
