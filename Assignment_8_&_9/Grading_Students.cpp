****1st apprach ****

vector<int> gradingStudents(vector<int> grades) {
    int n;
   
for(int& grade:grades){
    if(grade>=38){
        n= (grade % 5);
        if(n>=3){
            grade+=(5-n);
        }
    }
    }
    return grades;
}



****2nd apprach****

vector<int> gradingStudents(vector<int> grades) {
    int n;
   
for(int& grade:grades){
    if(grade>=38){
        grade+=((grade%5)>=3)?(5-(grade%5)):0;
    }
    }
    return grades;
}
