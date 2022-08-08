**** 1st approach ****

string kangaroo(int x1, int v1, int x2, int v2) {
    if(v1<=v2){
        return "NO";
    }
if((x2-x1 )% (v1-v2)==0){
    return "YES";
}
else {
    return "NO";
}
return 0;
}

**** 2nd approach *****

string kangaroo(int x1, int v1, int x2, int v2) {

return ((v1>v2)&& (x1-x2)%(v2-v1)==0)? "YES" : "NO";

}
