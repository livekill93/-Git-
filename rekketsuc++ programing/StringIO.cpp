#include<iostream>

int main(){
    char name[100];
    char lang[200];
    std::cout<<"what is yuor name? : ";
    std::cin>>name;

    std::cout<<"what is yuor favorite program language? : ";
    std::cin>>lang;

    std::cout<<"my name is "<<name << std:: endl;
    std::cout<<"my favorite program language is "<<lang << std:: endl;
    return 0;
}
