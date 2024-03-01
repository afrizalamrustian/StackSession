#include <iostream>

using namespace std;

int maksimal = 5, top = 0;
string arrayBuku[5];

bool isFull(){
    if(top == maksimal){
        return true;
    }
    else{
        return false;
    }
}
bool isEmpty(){
    if(top == 0){
        return true;
    }
    else{
        return false;
    }
}

void pushArrayStack(string data){
    if(isFull()){
        cout << "stack telah penuh"<< endl;
    }
    else{
        arrayBuku[top]=data;
        top++;
    }
}
void popArrayStack(){
    if(isEmpty()){
        cout << "tidak ada data yang dihapus" << endl;
    }
    else{
        arrayBuku[top-1]="";//top=2 arraybuku[2-1], arraybuku[1]
        top--;
    }
}
void peekArrayStack(int posisi){
    if(isEmpty()){
        cout << "tidak ada data yang bisa dilihat" << endl;
    }
    else if(posisi>maksimal){
        cout << "posisi yang diminta melebihi maksimal stack" << endl;
    }
    else if(posisi>top){
        cout << "posisi yang diminta melebihi data teratas" << endl;
    }
    else{
        int index = top;
        for(int i=top-1; i>posisi; i--){
            index--;
        }
        cout << "data pada posisi ke = " << posisi << " adalah = " << arrayBuku[index] << endl;
    }
}
void changeArrayStack(int posisi, string data){
    if(isEmpty()){
        cout << "tidak ada data yang bisa dilihat" << endl;
    }
    else if(posisi>maksimal){
        cout << "posisi yang diminta melebihi maksimal stack" << endl;
    }
    else if(posisi>top){
        cout << "posisi yang diminta melebihi data teratas" << endl;
    }
    else{
        int index = top;
        for(int i=top-1; i>posisi; i--){
            index--;
        }
       arrayBuku[index]=data;
    }
}
void deleteArrayStack(){
    if(isEmpty()){
        cout << "tidak ada data yang dihapus"<< endl;
    }
    else{
        //int index = top;
        for(int i=top-1; i>=0; i--){
            arrayBuku[i]="";
        }
        top = 0;
    }
}

int countArrayStack(){
    return top;
}

void displayArrayStack(){
    if(isEmpty()){
        cout << "tidak ada data yang dicetak"<< endl;
    }
    else{
        for(int i=top; i>0; i--){
            cout << arrayBuku[i-1] << endl;
        }
    }
}

int main()
{
    pushArrayStack("matematika");
    pushArrayStack("Struktur Data");
    pushArrayStack("Statistika");
    pushArrayStack("Bahasa Inggris");
    pushArrayStack("Biologi");
    displayArrayStack();
    cout << "\n"<< endl;
    changeArrayStack(2, "algoritma");
    displayArrayStack();
    cout << "\n"<< endl;
    deleteArrayStack();
    displayArrayStack();
    //cout << "apakah stack sudah penuh ? " << isFull() << endl;
    //cout << "apakah stack masih kosong ? " << isEmpty() << endl;
    //cout << "jumlah data pada stack adalah = " <<countArrayStack() << endl;
    return 0;
}
