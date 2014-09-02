# Julio Franco Gonzalez        # 801.13.2416
# MIPS ASSEMBLY ASSIGNMENT
#
# This program uses the Euclid algorithm to find the Greatest Common 
# Denominator between two whole integers (First value must be the greatest).

.data    # Honestly I don't know what this does,
.text    # but I think it's important LOL.

EUCLID:  ## Moving the values to different registers to use later.
    addi $t0, $a0, 49
    addi $t1, $a1, 21

LOOP:    ## Euclid Algorithm.
    beq  $t1, $zero, EXIT      # If Algorithm was successful, terminate program.
    div  $t0, $t1              # Divide the integers.
    addi $t0, $t1,0            # add the result to a usable register.
    mfhi $t1                   # Use contents of the "HI" register.
    j    LOOP                  # Jump to the beginning of the loop.

EXIT:    ## Result from algorithm. (GCD of the original integers)
    addi $v0, $t0, 0           # Storing the GCD
    jr   $ra                   # Final Return Address with answer.
	syscall
