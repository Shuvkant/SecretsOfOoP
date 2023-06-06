#include<iostream>
#include<string>
using namespace std;
int findCharacterPosition(char sentence[], char character){
    int position=-1;
    int length=strlen(sentence);
    cout<<"The length of sentence is "<<length<<"\n";

        for(int i =0; i<length; i++){
            if(sentence[i]==character){
                position=i+1;
                break;
            }
        }
        return position;
}
int main(){
    char sentence[60];
    cout<<"Enter the sentence having the character c  in it:";
    cin.getline(sentence, 60);
    char character ='c';
    int position =findCharacterPosition(sentence, character);
    if(position!=-1){
       cout<<"The character "<<character<<"is found at position "<<position<<"\n";

    }

    else{
        cout<<"The character "<<character<<" is not found in the sentence\n";
    }
}