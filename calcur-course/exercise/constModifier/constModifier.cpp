#include <iostream>
//array is modifiable when it's passed to another function.

//this function need to use the parameter "const" as well so the doSomething() function would work.
void doSomething(const int data[]);//function declaration

//a function that not only print the array, but also modified the array.
//if we only use the parameter "int data[]", a function could still modify the data[].
//so we use the parameter "const int data[]" instead.
void printArray(const int data[], int size){
    for (int i = 0; i < size; ++i) {
        //data[i]++; // we can't do this in the scope of this function.
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
    doSomething(data);
}

//this function need to use the parameter "const" as well so the doSomething() function would work.
//function definition
void doSomething(const int data[]){

}
int main(){
    int data[] = {1,2,3}; // in the scope of this function, we could still modify the array.
    int size = sizeof(data)/ sizeof(data[0]);
    printArray(data, size);
    std::cout << data[0] << "\n";
    return 0;
}