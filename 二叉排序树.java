import java.util.*;


public class Main{
	public static void main(String[] args) {
		Scanner sn = new Scanner(System.in);

		while(sn.hasNextInt()){
			int n = sn.nextInt();
			int[] nodes = new int[n];
			for(int i=0;i<n;i++){
				nodes[i] = sn.nextInt();
			}
            treenode root = new treenode(nodes[0]);
            for(int i=1;i<n;i++){
                root.addnode(nodes[i]);
            }
            String prestring = "";
            String midstring = "";
            String backstring = "";
            prestring = treenode.preorder(root,"");
            midstring = treenode.midorder(root,"");
            backstring = treenode.backorder(root,"");
           	System.out.println(prestring);
            System.out.println(midstring);
            System.out.println(backstring);
			
		}
	}
}

class treenode{
	public int data;
	public treenode left = null;
	public treenode right = null;

	public treenode(int data){
		this.data = data;
	}
    
    public void addnode(int data){
        if(data<this.data){
            if(this.left == null){
                treenode td = new treenode(data);
                this.left = td;
            }else{
                this.left.addnode(data);
            }
        }
        else if(data == this.data){
            
        }else{
            if(this.right == null){
                treenode td = new treenode(data);
                this.right = td;
            }else{
                this.right.addnode(data);
            }
        }
    }

	public static String preorder(treenode T,String s){
		if(T != null){
			s = s + String.valueOf(T.data)+" ";
			s = preorder(T.left,s);
			s = preorder(T.right,s);
			return s;
		}else{
			return s;
		}

	}
	public static String midorder(treenode T,String s){
		if(T !=null){
			s = midorder(T.left,s);
			s = s+ String.valueOf(T.data)+" ";
			s = midorder(T.right,s);
			return s;
		}else{
			return s;
		}

	}
	public static String backorder(treenode T,String s){
		if(T != null){
			s = backorder(T.left,s);
			s = backorder(T.right,s);
			s = s + String.valueOf(T.data)+ " ";
			return s;
		}else{
			return s;
		}
		
	}
}
