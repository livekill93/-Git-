#include<iostream>
#include<cstring>
//성명
//회살이름
//전화번호
//직급
using namespace std;

namespace COMP_POS{
    enum{
            CLERK,SENIOR,ASSIST,MANAGER
        };
        void ShowPositionInfo(int pos){
            switch(pos){
                case CLERK:
                    cout<<"사원"<<endl;
                    break;
                case SENIOR:
                    cout<<"주임"<<endl;
                    break;
                case ASSIST:
                    cout<<"대리"<<endl;
                    break;
                case MANAGER:
                    cout<<"과장"<<endl;
                    
            }
            
        }
}

class NameCard{

    private:
        char * name;
        char * company;
        char * tel;
        int position;        
    public:
        NameCard(char * _name, char * _company, char * _tel, int pos)
            :position(pos){
                name = new char[strlen(_name)+1];
                company = new char[strlen(_company)+1];
                tel = new char[strlen(_tel)+1];
                strcpy(name,_name);
                strcpy(company,_company);
                strcpy(tel,_tel);
                                
            }
        void ShowNameCardInfo(){
            cout<<"이름: "<<name<<endl;
            cout<<"회사: "<<company<<endl;
            cout<<"전화번호: "<<tel<<endl;
            cout<<"직급: "; COMP_POS::ShowPositionInfo(position);
            cout<<"출력완료"<<endl;

        }   
        ~NameCard(){
            delete []name;
            delete []company;
            delete []tel;
        } 
};

int main(){
    NameCard manCLERK("LEE","ABCeng","010-1111-2222",COMP_POS::CLERK);
    NameCard manSENIOR("HONG","Orangeeng","010-3333-4444 ",COMP_POS::SENIOR);
    NameCard manASSIST("LEE","ABCeng","010-5555-6666",COMP_POS::ASSIST);
    manCLERK.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manASSIST.ShowNameCardInfo();
    return 0;
}    


