Module Module1
    Class cal
        Public a, b, c As Integer
        Public Sub add()
            Console.WriteLine("Enter any two numbers:")
            a = Console.ReadLine()
            b = Console.ReadLine()
            c = a + b
            Console.WriteLine("Addition={0}", c)
        End Sub
        Public Sub subt()
            Console.WriteLine("Enter any two numbers:")
            a = Console.ReadLine()
            b = Console.ReadLine()
            c = a - b
            Console.WriteLine("Subtraction={0}", c)
        End Sub
        Public Sub mul()
            Console.WriteLine("Enter any two numbers:")
            a = Console.ReadLine()
            b = Console.ReadLine()
            c = a * b
            Console.WriteLine("Multiplication={0}", c)
        End Sub
        Public Sub div()
            Console.WriteLine("Enter any two numbers:")
            a = Console.ReadLine()
            b = Console.ReadLine()
            c = a / b
            Console.WriteLine("Division={0}", c)
        End Sub
    End Class
    Sub Main()
        Dim z As cal = New cal()
        z.add()
        z.subt()
        z.mul()
        z.div()
        Console.ReadKey()
    End Sub
End Module
