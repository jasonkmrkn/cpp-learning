#include <iostream>
#include <string>

//template to swap value between two variables.
template <typename tbd>
void swap(tbd &a, tbd &b){
    tbd temp = a;
    a = b;
    b = temp;
}

//function overload to swap array
template<typename tbd>
//no need to pass by reference because array will decay into pointer, so we can automatically alter the elements in the array.
void swap(tbd a[], tbd b[], int size ){
    for(int i = 0; i < size; i++){
        tbd temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

//main function
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    std::cout << "a : " << a << "\tb : " << b << std::endl;

    std::string firstName = "Jason";
    std::string lastName = "Kumarkono";
    swap(firstName, lastName);
    std::cout << "first name : " << '"' << firstName << '"' << "  last name :" << '"' << lastName << '"' << "\n";

    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    for(int i = 0; i < 6; i++){
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";
    swap(nines, ones, 6);
    for(int i = 0; i < 6; i++){
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";
    return 0;
}