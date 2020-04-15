# About the Assignment
This code was written for a demonstration that examines codes used during 
World War II. It is intended for the MATH 110 Literally Mathematics
final group presentation.

## Poem Code
Poem code was used by Used by British Special Operation Executive during World War II.
It is relevant to the course because it combines poems (literature) 
and encryption/decryption (mathematics). 
It features heavily in Leo Mark’s *Between Silk and Cyanide*.

For ease of presentation, the poem code implemented here is 
a simplified version of the code used during World 
War II. It flattens the en/decryption matrix by fitting the entire message 
into a single line that has a one-to-one correspondence to 
each letter in the indicator word. This eliminates the need 
to read down columns of letters.
  

**The scenario:**

    You're a literary mathematician who has fallen down a 
    Lewis Carroll rabbithole. You're now in the world of 
    "Alice's Adventures in Wonderland." You stumble around
    and burst upon the Mad Hatter's tea party. He puts down 
    a tea cup and greets you by saying, "sttialmh."

 
**The mission:** 

    Decrypt the Mad Hatter's message. 

You realize that this greeting has been encrypted using
poem code. Luckily you know which poem the Mad Hatter used:

>“Twinkle, twinkle little bat
>
>How I wonder what you’re at!
>
>Up above the world you fly,
>
>Like a teatray in the sky.”

Given the message and the poem used to encrypt the message,
you use the indicator, (the first letter of the message)
to find the **indicator word**, the word 
from the poem used to encrypt the message.

The first letter of the Mad Hatter's message is "s." 
You find the indicator word by
checking the "s"th position of the poem: 

    a = "Twinkle",
    b = "twinkle",
    c = "little",
    ...
    s = "teatray"

Number each letter in the indicator word in alphabetical order:


    t   e   a   t   r   a   y   
    5   3   1   6   4   2   7


Starting at position 1, 2, ..., 7 list the letters of the Mad Hatter's 
message "ttialmh" (without the indicator letter) below the indicator word:

    t   e   a   t   r   a   y   
    5   3   1   6   4   2   7
    -------------------------
    l   i   t   m   a   t   h

which is an abbreviation of your title:
    
    Lit. Math. = Literary Mathematician
    
    
**Exercise:**
    
    Decrypt the message: "sooojgdb"
<details>
<summary>See the answer!</summary>

good job
</details>
    
------------------------------------------------------------------
For more information about poem code, here's an article that goes 
into more depth: https://darthnull.org/fun/2016/03/27/poem-codes/