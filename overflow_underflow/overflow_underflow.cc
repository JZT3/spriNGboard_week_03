#include <iostream>
#include <limits.h>

using namespace std;

int main ()
{
  {
    int32_t s = 0;
    uint32_t u = 0;


    cout << "32-bit before decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    s--;
    u--;

    cout << "32-bit after decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }

  {
    int16_t s = INT_MAX;
    uint16_t u = UINT_MAX;

    cout << "32-bit --> 16-bit conversion:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    s++;
    u++;

    cout << "16-bit after increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }
}

