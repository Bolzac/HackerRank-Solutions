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

class Result
{
    public static void solve(double meal_cost, int tip_percent, int tax_percent)
    {
        double tax_price = meal_cost * Convert.ToDouble(tax_percent) / 100;
        double tip_price = meal_cost * Convert.ToDouble(tip_percent) / 100;
        double sum = meal_cost + tax_price + tip_price;
        Console.WriteLine(Convert.ToInt32(sum));
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        double meal_cost = Convert.ToDouble(Console.ReadLine().Trim());

        int tip_percent = Convert.ToInt32(Console.ReadLine().Trim());

        int tax_percent = Convert.ToInt32(Console.ReadLine().Trim());

        Result.solve(meal_cost, tip_percent, tax_percent);
    }
}