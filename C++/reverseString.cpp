#include <iostream>
using std::string;
using std::cout;
using std::cin;

void reverseString(string sentence)
{
  string word;
  int end = sentence.size()-1;
  int start;
  int stop = end;
  for(int i = end; i >= 0; i--)
  {
    if(sentence[i] == ' ')
    {
      start = i+1;
      for(int e = start; e <= stop; e++)
      {
        cout << sentence[e];
      }
      cout << ' ';
      stop = start-2;
    }
  }
  for(unsigned int i = 0; i < sentence.size(); i++)
  {
    if(sentence[i] != ' ')
    {
      cout << sentence[i];
    }
    else
    {
      break;
    }
  }

  cout << '\n';

}

int main()
{
  string sentence;
  getline(cin,sentence);
  reverseString(sentence);
  return 0;
}
