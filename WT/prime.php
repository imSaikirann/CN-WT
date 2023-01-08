<?php
$i;
$j;
$k;
echo"prime numbers are:";
for($i=2;$i<=50;$i++)
{
    $c = 0;
    for($j=2;$j<=$i/2;$j++)
    {
        if($i%$j==0)
        {
            $c++;

        }
        if($c == 0)
        {
            echo"<br>$i";
        }
    }
}
?>