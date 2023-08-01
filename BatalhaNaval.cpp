#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>
#define N 10

using namespace std;
int aleatorio(){
    int x;
    x = (rand()%9)+1;
}
int main(){
    srand(time(NULL));

    char Usu[N][N], Comp[N][N], EComp[N][N], col;
    int i, j, lin, Clin, Ccol, x = 0, k, y = 0, rankU = 0, rankC = 0, u, p, aux = 0, auxC = 0;
    string repetir, nome;

    system("color A");
    cout << endl;

    repetir = "SIM";

    while(repetir == "SIM"){

    cout << "~~~~~~BEM VINDO A BATALHA NAVAL!!~~~~~~ " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl <<endl;

    for(i=0 ; i < N ; i++){
        for(j=0 ; j < N ; j++){
            Usu[i][j] = '~';
            Comp[i][j] = '~';
            EComp[i][j] = '~';
        }
    }

    cout << "Qual o seu nome?" << endl;
    cin >> nome; 
    cout << endl << endl;

    cout << "Vamos la Capitao " << nome << "!!!" << endl << endl;

    cout << "Primeiro precisamos posicionar suas embarcoes!" << endl;
    cout << "Voce possui 3 submarinos que ocupam uma casa e sao representados por S" << endl;
    cout << "E 2 hidroavioes que ocupam 4 casas e sao representados por H H H" << endl;
    cout << "                                                             H  " << endl << endl;
    cout << "Lembre-se que as linhas sao indicadas de 1 a 10 e as colunas de A a J" << endl << endl;
    system("pause");

    
    while(x < 3){

        while(y < 2){
            cout << endl;
            cout << "Indique a linha e coluna em que voce quer posicionar seu hidroavioes: " << endl;    
            

            cin >> lin >> col; // indicar a posiçao do hidroavião
            lin = lin-1;
            
            if(col == 'A'){
                col = 1;
                col = col-1;
            }
            if(col == 'B'){
                col = 2;
                col = col-1;
            }
            if(col == 'C'){
                col = 3;
                col = col-1;
            }
            if(col == 'D'){
                col = 4;
                col = col-1;
            }
            if(col == 'E'){
                col = 5;
                col = col-1;
            }
            if(col == 'F'){
                col = 6;
                col = col-1;
            }
            if(col == 'G'){
                col = 7;
                col = col-1;
            }
            if(col == 'H'){
                col = 8;
                col = col-1;
            }
            if(col == 'I'){
                col = 9;
                col = col-1;
            }
            if(col == 'J'){
                col = 10;
                col = col-1;
            }
            
            
            
            if((lin >= 0) && (lin <= N-1) && (col >= 0) && (col <= N-1) && (lin+1 >= 0) && (lin+1 <= N-1) && (col+1 >= 0) && (col+1 <= N-1) && (col-1 >= 0) && (col-1 <= N-1)){
                    if(Usu[lin][col] == '~' && Usu[lin][col-2] != 'H' && Usu[lin][col+2] != 'H' && Usu[lin-1][col+2] != 'H' && Usu[lin-1][col-2] != 'H' && Usu[lin+1][col-2] != 'H' && Usu[lin+1][col+2] != 'H'){
                        Usu[lin][col] = 'H';
                        Usu[lin][col-1] = 'H';
                        Usu[lin+1][col] = 'H';
                        Usu[lin][col+1] = 'H';
                        Usu[lin-1][col+2] = 'v';
                        Usu[lin-1][col-1] = 'v';
                        Usu[lin-1][col-2] = 'v';
                        Usu[lin-1][col-2] = 'v';
                        Usu[lin][col+2] = 'v'; 
                        Usu[lin][col-2] = 'v';
                        Usu[lin+1][col+1] = 'v';
                        Usu[lin+1][col-1] = 'v';
                        Usu[lin+1][col+2] = 'v';
                        Usu[lin+1][col-2] = 'v';
                        Usu[lin+2][col] = 'v';
                        Usu[lin+2][col+1] = 'v'; 
                        Usu[lin+2][col-1] = 'v';
                        Usu[lin-1][col] = 'v';
                        Usu[lin-1][col+1] = 'v';
                        Usu[lin+2][col-2] = 'v';
                        Usu[lin+2][col+2] = 'v';
                        y++;
                    }
                    else{
                        cout << "Nao e possivel jogar nessa posicao! Outra embarcacao proxima." << endl;
                    }
            }
            else{
                cout << "O hidroaviao nao cabe nessa posicao." << endl;
            }
                
        }
  
    cout << endl;
    cout << "Indique a linha e coluna em que voce quer posicionar seu submarino: " << endl;
   
        cin >> lin >> col; // indicar a posiçao do submarino.
        lin = lin-1;
        
        if(col == 'A'){
                col = 1;
                col = col-1;
            }
            if(col == 'B'){
                col = 2;
                col = col-1;
            }
            if(col == 'C'){
                col = 3;
                col = col-1;
            }
            if(col == 'D'){
                col = 4;
                col = col-1;
            }
            if(col == 'E'){
                col = 5;
                col = col-1;
            }
            if(col == 'F'){
                col = 6;
                col = col-1;
            }
            if(col == 'G'){
                col = 7;
                col = col-1;
            }
            if(col == 'H'){
                col = 8;
                col = col-1;
            }
            if(col == 'I'){
                col = 9;
                col = col-1;
            }
            if(col == 'J'){
                col = 10;
                col = col-1;
            }
            

        if((lin >= 0) && (lin <= N-1) && (col >= 0) && (col <= N-1)){
            if(Usu[lin][col] == '~'){
                Usu[lin][col] = 'S';
                Usu[lin-1][col] = 'v';
                Usu[lin-1][col-1] = 'v';
                Usu[lin-1][col+1] = 'v';
                Usu[lin][col+1] = 'v';
                Usu[lin][col-1] = 'v';
                Usu[lin+1][col] = 'v';
                Usu[lin+1][col-1] = 'v';
                Usu[lin+1][col+1] = 'v';
                x++;
                if(col+1 > 9){
                    Usu[lin][col+1] = '~';
                    Usu[lin-1][col+1] = '~';
                    Usu[lin+1][col+1] = '~';
                }
                if(col-1 < 0){
                    Usu[lin][col-1] = '~';
                    Usu[lin-1][col-1] = '~';
                    Usu[lin+1][col-1] = '~';
                }
                
            }
            
            else{
                cout << "Nao e possivel jogar nessa posicao! Outra embarcacao proxima." << endl;
            }
        }
    }
    cout << endl;
    k = 1;
    cout << "Esse e seu territorio!" << endl << endl;
    cout << "#  A  B  C  D  E  F  G  H  I  J" << endl;
    for(i=0 ; i < N ; i++){ // imprime matriz usuario.
        cout << setw(2) << k++;
        for(j=0 ; j < N ; j++){
            if(Usu[i][j] == 'v'){
                Usu[i][j] = '~';
            
            }
            cout << setw(2) << Usu[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    cout << endl;
    cout << "Territorio do Capitao Fantasma " << endl;
    x = 0;
    y = 0;
    while(x < 3){

        while(y < 2){
    
            Clin = aleatorio();
            Ccol = aleatorio();
            Clin = Clin-1;
            Ccol = Ccol-1;
            
            //hidroaviao comp.
            if((Clin >= 0) && (Clin <= 10-1) && (Ccol >= 0) && (Ccol <= N-1) && (Clin+1 >= 0) && (Clin+1 <= N-1) && (Ccol+1 >= 0) && (Ccol+1 <= N-1) && (Ccol-1 >= 0) && (Ccol-1 <= N-1)){
                  if(Comp[Clin][Ccol] == '~' && Comp[Clin][Ccol-2] != 'H' && Comp[Clin][Ccol+2] != 'H' && Comp[Clin-1][Ccol+2] != 'H' && Comp[Clin-1][Ccol-2] != 'H' && Comp[Clin+1][Ccol-2] != 'H' && Comp[Clin+1][Ccol+2] != 'H'){ 
                        Comp[Clin][Ccol] = 'H';
                        Comp[Clin][Ccol-1] = 'H';
                        Comp[Clin+1][Ccol] = 'H';
                        Comp[Clin][Ccol+1] = 'H';
                        Comp[Clin-1][Ccol+2] = 'v';
                        Comp[Clin-1][Ccol-1] = 'v';
                        Comp[Clin-1][Ccol-2] = 'v';
                        Comp[Clin-1][Ccol-2] = 'v';
                        Comp[Clin][Ccol+2] = 'v'; 
                        Comp[Clin][Ccol-2] = 'v';
                        Comp[Clin+1][Ccol+1] = 'v';
                        Comp[Clin+1][Ccol-1] = 'v';
                        Comp[Clin+1][Ccol+2] = 'v';
                        Comp[Clin+1][Ccol-2] = 'v';
                        Comp[Clin+2][Ccol] = 'v';
                        Comp[Clin+2][Ccol+1] = 'v'; 
                        Comp[Clin+2][Ccol-1] = 'v';
                        Comp[Clin-1][Ccol] = 'v';
                        Comp[Clin-1][Ccol+1] = 'v';
                        Comp[Clin+2][Ccol-2] = 'v';
                        Comp[Clin+2][Ccol-2] = 'v';
                        y++;
                    }
            }
        }
    
    Clin = aleatorio();
    Ccol = aleatorio();
    Clin = Clin - 1;
    Ccol = Ccol - 1;
    
        if((Clin >= 0) && (Clin <= N-1) && (Ccol >= 0) && (Ccol <= N-1)){ // submarino comp.
            if(Comp[Clin][Ccol] == '~'){
                Comp[Clin][Ccol] = 'S';
                Comp[lin-1][col] = 'v';
                Comp[Clin-1][Ccol-1] = 'v';
                Comp[Clin-1][Ccol+1] = 'v';
                Comp[Clin][Ccol+1] = 'v';
                Comp[Clin][Ccol-1] = 'v';
                Comp[Clin+1][Ccol] = 'v';
                Comp[Clin+1][Ccol-1] = 'v';
                Comp[Clin+1][Ccol+1] = 'v';
                x++;
            }
            
            else{
            }
        }
    }
    
    cout << endl;
    k = 1;
    cout << "#  A  B  C  D  E  F  G  H  I  J" << endl;
    for(i=0 ; i < N ; i++){ // imprime matriz computador.
       cout << " " << k++;
        
        for(j=0 ; j < N ; j++){
            if(Comp[i][j] == 'v' || EComp[i][j] == 'v'){
                Comp[i][j] = '~';
                EComp[i][j] = '~';
            }
            cout << setw(2) << EComp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "___________________________________________" << endl;
    cout << endl;

    system("pause");

    //Comeca os acertos.

    cout << "Agora e hora do ataque Capitao!!" << endl << endl;

    
    int pontC = 0, pontU = 0, rodada = 0, jogada = 1 , jogadaC = 1;

    do{

        int acertxUsu;
        char acertyUsu; // tiro usuario.
        u = 1;
        while(u == 1 && pontU < 11){
        cout << "Sua vez de jogar!!" << endl;
        cout << "Escolha as coordenadas que voce quer atacar:" << endl;

        cin >> acertxUsu;
        cin >> acertyUsu;

            if(acertyUsu == 'A'){
                acertyUsu = 1;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'B'){
                acertyUsu = 2;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'C'){
                acertyUsu= 3;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'D'){
                acertyUsu = 4;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'E'){
                acertyUsu = 5;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'F'){
                acertyUsu = 6;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'G'){
                acertyUsu = 7;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'H'){
                acertyUsu = 8;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'I'){
                acertyUsu = 9;
                acertyUsu = acertyUsu-1;
            }
            if(acertyUsu == 'J'){
                acertyUsu = 10;
                acertyUsu = acertyUsu-1;
            }
            
        acertxUsu = acertxUsu - 1;
        
        if((Comp[acertxUsu][acertyUsu] == 'H') || (Comp[acertxUsu][acertyUsu] == 'S')){ // acerto usu.
            cout << "Acertou:" << endl;
            EComp[acertxUsu][acertyUsu]  = 'X';
            pontU++;
            jogada++;
            rodada++;
            u = 1;
        
        }
        else{
            if(Comp[acertxUsu][acertyUsu] == 'X'){
                EComp[acertxUsu][acertyUsu] = 'X';
                cout << "Jogou na mesma posicao!" << endl;
                u = 0;
                jogada++;
            }
            else{
                cout << endl;
                cout << "Errou!!" << endl; // erro usu.
                EComp[acertxUsu][acertyUsu] = '-';
                u = 0;
                jogada++;
            }
        }
        k = 1;
        
    
        cout << endl;
            cout << "#  A  B  C  D  E  F  G  H  I  J" << endl;
            for(i=0 ; i < N ; i++){ // imprime matriz usuario.
                cout << " " << k++;

                for(j=0 ; j < N ; j++){
                    cout << setw(2) << EComp[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        jogada = jogada - 1;
        int acertxComp, acertyComp; // tiro comp.
        p = 1;
        while(p == 1 && pontC < 11){

        acertxComp = aleatorio();
        acertyComp = aleatorio();
        acertxComp = acertxComp - 1;
        acertyComp = acertyComp - 1;
        if((Usu[acertxComp][acertyComp] == 'H') || (Usu[acertxComp][acertyComp] == 'S')){ // acerto comp.
            cout << "Acerto inimigo:" << endl;
            Usu[acertxComp][acertyComp] = 'X';
            pontC++;
            jogadaC++;
            rodada++;
            p = 1;
            cout << endl;
            
        }
        else{ // erro comp
            if(Usu[acertxComp][acertyComp] == 'X'){
                Usu[acertxComp][acertyComp] = 'X';
                cout << "Jogou na mesma posicao!" << endl;
                jogadaC++;
                p = 0;
            }
            else{
            cout << endl;
            cout << "Inimigo Errou!!" << endl << endl;
            Usu[acertxComp][acertyComp] = '-';
            jogadaC++;
            p = 0;
            }
        }
        
        k = 1;
        
            cout << "#  A  B  C  D  E  F  G  H  I  J" << endl;
            for(i=0 ; i < N ; i++){ // imprime matriz computador.
            cout << " " << k++;
                
                for(j=0 ; j < N ; j++){
                    cout << setw(2) << Usu[i][j] << " ";
                }
                cout << endl;
            }
            rodada++;
        }
        jogadaC = jogadaC - 1;    
            cout << endl;
            cout << "rodada: " << rodada << endl;
            cout << "jogadas do jogador: " << jogada << endl;
            cout << "jogadas do Capitao Fantasma: " << jogadaC << endl;
            cout << "Pontuacao do jogador: " << pontU << endl;
            cout << "Pontuacao do Capitao Fantasma: " << pontC << endl << endl;

            cout << "___________________________________________" << endl;

            cout << endl;
            
        
       
    } while((pontU < 11) && (pontC < 11));

    if(pontU == 11){
        cout << "PARABENS!!! Voce derrotou o Capitao Fantasma." << endl << endl;
        rankU++;
    }
    else{
        cout << "Voce perdeu!!! O Capitao Fantasma e muito forte!" << endl;
        rankC++;
    }

    system ("pause");
    system ("cls");

    cout << endl << endl;
    cout << "------RANKING------" << endl;
    
    jogada = jogada + aux;
    jogadaC = jogadaC + auxC;
    
    if(rankU > rankC ){
        cout << "1." << nome << ": " << rankU << " vitorias" << " " << jogada << " jogadas" << endl;
        cout << "2.Capitao Fantasma: " << rankC << " vitorias" << " " << jogadaC << " jogadas" << endl; 
    }
    else{
        cout << "1.Capitao Fantasma: " << rankC << " vitorias" << " " << jogadaC << " jogadas" << endl;
        cout << "2." << nome << ": " << rankU << " vitorias" << " " << jogada << " jogadas" << endl; 
    }
    cout << endl << endl;
    aux = jogada;
    auxC = jogadaC;

    cout << "Gostaria de jogar de novo?" << endl;
    cin >> repetir;
    cout << endl;

    x = 0;
    y = 0;

  }  
  return 0;  
}

