#include<iostream>

using namespace std;

int taxCalculated(double salesAmount){

    const double stateTaxRate = .04;
    const double countyTaxRate = .02;

    double stateTax = salesAmount * stateTaxRate;
    double countyTax = salesAmount * countyTaxRate;
    double totalTax = stateTax + countyTax;
    double totalProfit = salesAmount - (stateTax + countyTax); 

    cout << "Sales = $" << salesAmount << endl
         << "State Tax = $" << stateTax << endl
         << "County Tax = $" << countyTax << endl
         << "Total Tax = $" << totalTax << endl
         << "Total Profit = $" << totalProfit;


    return 0;
}

int main(){

    taxCalculated(95000);
    return 0;
}