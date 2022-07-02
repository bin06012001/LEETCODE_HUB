class Solution {
    public int maxArea(int h, int w, int[] horizontalCuts, int[] verticalCuts) {
        Arrays.sort(horizontalCuts);
        Arrays.sort(verticalCuts);
        int hmax=horizontalCuts[0];
        int  vmax=verticalCuts[0];
        int x=horizontalCuts.length;
        for(int i=1;i<x;i++){
            int one=horizontalCuts[i];
            int two=horizontalCuts[i-1];
            int diff=one-two;
            hmax=(int)Math.max(diff,hmax);
        }
        hmax=(int)Math.max(hmax,h-horizontalCuts[x-1]);
        int y=verticalCuts.length;
        for(int i=1;i<y;i++){
            int one=verticalCuts[i];
            int two=verticalCuts[i-1];
            int diff=one-two;
            vmax=(int)Math.max(diff,vmax);
        }
        vmax=(int)Math.max(vmax,w-verticalCuts[y-1]);
        long ans=(long)hmax*(long)vmax%1000000007;
        return (int)ans;
    }
}