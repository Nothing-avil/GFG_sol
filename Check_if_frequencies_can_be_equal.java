class Solution {
    boolean sameFreq(String s) {
        // code here
        int[] temp=new int[26];
        for(int i=0;i<s.length();i++){
            temp[s.charAt(i)-'a']++;
        }
        HashSet<Integer> set=new HashSet<>();
        int min=Integer.MAX_VALUE;
        int max=-1;
        for(int i=0;i<26;i++){
            if(temp[i]!=0)
            set.add(temp[i]);
            if(min>temp[i] && temp[i]!=0){
                min=temp[i];
            }
            if(max<temp[i] && temp[i]!=0){
                max=temp[i];
            }
        }
        if(set.size()>2){
            return false;
        }
        if(max==min){
            return true;
        }
        int count1=0,count2=0;
        for(int i=0;i<26;i++){
            if(min==temp[i]){
                count1++;
            }
            if(max==temp[i]){
                count2++;
            }
        }
        if(count1>1 && count2>1){
            return false;
        }
        if(min ==1 && count1==1){
            return true;
        }
        return (Math.abs(max-min)==1 && count2==1)? true:false;
    }
}
