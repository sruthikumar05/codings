<html>
<body>
<script type="text/javascript">
var a=0,b=1,c,n,num=1;
n= prompt("Enter the number of terms")
document.write("Fibonacci series are <br/>");
while (num<=n)
{
document.write(a);
document.write("<br/>");
c=a+b;
a=b;
b=c;
num++;
}
</script>
</body>
</html>
