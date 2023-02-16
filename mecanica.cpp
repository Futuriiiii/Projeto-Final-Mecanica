#include <iostream>
#include <math.h>

using namespace std;

void DensidadeFluido()
{
    float forca, sg;

    cout << "Insira o valor da densidade do fluido: " << endl;
    cin >> sg;

    // 9800.19 -> densidade da agua * gravidade
    // 0.001371238 -> volume da tigela + volume do ar
    // 0.00513 -> densidade da tigela * volume da tigela
    forca = 9800.19 * (sg * 0.001371238 - 0.00513);

    cout << "A forca necessaria para a tigela ficar em equilibrio sera de: " << forca << " N" << endl; 
}

void DensidadeTigela()
{
    float forca, sg;

    cout << "Insira o valor da densidade da tigela: " << endl;
    cin >> sg;

    // 9800.19 -> densidade da agua * gravidade
    // 0.0213913128 -> densidade do fluido * (volume da tigela + volume do ar)
    // 0.0009 -> volume da tigela
    forca = 9800.19 * (0.0213913128 - sg * 0.0009);

    cout << "A forca necessaria para a tigela ficar em equilibrio sera de: " << forca << " N" << endl;
}

void DensidadeAmbos()
{
    float forca, sgTigela, sgFluido;

    cout << "Insira o valor da densidade do fluido: " << endl;
    cin >> sgFluido;

    cout << "Insira o valor da densidade da tigela: " << endl;
    cin >> sgTigela;

    // 9800.19 -> densidade da agua * gravidade
    // 0.001371238 -> volume da tigela + volume do ar
    // 0.0009 -> volume da tigela
    forca = 9800.19 * (sgFluido * 0.001371238 - sgTigela * 0.0009);

    cout << "A forca necessaria para a tigela ficar em equilibrio sera de: " << forca << " N" << endl;
}


int main()
{
    int tipo;

    cout << "Qual item voce deseja alterar?" << endl;
    cout << "1 - Densidade do fluido\n2 - Densidade da tigela\n3 - Ambos" << endl;
    cin >> tipo;

    switch (tipo)
    {
    case 1:
        DensidadeFluido();
        break;
    
    case 2:
        DensidadeTigela();
        break;

    case 3:
        DensidadeAmbos();
        break;

    default:
        break;
    }

    return 0;
}