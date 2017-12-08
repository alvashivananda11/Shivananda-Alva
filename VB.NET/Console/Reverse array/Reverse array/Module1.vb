Module Module1

    Sub Main()
        Dim a() As Integer = {1, 2, 3, 4, 5}
        For i = 4 To 0 Step -1
            Console.WriteLine("Reverse_array = {0}", a(i))
        Next
        Console.ReadKey()
    End Sub

End Module
