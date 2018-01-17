import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sn = new Scanner(System.in);
        while(sn.hasNextInt()){
            int n = sn.nextInt();
            numbers nums = new numbers(n);
            for(int i=0;i<n;i++){
                nums.add(sn.nextInt(),i);
            }
            int m = sn.nextInt();
            for(int i=0;i<m;i++){
                if(nums.isContain(sn.nextInt())){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            }
            
        }
    }
}
class numbers{
	public int[] nums;
    public int n;
    
    public numbers(int n){
        this.n = n;
        this.nums = new int[n];
        
    }
    
    public void add(int data,int location){
        this.nums[location] = data;
    }
    
    public boolean isContain(int data){
        for(int i=0;i<this.n;i++){
            if(this.nums[i] == data){
                return true;
            }
        }
        return false;
    }
    
    
}