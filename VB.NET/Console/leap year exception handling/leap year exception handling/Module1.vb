Module Module1

    Sub Main()
        Dim year, checkvalue As Integer
        year = CInt(Console.ReadLine())
        checkvalue = year.ToString.Length
        Try
            If checkvalue = 4 Then
                If year Mod 4 = 0 Then
                    Console.Write("It is leap year")
                Else
                    Console.Write("It is not a leap year")
                End If
            Else
                Throw New Exception(vbCrLf & "The input should be of four digit")
            End If
        Catch ex As Exception
            Console.WriteLine(ex.Message)

        End Try
        Console.ReadKey()
    End Sub

End Module
