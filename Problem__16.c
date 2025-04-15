//Problema 2114 -- Leetcode
int mostWordsFound(char ** sentences, int sentencesSize){
    int temp = 0;

    for(int i = 0; i < sentencesSize; i++){
        char* chartemp = sentences[i];
        int cont = 0;
        char* divide = strtok(chartemp, " ");
        while(divide != NULL){
              cont++;
              divide = strtok(NULL, " ");
        }
        if(cont > temp){
            temp = cont;
        }
    }
    return temp;

}
