/*
Q9. FULLY AUTOMATIC VENDING MACHINE – dispenses your cup on just press of button. A vending
machine can serve range of products as follows:
Coffee
Espresso Coffee
Cappuccino Coffee
Latte Coffee
Tea
Plain Tea
Assam Tea
Ginger Tea
Cardamom Tea
Masala Tea
Lemon Tea
Green Tea
Organic Darjeeling Tea
Soups
Hot and Sour Soup
Veg Corn Soup
Tomato Soup
Spicy Tomato Soup
Beverages
Hot Chocolate Drink
Badam Drink
Badam-Pista Drink
Write a program to take input for main menu & sub menu and display the name of sub menu
selected in the following format (enter the first letter to select main menu):
Welcome to CCD
Enjoy your
Example 1:•
•
Input:
o c
o 1
Output
o Welcome to CCD!
o Enjoy your Espresso Coffee!
Example 2:
•
Input
o t
o 9
• Output
o INVALID OUTPUT!
*/
#include <bits/stdc++.h>
using namespace std;

/*
Coffee
Espresso Coffee
Cappuccino Coffee
Latte Coffee

Tea
Plain Tea
Assam Tea
Ginger Tea
Cardamom Tea
Masala Tea
Lemon Tea
Green Tea
Organic Darjeeling Tea

Soups
Hot and Sour Soup
Veg Corn Soup
Tomato Soup
Spicy Tomato Soup

Beverages
Hot Chocolate Drink
Badam Drink
Badam-Pista Drink*/

string menuItem()
{

    unordered_map<string, unordered_map<int, string>> menu = {
        {"c", {
                  {1, "Espresso Coffee"},
                  {2, "Cappuccino Coffee"},
                  {3, "Latte Coffee"},
              }},
        {"t", {{1, "Plain Tea"}, {2, "Assam Tea"}, {3, "Ginger Tea"}, {4, "Cardamom Tea"}, {5, "Masala Tea"}, {6, "Lemon Tea"}, {7, "Green Tea"}, {8, "Organic Darjeeling Tea"}}},
        {"s", {{1, "Hot and Sour Soup"}, {2, "Veg Corn Soup"}, {3, "Tomato Soup"}, {4, "Spicy Tomato Soup"}}},
        {"b", {
                  {1, "Hot Chocolate Drink"},
                  {2, "Badam Drink"},
                  {3, "Badam-Pista Drink"},
              }}};

    string mainItem;
    int subItem;
    cin >> mainItem >> subItem;

    transform(mainItem.begin(), mainItem.end(), mainItem.begin(), ::tolower);

    if (menu.find(mainItem) != menu.end() && menu[mainItem].find(subItem) != menu[mainItem].end())
    {
        return "Welcome to CCD! \nEnjoy your " + menu[mainItem][subItem] + "!";
    }

    return "INVALID OUTPUT!";
}

int main()
{
    string res = menuItem();
    cout << res << endl;

    return 0;
}