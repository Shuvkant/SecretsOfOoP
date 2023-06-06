#include<iostream>
int main(){
    char name[50];
    std::cout<<"Enter your name:";
    std:: cin.getline(name, sizeof(name));
    // std ::cin>>name;
    std:: cout<<"Hello, "<<name<<"!\n";
    int age;
    std::cout<<"Enter your age:";
    std::cin>>age;
    std:: cout<<"your age is:"<<age;
    int roll;
    std:: cout<<"\nEnter your rollno";
    std:: cin>>roll;
    std::cout<<"Your roll no is :"<<roll;
    char address[50];
    std::cout<<"Enter your address:";
    std:: cin.getline(address, sizeof(name));

return 0;
}