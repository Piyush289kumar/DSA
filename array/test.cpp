#include<iostream>
#include<algorithm>

using namespace std;

int findLargestElement(int arrayAsArgs[], int numberOfElementAsArgs){
    //  return 
     int* li;
     li = max_element(arrayAsArgs, arrayAsArgs + numberOfElementAsArgs);

     cout << "Largest Element is : " << *li;

     return 0; 
}



int main(){
    int myArray[] = {65,1,2,3,4,5,6};
    int numOfElement = sizeof(myArray) / sizeof(myArray[0]);
    findLargestElement(myArray, numOfElement);
    return 0;
}





