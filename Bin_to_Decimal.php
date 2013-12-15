<?php

/*
   *------------------------------------------------------------------------------*
  | Julio Franco González - 801.13.2416                                            |
  | Program to connvert any binary number in IEEE 754 representation to a Decimal  |
  | Number.																		   |
  | Variables: $sign, $a, $exp, $b, $man, $c, $finalExp, $finalNum, $mult, $x, $y, |
  | $z, $i 																		   |
   *------------------------------------------------------------------------------*
*/

// Sign Part of the Number.

	echo "\n Enter the sign part of your binary number \n";		// Ask for the sign part of the number.

	$sign=$_POST['sign'];	// Sign input for the html form.

    $sign = trim(fgets(STDIN));		// Input the sign part

    $a = $sign;		// Assign $sign to $a.

    	// Evaluating for a correct input.

        if ($sign == "1") {
        	echo "\n The number is negative.\n";
        }

        if ($sign == "0") {
        	echo "\n The number is positive.\n";
        }

    	if (count($sign) != 1) {	// If the user inputs something other than a single digit number, Display an error message.
    	    echo " ERROR PLEASE ENTER THE CORRECT PART OF THE NUMBER!\n\n";
    	    return;
		}

// Exponent Part of the Number

	echo "\n Enter a the exponent part of your binary number \n";	// Ask for the exponent part of the number.

	$exp=$_POST['sign'];    // Exponent input for the html form.

    $exp = trim(fgets(STDIN));	// Input the exponent part.

    $b = $exp;	// Assign $b to exponent.

    $exp = str_split($exp);	// Make $exp an array.

    if (count($exp) != 8) {		// Evaluating what the user input for errors.
        echo " ERROR PLEASE ENTER THE CORRECT PART OF THE NUMBER!\n\n";
        return;
	}
  
    $y = 7;		// Assign $y as 7 to use as the index for the binary convertion.

    foreach ($exp as $x) {	// Foreach loop to convert the exponent part. Assign each value in the array as $x

        if ($x > 0) {	// Check for the 1's in the $exp array and use by $z.

        	$z = pow(2,$y); // Assign $z to 2 ^ $y
        
        	echo $x;
        
        	echo " --- 2 To the power of {$y} is {$z}\n";	
        
        	$y--;	// Subtract from $y each time the loop runs.
        }
        
        else {	// If the number is 0.
        
        	$x = 0;
        
        	echo "{$x} --- 0 to the power of {$y} is {$z}\n";	// Display that the numeber is in fact 0.
        
        	$z = 0;	// Assign $z to 0 so that I always get 0 as result.
        
        	$y--;	// Subtract from $y to keep the sequence.
        }

        $i = $i + $z;	// Add each value that I get.
        
        $i = $i;	// Set $i = $i again to keep from adding $i twice.
    }

    $finalExp = $i - 127;	// Subtract the bias.

    echo "\n The exponent is {$finalExp}.\n";	// Print my result.

// Mantissa Part of the Number.

	echo "\n Enter a the mantissa part of your binary number \n";	// Ask for the mantissa

	$man=$_POST['sign'];	// Input for the html code.

	$man = trim(fgets(STDIN));	// Input for the mantissa

	$c = $man;

	$man = str_split($man);	// Create an array with $man.

    if (count($man) != 23) {	// Evaluating the input for errors.

        echo " ERROR PLEASE ENTER THE CORRECT PART OF THE NUMBER!\n\n";

        return;
	}

    $y = -1;	// Assign $y = -1 to use as the index in the mantissa part convertion.

    $i = 1;		// Assign $i = 1 to use as the omited 1 in the number.

    foreach ($man as $x) {	// Loop to evaluate each value of the array.

        if ($x > 0) {	// If the number is 1.

        	$z = pow(2,$y);	// $z = 2^$y to use for the each value in the array for convertion.

        	echo $x;

        	echo " --- 2 To the power of {$y} is {$z}\n";

        	$y--;	// Subtract from $y so that the number keeps getting smaller and gives the correct value.
        }

        else {	// If the number is not a one.

        	$x = 0;	// Assign $x = 0 to get 0 as a result back.

        	echo "{$x} --- {$x} To the power of {$y} is 0\n";

        	$z = 0;	// Assign $z = 0 so that I don't add a value twice and get the wrong result.

        	$y--;	// Subtract from the index to keep the correct order
        }

        $i = $i + $z;	// Add each value to the last.
    }

// Finishing Up

    $mult = pow(2, $finalExp);	// Assign $mult equal to the result of 2 ^ exponent.

    $finalNum = $i*$mult;	// Multiply the mantissa by $mult this will give me the number in decimal.

    	if ($a == "1") {	// If the sign is "1" muliply the final result by -1. This will give the number, but negative.

    		$finalNum = $finalNum * -1;
    	}

    echo "\n{$a}\n";

	echo "\n The binary number {$a}.{$b}.{$c} in decimal is {$finalNum}\n";

return;

?>
