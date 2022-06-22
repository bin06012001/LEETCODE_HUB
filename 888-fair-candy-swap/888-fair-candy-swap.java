class Solution {
    public int[] fairCandySwap(int[] A, int[] B) {
        int sumA = 0;
        int sumB = 0;

        for(int a: A)
            sumA += a;
        for(int b: B)
            sumB += b;

        int[] res = new int[2];
        HashSet<Integer> set = new HashSet<Integer>();

        for(int a: A)
            set.add(sumA - a - a);

        for(int b: B) {
            if(set.contains(sumB - b - b)) {
                res[0] = (sumA - sumB + b + b) / 2;
                res[1] = b;
            }
        }

        return res;
    }
}