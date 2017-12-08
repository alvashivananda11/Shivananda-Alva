Imports System.Data
Imports System.Data.SqlClient
Module Module1
    Sub Main()
        Dim constring As String = "Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=D:\Programs\VB.NET\My Codes\Console\Database\database console.mdf;Integrated Security=True;Connect Timeout=30"
        Dim con As New SqlConnection(constring)
        Try
            con.Open()
            If con.State = ConnectionState.Open Then
                Console.WriteLine("..........................Connection Opened.............................." & vbCrLf)

            End If
            Dim qry As String = "select * from stutable"
            Dim cmd As New SqlCommand(qry, con)
            Dim rdr As SqlDataReader = cmd.ExecuteReader
            Console.WriteLine("ID" & vbTab & "Name" & vbTab & vbTab & "Phone No." & vbCrLf)

            While rdr.Read()
                Console.WriteLine(rdr("ID").ToString & vbTab & rdr("Name").ToString & vbTab & rdr("Phone No.").ToString)
            End While
        Catch ex As Exception
            MsgBox(ex.Message)
        Finally
            If con.State = ConnectionState.Open Then
                con.Close()
            End If
            If con.State = ConnectionState.Closed Then
                Console.WriteLine(vbCrLf & "..........................Connection closed...............................")
            End If
        End Try
        Console.ReadKey()
    End Sub
End Module