#include<iostream>
#include<string>
using namespace std;
int findCharacterPosition(string  sentence,char character){
    int position=-1;
    int leng=sentence.length();
    cout<<"The lenght of the entered sentence is"<<leng<<"\n";
    for(int i=0; i<=leng; i++){
        if(sentence[i]==character){
            position=i+1;
            break;
        }
    }
    return position;
    
}
int main(){
    string sentence;
    cout<<"Enter the sentence:";
    getline(cin,sentence);
    char character='c';
    int position=findCharacterPosition(sentence, character);
    if(position!=-1){
        cout<<"The character "<<character<<" is found at positon "<<position;
    }
    else{
        cout<<"The character "<<character<<" is not found:";

    }
}