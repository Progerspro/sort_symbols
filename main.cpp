#include <iostream>

using namespace std;

void s_symbols(char *symbols);
const int MAX = 10;
int main()
{
   char symbols[MAX] = {'a','j','s','b','e','t','u','z','m','{'};
    s_symbols(symbols);
     for(int a = 0; a < MAX; a++)
         cout << symbols[a] << endl;
    return 0;
}

void s_symbols(char *symbols)
{
    int sym;
    int symp1;
    for(int a = 0; a < MAX; a++)
    {
        for(int b = 0; b < MAX; b++)
        {
            sym = symbols[b];
            symp1 = symbols[b + 1];
            if(sym > symp1)
            {
                symbols[b + 1] = sym;
                symbols[b] = symp1;
            }
    }
}
}
