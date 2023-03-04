<!DOCTYPE html>
<html>
<body>

<?php
//array dias do mês e faturamento
$mes = array(
1 => 22174.1664,
2 => 24537.6698,
3 => 26139.6134,
4 => 0.0,
5 => 0.0,
6 => 26742.6612,
7 => 0.0,
8 => 42889.2258,
9 => 46251.174,
10 => 11191.4722,
11 => 0.0,
12 => 0.0,
13 => 3847.4823,
14 => 373.7838,
15 => 2659.7563,
16 => 48924.2448,
17 => 18419.2614,
18 => 0.0,
19 => 0.0,
20 => 35240.1826,
21 => 43829.1667,
22 => 18235.6852,
23 => 4355.0662,
24 => 13327.1025,
25 => 0.0,
26 => 0.0,
27 => 25681.8318,
28 => 1718.1221,
29 => 13220.495,
30 => 8414.61);

//for para a media
$media = 0;
for($i = 1;$i <= 30;$i++){
	$media += $mes[$i];
    
}
	$media /= 21;
//atribuindo valor as variaveis de controle
$menor = $mes[1];
$maior = $mes[1];

echo "<h2> Dias acima da média do mês </h2>";
//for para a validação de menor e maior e dias de faturamento acima da média
for($j = 1; $j <= 30; $j++){

	if($mes[$j] < $menor & $mes[$j] != 0){
    	$menor = $mes[$j];	
    }
    
	if($mes[$j] > $maior){
    	$maior = $mes[$j];
    }


	if($mes[$j] > $media){
    	list($dia,$valor) = each($mes);
        echo "O dia $dia teve o valor <strong>acima</strong> da média do mês: $valor <br>";
    }
    else{
    	list($dia,$valor) = each($mes);
        
    }
}
echo "<br><strong> O maior valor faturado no mês é:</strong> <b>$maior</b><br> ";
echo "<br><strong> O menor valor faturado no mês é:</strong> <b>$menor</b> ";
?> 


</body>
</html>
