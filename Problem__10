//Problema 1678 -- Leetcode
char * interpret(char * command){
    char* ans = (char*)malloc((sizeof(char) * strlen(command) )+ 1);
    int aux = 0;
        for(int i = 0; i < strlen(command); i++){
            if(command[i] == 'G'){
                ans[aux++] =  'G';
            }
            else if(command[i] == '(' && command[i+1] == ')'){
                ans[aux++] = 'o';
                i++;
            }
            else if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')'){
                ans[aux++] = 'a';
                ans[aux++] = 'l';
                i += 3;
            }
        }
        ans[aux] = '\0';
        

    return ans;
}
