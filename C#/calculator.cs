using System;

namespace C_sharp_learning
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("---------------A basic calculator---------------");
            Console.Write("Enter the first operand: ");
            double a = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter the second operand: ");
            double b = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter the operator (1 for +, 2 for -, 3 for *,4 for /): ");
            int c = Convert.ToInt32(Console.ReadLine());
            if (c == 1)
            {
                Console.WriteLine("The result is " + a + b);
            }
            else if (c == 2)
            {
                Console.WriteLine("The result is " + (a - b));
            }
            else if (c == 3)
            {
                Console.WriteLine("The result is " + (a * b));
            }
            else if (c == 4)
            {
                Console.WriteLine("The result is " + (a / b));
            }
            else
            {
                Console.WriteLine("Enter correct value for operand!!");
            }
        }
    }
}