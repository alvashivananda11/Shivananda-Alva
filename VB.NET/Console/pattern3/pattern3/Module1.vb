Module Module1

    Sub Main()

        Dim k As Integer = 1
        For i = 0 To 3
            For j = k To 4
                Console.Write(j)
            Next
            Console.Write(vbCrLf)
            k = k + 1
        Next
        Console.ReadLine()
    End Sub

End Module
