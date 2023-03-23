The following program outline shows only function definitions and variable declarations,
int b, c;
void f(void)
{ 
    int b, d;
}
void g(int a)
{
    int c;
    { 
        int a, d;
    }
}

int main(void)
{
    int c, d;
}
For each of the following scopes, list all variable and parameter names visible in that scope.
If there's more than one variable or parameter with the same name, indicate which one is
visible.
(a) The f function
(b) The g function
(c) The block in which a and d are declared
(d) The main function

(a) the F function has b, c, and d, however b is a local scope variable, not the global scope variable b.
(b) G function has c and a, but c is local scope, not global, also a & d are in their own scope.
(c) the Block in which a and d are declared, has a, d, b and c, however a is local scope, not the parameter variable a.
(d) Main function sees b, c and d, however c is local scope, not global scope.