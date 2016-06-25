<html>
	<body>
		<h3>
			To Check whether the given number is odd or even using php
		</h3>
		<form action="" method="post">
			<label>Enter a number</label>
			<input type="text" name="number" />
			<input type="submit" />
		</form>
	</body>
</html>
<?php 
if($_POST){
	$number = $_POST['number']; 
	//check if the enter value is a number or show an error message
	if (!(is_numeric($number) && is_int(0+$number))){
		echo "<p style='color:red;'>Error: You entered a string. Please enter an Integer</p>";
		die();
	}
	echo $number;
	if(($number % 2) == 0){
		echo " is an Even number";
	}else{
		echo "is  an Odd number";
	}
}
?>
