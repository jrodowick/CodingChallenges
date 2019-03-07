#include <iostream>
using std::string;
using std::cout;
using std::cin;

void reverseString(string sentence)
{
  int end = sentence.size()-1;
  int start;
  int stop = end;
  /*
  First set of for loops starts from end and
  prints all words except for first
  */
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
  /*
  This for loop prints to first word since
  moving backwards wont detect a space at the
  start of the sentence
  */
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
