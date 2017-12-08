Module Module1

    Sub Main()
        Dim a, b, c, d As Integer
        a = Console.ReadLine()
        b = Console.ReadLine()
        c = Console.ReadLine()
        d = Console.ReadLine()
        If (a > b And a > c And a > d) Then
            Console.WriteLine("The greater number Is {0}", a)
        ElseIf (b > a And b > c And b > d) Then
            Console.WriteLine("The greater number Is {0}", b)
        ElseIf (c > a And c > b And c > d) Then
            Console.WriteLine("The greater number Is {0}", c)
        Else
            Console.WriteLine("The greater number Is {0}", d)
        End If
        If (a < b And a < c And a < d) Then
            Console.WriteLine("The smallest number Is {0}", a)
        ElseIf (b < a And b < c And b < d) Then
            Console.WriteLine("The smallest number Is {0}", b)
        ElseIf (c < a And c < b And c < d) Then
            Console.WriteLine("The smallest number Is {0}", c)
        Else
            Console.WriteLine("The smallest number Is {0}", d)
        End If
        Console.ReadLine()

    End Sub

End Module
