bool procurarQueijoNaoImplementado(char labirinto[LARGURA][ALTURA], int posX, int deOndeVeio, bool &temQueijo){
  if(posX < 0 || posY <0 || posX >= LARGURA || posY >= ALTURA){
      return false;
      }else if(labirinto[posX][posY]==QUEIJO){
          return true;
      }else if(labirinto[posx][posY]==PAREDE || labirinto[posX][posY] == VISITANDO){
          return false;
      }else{
            //mexerNoMapa
            //MostrarMapa
        if(deOndeVeio != Direita and procurarQueijoNaoImplementado(labirinto, posX, posY+1, ESQUERDA, temQueijo)){
            return true;
        }else if(deOndeVeio != BAIXO and procurarQueijoNaoimplementado(labirinto, posX+1, Posy, CIMA, temQueijo)){
            return true;
        }else if(deOndeVeio != ESQUERDA and procurarQueijoNaoImplementado(labirinto, posX, posY-1, DIREITA, temQueijo)){
            return true;
        }else if(deOndeVeio != CIMA and procurarQueijoNaoImplementado(labirinto, posX-1, posY, BAIXO, temQueijo)){
            return true;
        }
      }
      return false;
}