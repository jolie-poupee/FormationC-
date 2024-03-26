#include"factoriel.h"

    int factorielle(int n){
        if(n==0||n==1){
            return 1;
        }
        else{
            return n*factorielle(n-1);
        }
    }