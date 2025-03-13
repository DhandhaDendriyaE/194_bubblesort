#include <iostream>
#include <string>

int arr[20];
int n;

void input(){
    cout << "masukkan banyaknya eleme pada array"
    cin >> n;
    if(n<=20){
        break;
    }
    else {
        cout << "\narray maksimal 20 elemen.\n";
    }
}
cout << endl;
cout <<"====================" endl;
cout <<"masukan elemen array" endl;
cout <<"====================" endl;

for (int i=0;i<n;i++){
    int pass= 1;
    do{
        for (intj=0;j<n-1-pass;j++){
            if (arr[j])>[1]{
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass = pass + 1;
        
    } while (pass<=n-1);
}

void printArray(){
    cout << arr[i] << " ";
}
cout << endl;

int main() {
input(); 
bubbleSortArray(); 
printArray();
return 0;
}

