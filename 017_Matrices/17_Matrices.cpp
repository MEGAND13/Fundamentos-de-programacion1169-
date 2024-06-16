#include <iostream>

int main() {
     int matriz1 [3][3];
     int matriz2 [5][5];
     int matriz3 [10][10]; 
     int menu;
     int matriz4 [3][2];

     std::cout<< " Seleccione la matriz que desee ver: 1)[3][3], 2)[5][5], 3)[10][10]";
     std::cin>> menu;
     switch (menu)
     {
     case 1:
       for (int i = 0; i < 3; i++)
         {
            for (int j = 0; j < 3; j++)
             {
                matriz1[i][j]=  rand() % 11;
                std::cout<< "[" << matriz1[i][j] << "]";
             }
             std::cout << std::endl;

         }
        break;
    case 2: 
        for (int i = 0; i < 5; i++)
         {
            for (int j = 0; j < 5; j++)
            {
                    matriz2[i][j]=  rand() % 11;
                    std::cout<< "[" << matriz2[i][j] << "]";
            }
                std::cout << std::endl;

         }
    break;  
    case 3:
         for (int i = 0; i < 10; i++)
         {
        for (int j = 0; j < 10; j++)
            {
                matriz3[i][j]=  rand() % 11;
                std::cout<< "[" << matriz3[i][j] << "]";
            }
            std::cout << std::endl;

         }

         break;
         std::cout << std::endl;
     }

     for (int i = 0; i < 3; i++)
         {
            for (int j = 0; j < 2; j++)
             {
                matriz4[i][j]=  rand() % 11;
                std::cout<< "{valor: [" << matriz4[i][j] << "] pos: [" << i << "," << j << "] } ";
             }
            std::cout << std::endl;
         }
         std::cout << std::endl;

}
