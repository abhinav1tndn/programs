public class insertionsort
{
	public static void main(String args[])
	{
	    
	    int i,k,j,key,a[]={10,4,5,2,9,8};
	    for(i=1;i<a.length;i++)
	    {
	        key=a[i];
	        j=i-1;
	        while(j>=0 && a[j]>key)
	        {
	            a[j+1]=a[j];
	            j=j-1;
	        }
	        a[j+1]=key;
	    }
	
	    for(k=0;k<a.length;k++)
	    {
	        System.out.print(a[k]+" ");
	    }
	}
	
}
