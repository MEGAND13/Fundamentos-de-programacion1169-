#include <iostream>
#include <windows.h>

int main () {
    int salto =0;
     int num=1000; 
     std::cout<< "usando for";
    for (int i = 1000; i >= 0; i--)
    {   
        salto++;
        std::cout<< "numero: " << i <<" ";
         if(salto==10){
            std::cout<<std::endl;
            salto=0;
         }
    }
    salto=0;
    std::cout<< "usando while"<< std::endl;
    while ( num >= 0 )
    {
        salto++;
       std::cout<< num<<" "; 
       num--;
       if(salto==10){
            std::cout<<std::endl;
            salto=0;
         }
    }
      num=1000; 
      salto=0;
      std::cout<< "usando Do while" <<std::endl;
    do
    {
        salto++;
        std::cout<< num<<" "; 
       num--;
       if(salto==10){
            std::cout<<std::endl;
            salto=0;
         }
    } while (num >= 0);

    std::cout<< "contando lento"; 
     for (int i = 0; i <= 100; i++)
    {   
        salto++;
        std::cout<< "numero: " << i <<" ";
         if(salto==10){
            std::cout<<std::endl;
            salto=0;
         }
         Sleep(500);
    }
    std::cout<< "10x10";
      for (int i = 0; i <= 100; i=i+10)
    {   
        salto++;
        std::cout<< "numero: " << i <<" ";
         if(salto==10){
            std::cout<<std::endl;
            salto=0;
         }
    }
    
    
}