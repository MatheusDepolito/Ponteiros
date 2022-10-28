#include <iostream>
#include <string>
using namespace std;


void print(void* ptr, char type){
    switch (type) {
    case 'i': cout << *((int*)ptr) << endl;
        break;
    case 's': cout << *((string*)ptr) << endl;
        break;
    case 'f': cout << *((float*)ptr) << endl;
        break;
    case 'c': cout << *((char*)ptr) << endl;
        break;
    default: cout << "nada ve irmao" << endl;
    }
    // no main
    //    int numb = 5;
    //    string palavr = "matheus";
    //    print(&palavr,'s');
    //    print(&numb,'i');

}

void getMinAndMax(int numbers[], int size,int *min,int *max){

    for(int i = 1; i<size;i++){
        if(numbers[i] > *max)
            *max=numbers[i];
        if(numbers[i] < *min)
            *min=numbers[i];

    }
    //    int numbers[5] = {5,3,5,6,-3};

    //    int min = numbers[0];
    //    int max = numbers[0];
    //    getMinAndMax(numbers,5,&min,&max);

    //    cout << "Min: "<< min << "\n"<< "Max: "<<max << endl;
}

void createArrayD(){
    int size;
    cout << "Size: ";
    cin >> size;

    int* myArray = new int [size];// Alocando memoria para quando precisarmos

        for(int i=0; i<size;i++){
            cout << "Array[" << i << "] ";
            cin >> myArray[i];
        }

        for(int i=0; i<size;i++){
            cout << myArray[i]<< "  ";
        }

    delete[] myArray; // Desalocando a memoria do array quando nao precisamos mais dela
    myArray = NULL; // Boa pratica, dizendo que meu array e igual null, consequentemente apontando para nada
}

void createMatrizD(){

    int linhas, colunas;

    cout << "linhas, colunas: ";
    cin >> linhas >> colunas;

    int** table = new int*[linhas];

    for(int i=0;i<linhas;i++){
        table[i] = new int[colunas];
    }
    for (int i=0;i<linhas;++i) {
        for(int j=0;j<colunas;j++){
            cout << "Matriz [" << i << "]" << "[" << j << "]: ";
            cin >> table[i][j];
        }
    }

    cout << table[1][2] << endl;

    for (int i = 0; i < linhas; ++i) {
        delete[]table[i];
    }

    delete[]table;
    table = NULL;
}

int main()
{

 //1:57:20
    return 0;
}
