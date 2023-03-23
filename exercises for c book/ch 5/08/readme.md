The following if statment is unnecessarily complicated. simplify it as much as possible
(hint: the entire statement can be replaced by a single assignment)

if (age >= 13)
{
    if (age <= 19)
    {
        teenager = true;        
    }
    else
    {
        teenager = false;
    }
}
else if (age < 13)
{
    teenager = false;
}


///////////////////////////////////////

teenager = age >= 13 && age <= 19;
