#include <iostream>
using namespace std;

class FruitSeller
{
private:
    /* data */
    int APPLE_PRICE;
    int numofapples;
    int mymoney;
public:
    void Initmembers(int price, int num, int money){
        APPLE_PRICE=price;
        numofapples=num;
        mymoney=money;
    }
    int SaleAppels(int money){
        int num=money/APPLE_PRICE;
        numofapples-=num;
        mymoney+=money;
        return num;
    }
    void ShoiwsaleResult(){
        cout<<"남은 사과 : "<<numofapples<<endl;
        cout<<"판매 수익 : "<<mymoney<<endl<<endl;
    }
};

class FruitBuyer{
    int mymoney; //private
    int numofapples; //private
    


public:
    void Initmembers(int money){
        mymoney=money;
        numofapples=0;
    }
    void BuyApples(FruitSeller &seller,int money){
        numofapples+=seller.SaleAppels(money);
        mymoney-=money;
    }
    void ShoiwsaleResult(){
        cout<<"현재잔액 : "<<mymoney<<endl;
        cout<<"사과 개수 : "<<numofapples<<endl<<endl;
    }
};

int main(void) {
	FruitSeller seller;
    seller.Initmembers(1000,20,0);
    FruitBuyer buyer;
    buyer.Initmembers(5000);
    buyer.BuyApples(seller,2000);

    cout<<"과일 판매자의 현황"<<endl;
    seller.ShoiwsaleResult();
    cout<<"과일 구매자 현황"<<endl;
    buyer.ShoiwsaleResult();
	return 0;
}