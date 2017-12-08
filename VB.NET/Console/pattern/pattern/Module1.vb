Module Module1

    Sub Main()
        Dim i, j As Integer
        For i = 5 To 1 Step -1
            For j = 1 To i
                Console.Write("{0}", j)
            Next
            Console.Write(vbCrLf)
        Next
        Console.ReadKey()
    End Sub

End Module
