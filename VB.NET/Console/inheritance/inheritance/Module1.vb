Imports System.Console
Module Module1
    Public a As Integer
    Public b As Integer
    Public c As Integer
    Class x
        Public Sub New()
            a = 10
            b = 20
        End Sub
    End Class
    Class y
        Inherits x
        Public Sub New()
            c = a + b
        End Sub
        Public Sub abc()
            WriteLine("{0}", c)
        End Sub
    End Class
    Sub Main()
        Dim z As New x
        Dim q As New y
        q.abc()
        ReadKey()
    End Sub
End Module
