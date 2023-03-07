#include <iostream>
using namespace std;

int main()
{
  string teammate1 = "Joe";
  string teammate2 = "Richard";

  int i;
  cout << "Enter how many times you wanna see the  team!";
  cin >> i;

  for (int j; j < i; j++)
  {
    cout << "Our Team is " + teammate1 + " and " + teammate2 + "!";
  }
  return 0;
}