### Reimplementation of the standard printf() function. Supports basic formatting conversions:
#### %c, %s, %p, %d, %i, %u, %x, %X, and %%.

🛠️ Features
Handles string, character, pointer, decimal, unsigned, and hex outputs.

Uses variadic arguments to process an arbitrary number of inputs.

Fully compatible with standard output behavior (stdout).

🧪 Compilation
make
./my_printf


▶️ Example
<pre> 
#include "libft.h" 
    
int main(void) 
{ 
    ft_printf("Hello, %s!\n", "world"); 
    return 0; 
} 
</pre>
