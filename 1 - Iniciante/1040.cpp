#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float grades[4], weights[4] = {2, 3, 4, 1};

    for(int i = 0; i < 4; i++)
        cin >> grades[i];

    float avg = 0;

    for(int i = 0; i < 4; i++){
        avg += grades[i] * weights[i] / 10;
    }

    cout << fixed << setprecision(1);
    cout << "Media: " << avg << endl;

    if(avg >= 7)
        cout << "Aluno aprovado." << endl;
    else if(avg >= 5){
        cout << "Aluno em exame." << endl;
        float q;
        cin >> q;
        cout << "Nota do exame: " << q << endl;

        if((avg + q) / 2 >= 5)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        
        cout << "Media final: " << (avg + q) / 2 << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }
}