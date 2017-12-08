Imports System.Console
Module Module1
    Public MustInherit Class Shape     ' abstract class
        Public Sub Area(ByVal Length As Integer, ByVal Breadth As Integer)     ' non abstract method
            WriteLine(" Area : " & 1 / 2 * Length * Breadth)
        End Sub
        Public MustOverride Sub Add(ByVal a As Integer, ByVal b As Integer)     ' abstract method
    End Class
    Public Class Triangle
        Inherits Shape
        Public Overrides Sub Add(a As Integer, b As Integer)
            WriteLine(" Sum : " & a + b)
        End Sub
    End Class
    Sub Main()
        Dim obj As New Triangle
        obj.Area(10, 8)
        obj.Add(88, 12)
        ReadLine()
    End Sub
End Module
