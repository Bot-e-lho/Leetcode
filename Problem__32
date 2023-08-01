//Problema 1700 -- Leetcode

int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize){
int counts[2] = {0};
int count = 0;

    for ( int i = 0; i < studentsSize; i++ ) {
        counts[students[i]]++;
    }
    
    for ( int j = 0; j < studentsSize; j++ ) {
        if ( counts[sandwiches[j]] == 0 ) {
            break;
        }

        counts[sandwiches[j]]--;
        count++;
    }
int res = studentsSize - count;
    return res;
}
