#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;


class BillChanger{
    public:
        int getNum25CentCoins (int dollarAmount){
            if(dollarAmount>=25){
            while(dollarAmount>=25){
                ++num25CentCoins;
                dollarAmount-=25;
                }
            remainingAmount%=25;
            }
        return num25CentCoins;
        }
    
    
        int getNum10CentCoins (int dollarAmount){
            if(dollarAmount>=10){
                while(dollarAmount>=10){
                    ++num10CentCoins;
                    dollarAmount-=10;
                }
                remainingAmount%=10;
            }
        return num10CentCoins;
        }
    
    
        int getNum5CentCoins (int dollarAmount){
            if(dollarAmount>=5){
                while(dollarAmount>=5){
                    ++num5CentCoins;
                    dollarAmount-=5;
                }
                remainingAmount%=5;
            }
        return num5CentCoins;
        }
    
        int getNum1CentCoins (int dollarAmount){
            if(dollarAmount>=1){
                while(dollarAmount>=1){
                    ++num1CentCoins;
                    dollarAmount-=1;
                }
                remainingAmount%=1;
            }
        return num1CentCoins;
        }
    
    
        void calculateChange(int dollarAmount, int option){
            remainingAmount = dollarAmount;
            if(option == 1){
                cout<<"Número de monedas de 25 ctv: "<<getNum25CentCoins(remainingAmount)<<endl;
                cout<<"Número de monedas de 10 ctv: "<<getNum10CentCoins(remainingAmount)<<endl;
                cout<<"Número de monedas de 5 ctv: "<<getNum5CentCoins(remainingAmount)<<endl;
                cout<<"Número de monedas de 1 ctv: "<<getNum1CentCoins(remainingAmount)<<endl;
                
            }
            if(option == 2){
                cout<<"Número de monedas de 10 ctv: "<<getNum10CentCoins(remainingAmount)<<endl;
                cout<<"Número de monedas de 5 ctv: "<<getNum5CentCoins(remainingAmount)<<endl;
                cout<<"Número de monedas de 1 ctv: "<<getNum1CentCoins(remainingAmount)<<endl;
                
            }
            if(option == 3){
                cout<<"Número de monedas de 5 ctv: "<<getNum5CentCoins(remainingAmount)<<endl;
                cout<<"Número de monedas de 1 ctv: "<<getNum1CentCoins(remainingAmount)<<endl;
                
            }
            
            
        }
    
    private:
        int num25CentCoins = 0;
        int num10CentCoins = 0;
        int num5CentCoins = 0;
        int num1CentCoins = 0;
        int remainingAmount;
};

void monedaMenu();
int main(){
    double dollarAmountFromUser;
    int changeOption;
    
    cout<<"Bienvenido al cambiador de dinero en monedas de $0.25, $0.10, $0.05, $0.01";
    monedaMenu();
    
    BillChanger billChanger;
    // Get dollar amount from the user
    cout<<endl<<endl<<"Introduca la cantidad de dinero que desea comvertir: "<<endl;
    cin>> dollarAmountFromUser;
    // Get change option from the user
    cout<<"Con que opción desea convertir:"<<endl;
    cout<<"\t1. Moneda más alta de 0.25 ctv"<<endl;
    cout<<"\t2. Moneda más alta de 0.10 ctv"<<endl;
    cout<<"\t3. Moneda más alta de 0.05 ctv"<<endl;
    cout<<"Opcion número: ";
    cin >> changeOption;
    // Calculate the number of each type of coin.
    
    billChanger. calculateChange(dollarAmountFromUser, changeOption);
    
    return 0;
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main2() {
    const double EPSILON = 1.0E-10; //    1/10000000000
    double dollarInput;
    double dollDivision;
    
    cin >> dollarInput;
    cout<< "dollarInput = " << dollarInput << endl;
    dollDivision = dollarInput /.01;
    
    bool res = fabs(round(dollDivision) - dollDivision) < EPSILON;
    cout << boolalpha << res << endl;
    cout << fixed << setprecision(30) <<  "dollDivision = " << dollDivision << endl;
    cout << "round(dollDivision) = " << round(dollDivision) << endl;
    cout << "EPSILON = " << EPSILON << endl;
    return 0;
}




void monedaMenu(){
    cout<<endl<<endl;;
//cout<<"    ________________________________";
cout<<"\t|#######====================#######|"<<endl;
cout<<"\t|#(1)*UNITED STATES OF AMERICA*(1)#|"<<endl;
cout<<"\t|#**          /===\\   ********  **#|"<<endl;
cout<<"\t|*# {G}      | (') |             #*|"<<endl;
cout<<"\t|#*  ******  | /v\\ |    O N E    *#|"<<endl;
cout<<"\t|#(1)         \\===/            (1)#|"<<endl;
cout<<"\t|##=========ONE DOLLAR===========##|"<<endl;
//cout<<"------------------------------------";
   
    
}
