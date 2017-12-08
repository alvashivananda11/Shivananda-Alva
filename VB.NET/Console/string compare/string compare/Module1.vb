Module Module1

    Sub Main()
        Dim str1, str2 As String
        str1 = "This is test"
        str2 = "This is text"
        If (String.Compare(str1, str2) = 0) Then
            Console.WriteLine(str1 + " and " + str2 +
                              " are equal.")
        Else
            Console.WriteLine(str1 + " and " + str2 +
                              " are not equal.")
        End If
        Console.ReadLine()
    End Sub

End Module
