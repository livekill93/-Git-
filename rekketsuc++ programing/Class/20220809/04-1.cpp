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
        if(money<0){
        cout<<"잘못된 정보가 전달되어 판매를 취소합니다."<<endl;
        return 0;
        }
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
    private:
    int mymoney; //private
    int numofapples; //private
    
public:
    void Initmembers(int money){
        mymoney=money;
        numofapples=0;
    }
    void BuyApples(FruitSeller &seller,int money){
        if(money<0){
            cout<<"잘못 전달된 정보로 인해 구매를 취소할꺼다."<<endl;
            return ;
        }
        numofapples+=seller.SaleAppels(money);
        mymoney-=money;
    }
    void ShoiwsaleResult() const{
        cout<<"현재 잔액 : "<<mymoney<<endl;
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