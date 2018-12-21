<!DOCTYPE html>
<html lang="en">
<head>
	<title>the acceptable dating age in php</title>
</head>

<body>
	<form action="index.php" method="post">
		Your age: <input type="number" name="age" />
		
	</form>
	
	<?php
		if( isset( $_POST["age"] )  ) {
			$sender = $_POST["age"];
			$min = $sender / 2 + 7;
			$max = ( $sender - 7 ) * 2;
			$message = "the acceptable dating age range for you is: $min to $max";
			
			echo htmlspecialchars($message);
		}
	?>
	
</body>
	
</html>
