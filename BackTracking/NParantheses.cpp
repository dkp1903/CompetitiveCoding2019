//Given a number n, give the number of ways a balanced set of n parantheses can be made
void funGenerate(int n)
{
    if(n == 0)
        return;
    string res;
    generate(n, n, "", res);
    cout<<res<<endl;
}

void generate(int leftRems, int rightRems, string soFar, string res)
{
    if(leftRems == 0 && rightRems == 0)
    {
        //iF nothing remains to be added
        res += soFar;
        return;
    }
    
    if(leftRems > 0)
        generate(leftRems - 1, rightRems, soFar + "(", res);
    
    if(rightRems > leftRems)
        generate(leftRems, rightRems - 1, soFar + ")", res);
}
