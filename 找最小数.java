import java.util.*;

public class Main{
	public static void main(String[] args) {
		Scanner sn = new Scanner(System.in);
        while(sn.hasNextInt()){
            int n = sn.nextInt();
            numbers[] nums = new numbers[n];
            for(int i=0;i<n;i++){
                int x = sn.nextInt();
                int y = sn.nextInt();
                nums[i] = new numbers(x,y);
            }
            numbers min = nums[0];
            for(int i=1;i<n;i++){
                if(nums[i].isSmaller(min)){
                    min = nums[i];
                }
            }
            System.out.println(min.x + " " + min.y);
        }
	}
}
class numbers{
	public int x;
    public int y;
    
    public numbers(int x,int y){
    	this.x = x;
        this.y = y;
    }
    
    public boolean isSmaller(numbers nums){
    	if(this.x < nums.x){
        	return true;
        }else if(this.x == nums.x){
        	return this.y < nums.y;
        }else if(this.x > nums.x){
        	return false;
        }
        return false;
    }
}