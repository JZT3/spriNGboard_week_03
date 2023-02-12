#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  //
  // Output the header lines.
  //

  cout << setw(5) << "";
  for (int32_t denom=-5; denom<=5; ++denom) {
    cout << setw(11) << showpos << denom;
  }
  cout << endl;

  cout << setfill('-') << setw(5) << "";
  for (int32_t denom=-5; denom<=5; ++denom) {
    cout << setfill('-') << setw(11) << "";
  }
  cout << endl;
  cout << setfill(' '); // need to reset the fill character

  //
  // Fill in the table rows.
  //

  for (float numer=-5; numer<=5; ++numer)
  {
    cout << setw(3) << showpos << static_cast<int>(numer) << ": ";
    for (float denom=-5; denom<=5; ++denom)
    {
      float result = numer/denom;
      cout << setw(11) << showpos << scientific << setprecision(3) << result;
    }
    cout << endl;
  }
}

