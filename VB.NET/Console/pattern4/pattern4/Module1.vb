Module Module1

    Sub Main()
        For i = 1 To 5
            For j = 5 To i Step -1
                Console.Write(j)
            Next
            Console.Write(vbCrLf)
        Next
        Console.ReadLine()
    End Sub

End Module
