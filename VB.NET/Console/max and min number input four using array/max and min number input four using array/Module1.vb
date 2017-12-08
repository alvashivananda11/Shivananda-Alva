Module Module1

    Sub Main()
        Dim arr(100) As Integer
        Dim max, i As Integer
        Dim min As Integer
        Console.WriteLine("enter the number:")
        For i = 0 To 3
            arr(i) = Console.ReadLine()
        Next
        max = arr(0)
        min = arr(0)
        For i = 0 To 3
            If (arr(i) > max) Then
                max = arr(i)
            End If
            If (arr(i) < min) Then
                min = arr(i)
            End If
        Next
        Console.WriteLine("The greater number is {0}", max)
        Console.WriteLine("The smallest number is {0}", min)
        Console.ReadKey()
    End Sub

End Module
