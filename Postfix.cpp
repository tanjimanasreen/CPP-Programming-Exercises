#include <iostream>
using namespace std;

int pos;

void evaluate_postfix(string expression);
bool is_digit(char c);
bool is_operator(char c);
void input_stack(int *stack,int digit);
void calculate(int *stack,char operate);

int main()
{
    cout <<"Input Postfix Expression as a string : "<< endl;
    string expression;
    cin >> expression;

    evaluate_postfix(expression);

    return 0;
}

void evaluate_postfix(string expression)
{
    int stack[100];
    pos=0;

    for(int i=0;expression[i]!='\0';i++)
    {
        if(is_digit(expression[i]))
        {
            if(is_digit(expression[i+1]))
            {
                input_stack(stack,((expression[i]-48)*10)+(expression[i+1]-48));
                i++;
            }
            else
            {
                input_stack(stack,expression[i]-48);
            }
        }
        else if(is_operator(expression[i]))
        {
            calculate(stack,expression[i]);
        }
    }

    cout << "Answer : " << stack[0] << endl;
}

bool is_digit(char c)
{
    if(c>='0' && c<='9')
        return true;

    return false;
}

bool is_operator(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/')
        return true;

    return false;
}

void input_stack(int *stack,int digit)
{
    stack[pos]=digit;
    pos++;
    for(int i=0;i<pos;i++)
    {
        cout << stack[i] << " , " ;
    }
    cout << endl;
}

void calculate(int *stack,char operate)
{
    if(operate=='+')
    {
        stack[pos-2]=stack[pos-2] + stack[pos-1];
    }
    if(operate=='-')
    {
        stack[pos-2]=stack[pos-2] - stack[pos-1];
    }
    if(operate=='*')
    {
        stack[pos-2]=stack[pos-2] * stack [pos-1];
    }
    if(operate=='/')
    {
        stack[pos-2]=stack[pos-2] / stack[pos-1];
    }
    pos--;
    for(int i=0;i<pos;i++)
    {
        cout << stack[i] << " , " ;
    }
    cout << endl;
}

