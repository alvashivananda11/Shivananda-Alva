Module Module1

    Sub Main()
        Dim k As Integer = 69
        For i = 1 To 5
            For j = 65 To k
                Console.Write(Chr(j))
            Next
            Console.Write(vbCrLf)
            k = k - 1
        Next
        Console.ReadKey()
    End Sub

End Module
