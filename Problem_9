//Problema 771 -- Leetcode
//Versão que abrange um maior numero de casos
int numJewelsInStones(char * jewels, char * stones){

    int ans = 0;
    if(strlen(stones) > strlen(jewels)){
    for(int i = 0; i < strlen(stones); i++){
        for(int j = 0; j < strlen(jewels); j++){
            if(stones[i] == jewels[j]){
                ans++;
            }
        }

    }
    }
    else{
        for(int i = 0; i < strlen(jewels); i++){
        for(int j = 0; j < strlen(stones); j++){
            if(jewels[i] == stones[j]){
                ans++;
            }
        }

    }
    }
    return ans;
}

/*Primeira versão do codigo:
int numJewelsInStones(char * jewels, char * stones){

    int ans = 0;
    for(int i = 0; i < strlen(stones); i++){
        for(int j = 0; j < strlen(jewels); j++){
            if(stones[i] == jewels[j]){
                ans++;
            }
        }
    }
    return ans;
}
*/
