<?php
$msg = array('s','t','r','i','n','g');

echo"<strong>String antes de ser invertida:</strong> <br><br>";

for($i = 0; $i < 6; $i++){
 echo "$msg[$i]";
}

echo"<br><br><strong>String depois de ser invertida:</strong><br><br>";

for($i = 6; $i >= 0; $i--){
	echo "$msg[$i]";
}
?> 