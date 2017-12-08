Module Module1
    Sub Main()
        Dim arr(10) As Integer
        Dim ev(10) As Integer
        Dim od(10) As Integer
        Dim k As Integer
        Dim i As Integer
        Dim q As Integer
        For i = 0 To 10
            arr(i) = Console.ReadLine()
        Next
        For i = 0 To 10
            If arr(i) Mod 2 = 0 Then
                ev(k) = arr(i)
                k = k + 1
            Else
                od(q) = arr(i)
                q = q + 1
            End If
        Next
        For i = 0 To k - 1
            Console.WriteLine("Even Numbers are:")
            Console.WriteLine(ev(i))
        Next
        For i = 0 To q - 1
            Console.WriteLine("Odd Numbers are:")
            Console.WriteLine(od(i))
        Next
        Console.ReadKey()
    End Sub
End Module
