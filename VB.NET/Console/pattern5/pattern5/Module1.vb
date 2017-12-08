Module Module1
    Sub Main()
        Dim k As Integer = 5
        For i = 1 To 5
            For j = 1 To k
                Console.Write(j)
            Next
            Console.Write(vbCrLf)
            k = k - 1
        Next
        Console.ReadKey()
    End Sub
End Module
