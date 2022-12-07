#include <iostream>
#include <getopt.h>
using namespace std;
int main(int argc, char *argv[]) {
        
    int i, opt, result_umn = 1, result_del = 1, x, b=1, a;
    
    while ((opt = getopt (argc, argv, "p:d:h")) != -1){
        switch (opt) {
            case 'h':
                cout<<"КАЛЬКУЛЯТОР - "<< argv[0] << endl<< "Выберите действие:" << endl<< "-p — произведение всех введённых значений" << endl << "-d — частное первого значения на все последующие введённые значения"<< endl << "Для того, чтобы продолжить, запустите программу ещё раз с нужным параметром и введите значения через пробел"<< endl;
            break;
                
                
            case 'p':
                for (i=2; i<argc; i++){
                x = strtol(argv[i], NULL, 10);
                result_umn=result_umn*x;
                }
                printf("Multiplication result_umn is %d\n", result_umn);
                
            break;
                
            case 'd':{
                a= strtol(argv[2], NULL, 10);
                for (i=2; i<argc; i++){
                    x = strtol(argv[i], NULL, 10);
                    b=b*x;
                    result_del=a/(b/a);
                }
                printf("Multiplication result_del is %d\n", result_del);
            break;
            }
        }
    }
}
