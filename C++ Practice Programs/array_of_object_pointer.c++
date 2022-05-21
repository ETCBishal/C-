#include <iostream>
using namespace std;

class shopItem{
    int itemId, itemPrice;
    public:
        void setData(int id, int price){
            itemId  = id;
            itemPrice = price;
        }

        void getData(void){
            cout<<endl<<"Item ID : "<<itemId<<endl;
            cout<<"Item Price : "<<itemPrice<<endl;
        }
};

int main()
{
    int size = 3;
    int i,ItemID,ItemPrice;
    shopItem *ptr = new shopItem[size];
    shopItem *tempPtr = ptr;

    for (i = 0; i < size; i++)
    {
        cout<<"Enter the Id and the price of the item No."<<i+1<<endl<<"> ";
        cin>>ItemID>>ItemPrice;
        ptr ->setData(ItemID,ItemPrice);
        *ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout<<endl<<"For item "<<i+1<<endl;
        
        tempPtr ->getData();
        *tempPtr++;
    }
    
    
    

    return 0;
}