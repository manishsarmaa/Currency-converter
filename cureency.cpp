#include<iostream>
using namespace std;

void currencyConvert(int value){
    float ruppee;
    cout<<"Enter how much Ruppee you have\t";
    cin>>ruppee;
    switch (value)
    {
    case 1:
        cout<<"Euro(EUR) value of "<<ruppee<<" ruppee is "<<(ruppee*0.011)<<endl;
        break;
    
    case 2:
        cout<<"Pound Sterling(GBP) value of "<<ruppee<<" ruppee is "<<(ruppee*0.00941)<<endl;
        break;
    
    case 3:
        cout<<"Australian Dollor(AUD) value of "<<ruppee<<" ruppee is "<<(ruppee*0.018)<<endl;
        break;
    
    case 4:
        cout<<"Canadian Dollor(CAD) value of "<<ruppee<<" ruppee is "<<(ruppee*0.016)<<endl;
        break;
    
    case 5:
        cout<<"Swiss Franc(CHF) value of "<<ruppee<<" ruppee is "<<(ruppee*0.010)<<endl;
        break;
    
    case 6:
        cout<<"Dollar (USD) value of "<<ruppee<<" ruppee is "<<(ruppee*0.012)<<endl;
        break;
    
    default:
        cout<<"Enter Valid Input....."<<endl;
        break;
    }
}

int main(){
    cout<<"Currency Convertor..."<<endl;
    int userInput , select;
    again:
        cout<<"Select option....."<<endl;
        cout<<"1.Ruppee to Euro(EUr)\n";
        cout<<"2.Ruppee to Pound Sterling(GBP)\n";
        cout<<"3.Ruppee to Australian Dollor(AUD)\n";
        cout<<"4.Ruppee to Canadian Dollor(CAD)\n";
        cout<<"5.Ruppee to Swiss Franc(CHF)\n";
        cout<<"6.Ruppee to Dollar(USD)\n";
        cin>>userInput;
        cout<<"\n";
        currencyConvert(userInput);
        cout<<"\n";
    //add lable to continue in loop
    cout<<"If you want to continue then enter 1 else 0"<<endl;
    cin>>select;
    if(select == 1){
        goto again;
    }
    else{
        cout<<"Thanks.....";
    }

  
}