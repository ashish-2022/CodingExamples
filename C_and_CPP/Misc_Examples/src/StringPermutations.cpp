#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


void permute(string str)
{
  // Sort string in ascending order.
  sort(str.begin(), str.end());

  // Print next permutation till there exists one.
  do
  {
    cout << str << "\n";
  } while(next_permutation(str.begin(), str.end()));  
}


void permuteBasic(string str, string out)
{
  // When size of str becomes 0, out has a permutation
  // Length of out is n
  if(str.size() == 0)
  {
    cout << out << endl;
    return;
  }

  // Length of string
  int len = str.size();
  // One by one move each char from beginning of str to begining of out
  for(int i=0; i<len; i++)
  {
    // Remove first char from str and append to out
    permuteBasic(str.substr(1), out + str[0]);

    // rotate char's of string such that 2nd char becomes first and
    // first becomes last: ABCD => BCDA
    rotate(str.begin(), str.begin()+1, str.end());
  }
}

int main()
{
  string str, outStr;
  cout << "Enter String:\n";
  cin >> str;
  cout << "Possible permutations:\n";
  //permute(str);

  permuteBasic(str, outStr);
  return 0;
}

