class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] str = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        Set<String> set = new HashSet<String>();
        for(String itr : words){
            String s = "";
            for(int j=0; j<itr.length(); j++){
                s+=str[itr.charAt(j)-97];
            }
            set.add(s);
        }
        System.out.println(set);
        return set.size();
    }
}