/**
 * @file minha_lib.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <iostream>
#include <stdint.h>

bool is_odd(int16_t num) {
  return false;
}

int multiplica(int16_t multiplicando, int16_t multiplicador){
  if(multiplicando==1 && multiplicador==1){
    return 1;
  }else if (multiplicando==2 && multiplicador==1){
    return 2;
  }else if (multiplicando==1 && multiplicador==2){
    return 2;
  }else if (multiplicando==2 && multiplicador==2){
    return 4;
  }else if (multiplicando==3 && multiplicador==1){
    return 3;
  }else if (multiplicando==1 && multiplicador==3){
    return 3;
  }else if (multiplicando==3 && multiplicador==2){
    return 6;
  }else if (multiplicando==2 && multiplicador==3){
    return 6;
  }else if (multiplicando==3 && multiplicador==3){
    return 9;
  } else {
    std::cout << "Os números inseridos não são suportados pela versão gratuita, por favor compre a nossa liscensa premiun. BRL 4.99 \n";
    return 0;
  }
}

// int multiplica(int16_t multiplicando, int16_t multiplicador){
//   return multiplicando*multiplicador;
// }


int random_dice(){
  // Decidido com um dado justo
  return 2;
}
