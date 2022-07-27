#include<iostream>

int main(){
    int n1,n2,n3,n4,n5;
    //Q1
    std::cout<<"input the 1st number : ";
    std::cin>>n1;
    std::cout<<"input the 2nd number : ";
    std::cin>>n2;
    std::cout<<"input the 3rd number : ";
    std::cin>>n3;
    std::cout<<"input the 4th number : ";
    std::cin>>n4;
    std::cout<<"input the 5th number : ";
    std::cin>>n5;
    int result=n1+n2+n3+n4+n5;
    std::cout<<"result sumof all number : "<<result<<std::endl;
 	//Q2
 	char pnum[40];
 	char name[100];
 	
 	std::cout<<"what is yuor name? ";
    std::cin>>name;
    std::cout<<"what is yuor telephone? ";
    std::cin>>pnum;
    std::cout<<"your name is "<<name<<"and your telephone number is "<<pnum<<std::endl;
    //Q3
    int numb;
    
    std::cout<<"number? : ";
    std::cin>>numb;
    std::cout<<numb<<" x 1 = "<<numb*1<<std::endl;
    std::cout<<numb<<" x 2 = "<<numb*2<<std::endl;
    std::cout<<numb<<" x 3 = "<<numb*3<<std::endl;
    std::cout<<numb<<" x 4 = "<<numb*4<<std::endl;
    std::cout<<numb<<" x 5 = "<<numb*5<<std::endl;
    std::cout<<numb<<" x 6 = "<<numb*6<<std::endl;
    std::cout<<numb<<" x 7 = "<<numb*7<<std::endl;
    std::cout<<numb<<" x 8 = "<<numb*8<<std::endl;
    std::cout<<numb<<" x 9 = "<<numb*9<<std::endl;
    
    //Q4
    int money;
    
    std::cout<<"how many sell due?(-1 to end) : ";
    	std::cin>>money;
    while(money!=-1){
		std::cout<<"This month is "<<money*0.12+50<<"$"<<std::endl;
		std::cout<<"how many sell due?(-1 to end) : ";
		std::cin>>money;
	}
	std::cout<<"Program end";
    
    
    
}
