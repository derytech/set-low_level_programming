cat > 0-main.c << 'EOF'
#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
    int i;

    i = 0; /* test the 0 case */
    positive_or_negative(i);

    return (0);
}
EOF
