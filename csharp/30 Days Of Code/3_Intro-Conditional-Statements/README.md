## C# Conditional Statements

We are using conditional statement when we want to execute a block of code under spesific condition or conditions.

To create conditional statements, the easiest way is using if...else if....else.

Let's explain the below code's conditional statements.
```
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Solution
{
    public static void Main(string[] args)
    {
        int N = Convert.ToInt32(Console.ReadLine().Trim());
        if (N % 2 == 1)
        {
            Console.WriteLine("Weird");
        }
        else
        {
            if (N >= 2 && N <= 5)
            {
                Console.WriteLine("Not Weird");
            }
            else if (N >= 6 && N <= 20)
            {
                Console.WriteLine("Weird");
            }
            else if (N > 20)
            {
                Console.WriteLine("Not Weird");
            }
        }
    }
}
```

1. First I have a if...else section to check that is the value of N variable odd or even. We set our conditions in brackets next to if and else if.
2. If N is odd then we execute the below code block which is in middle of first curly brackets.
3. If N is even then we pass first block then execute else block.
4. As you can see there are more statements under else block which is comparing N value with other integer values.
5. Same logic, if conditions of if or else if are valid then we execute the code block of it. If none of conditions are valid then we execute else block code block. 
