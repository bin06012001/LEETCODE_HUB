

int addDigits(int num){
if(num<10)return num;      
    
        int curr=0;             
        while(num){              
            curr=curr+(num%10);
            num=num/10;
        }
        return addDigits(curr);
}