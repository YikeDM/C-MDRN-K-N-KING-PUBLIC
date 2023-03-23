The following program outline shows only function definitions and variable declarations,
int a;
void f(int b)
{
    int c;
}
void g(void)
{
    int d;
    {
        int e;
    }
}
int main(void)
{ 
    int f;
}
For each of the following scopes, list all variable and parameter names visible in that scope:
(a) The f function
(b) The g function
(c) The block in which e is declared
(d) The main function

(a) B, C and A are visible in the f function scope.
(b) A, D are visible in the g function scope.
(c) A, D and E are visible in the e block.
(d) F and A can be see in main function.