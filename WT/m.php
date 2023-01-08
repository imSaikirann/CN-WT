<?php
$a = array(2,5,6);
$b = array(1,0,9);
$res = array_merge($a,$b);
arsort($res);
foreach($res as $i)
{
    echo $i.",";
}
?>