import java.io.*; 
class Alienlanguage
{
void display(String s,String s1)
{
	int c=0;
	for(int i=0;i<s1.length();i++)
	{
if(s.contains(s1.charAt(i)+""))
{
c++;
break;
}
}
if(c>0)
System.out.println("YES");
else
System.out.println("NO");
}
public static void main(String args[])throws IOException
{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int T=Integer.parseInt(in.readLine());
for(int i=0;i<T;i++)
{
String s2=in.readLine();
String s3=in.readLine();
Alienlanguage ob=new Alienlanguage();
ob.display(s2,s3);
}
}
}