<?php
$file = "f1.txt";
$f1 = fopen("f1.txt","r");
$text = fread($f1,filesize($file));
$f2 = fopen("f2.txt","w");
fwrite($f2,$text);
echo"done";
fclose($f1);
fclose($f2);
?>
