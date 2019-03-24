#include <stdio.h>
void main()
{
   int s=0;
   while(1){
     switch (s) {
       case 0:
         switch (getchar()) {
            case 'c':
              s=50;
              break;
            case 'u':
              s=100;
              break;
           case 'x':
             s='q';
             break;
            case EOF:
              exit(0);
              break;
            default:
              break;
         }
       break;
       case 50:
         switch (getchar()) {
           case 'c':
             s=100;
             break;
           case 'u':
             s=150;
             break;
           case 'x':
             s='q';
             break;
           case EOF:
             exit(0);
             break;
           default:
             break;
         }
       break;
       case 100:
         switch (getchar()) {
           case 'c':
             s=150;
             break;
           case 'u':
             s=200;
             break;
           case 'a':
             s=0; //TODO: sorteio
             break;
           case 'x':
             s='q';
             break;
           case EOF:
             exit(0);
             break;
           default:
             break;
         }
       break;
       case 150:
         switch (getchar()) {
           case 'c':
             s=200;
             break;
           case 'u':
             s=250;
             break;
           case 'a':
             s=50;
             break;
           case 'x':
             s='q';
             break;
           case EOF:
             exit(0);
             break;
           default:
             break;
         }
       break;
       case 200:
         switch (getchar()) {
           case 'c':
             s=250;
             break;
           case 'u':
             s=300;
             break;
           case 'a':
             s=100;
             break;
           case 'p':
             s=0; //TODO: sorteio
             break;
           case 'x':
             s='q';
             break;
           case EOF:
             exit(0);
             break;
           default:
             break;
         }
       break;
       case 250:
         switch (getchar()) {
           case 'c':
             s=300;
             break;
           case 'a':
             s=150;
             break;
           case 'p':
             s=50;
             break;
           case 'x':
             s='q';
             break;
           case EOF:
             exit(0);
             break;
           default:
             break;
         }
       break;
       case 300:
         switch (getchar()) {
           case 'a':
             s=200;
             break;
           case 'p':
             s=100;
             break;
           case 'i':
             s=0; //TODO:sorteio
             break;
           case 'x':
             s='q';
             break;
           case EOF:
             exit(0);
             break;
           default:
             break;
         }
       break;
       case 'q':
          exit(1);
          break;
       case EOF:
          exit(0);
          break;
       default:
          break;
     }
   }
   exit(1);
}
