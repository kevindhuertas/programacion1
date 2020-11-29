
class BillChanger{
    public:
        int getNum25CentCoins (){
        return num25CentCoins;
        }
    
        int getNum10CentCoins (){
        return num10CentCoins;
        }
    
        int getNum5CentCoins (){
        return num5CentCoins;
        }
    
        int getNum1CentCoins (){
        return num1CentCoins;
        }
    
        void calculateChange(float dollarAmount, int option){
        }
    
    private:
        int num25CentCoins;
        int num10CentCoins;
        int num5CentCoins;
        int num1CentCoins;
};


int main(){
    double dollarAmountFromUser;
    int changeOption;
    
    cout<<
    
    BillChanger billChanger;
    // Get dollar amount from the user
    
    cin >> dollarAmountFromUser;
    // Get change option from the user
    
    cin >> changeOption;
    // Calculate the number of each type of coin.
    
    billChanger. calculateChange(dollarAmountFromUser, changeOption);
}


//Un pequeno programa para poder validar el ingreso del dinero ... revisar el codigo y implementarlo en el deber:)
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int otroMain(int argc, char** argv) {
    const double EPSILON = 1.0E-10; //    1/10000000000
    double dollarInput;
    double dollDivision;
    
    cin >> dollarInput;
    cout << "dollarInput = " << dollarInput << endl;
    dollDivision = dollarInput /.01;
    
    bool res = fabs(round(dollDivision) - dollDivision) < EPSILON;
    cout << boolalpha << res << endl;
    cout << fixed << setprecision(30) <<  "dollDivision = " << dollDivision << endl;
    cout << "round(dollDivision) = " << round(dollDivision) << endl;
    cout << "EPSILON = " << EPSILON << endl;
    return 0;
}
