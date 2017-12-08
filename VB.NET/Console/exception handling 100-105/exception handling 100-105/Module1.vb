Module Module1

    Sub Main()
        Dim input As Integer
        input = CInt(Console.ReadLine())
        Try
            If (input >= 100 And input <= 105) Then
                Throw New Exception("Number should not be betwwen 100 to 105")
            End If
            Console.WriteLine("Input:" & input)
        Catch ex As Exception
            Console.WriteLine(ex.Message)
        Finally
            Console.WriteLine("Finally program done!")
        End Try
        Console.ReadKey()
    End Sub

End Module
