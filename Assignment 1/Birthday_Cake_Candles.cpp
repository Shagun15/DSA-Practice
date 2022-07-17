
int birthdayCakeCandles(vector<int> candles) {
    int greatest=0,count=0;
    
    for(int i=0;i<candles.size();i++){
        greatest=max(greatest,candles[i]);
        
      
    }
    for(int i=0;i<candles.size();i++){
          if(candles[i]==greatest){
            count++;
        }
    }
return count;
return 0;
}
