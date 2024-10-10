#include<iostream>
using namespace std;
int main()
{
    char input;
    cout<<"Enter the input"<<endl;
    cin>>input;
    if(input>=0 && input<=9)
    {
        cout<<"Input is number"<<endl;
    }
    else if((input>='A' && input<='Z')||(input>='a' && input<='z'))
    {
        cout<<"Input is a word/character/Sentence"<<endl;
    }
    else
    {
        cout<<"Input is a Symbol"<<endl;
    }
}
