class Solution {
    public int minSetSize(int[] arr) {
        
         Map<Integer,Integer> hm=new HashMap<>();
        for(int i:arr)
            hm.put(i,hm.getOrDefault(i,0)+1);
        PriorityQueue<Integer> pq=new PriorityQueue<>(Collections.reverseOrder());
        int i=0,sum=0;
        int n=arr.length/2;
        for(int j:hm.values())
            pq.add(j);
        while(sum<n)
        {
            sum+=pq.poll();
            i++;
        }
        return i;
        
    }
}