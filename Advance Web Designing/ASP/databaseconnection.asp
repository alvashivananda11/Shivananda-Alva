<% @language="VBScript"%>
<%
set con = Server.CreateObject("ADODB.Connection")
con.Provider="Microsoft.ACE.OLEDB.12.0"
con.Open "D:\ASPDatabaseConnection.accdb"
set rs = Server.CreateObject("ADODB.Recordset")
rs.open "Select * from Members",con
%>
<table border="1">
<tr><th>ID</th><th>Name</th><th>Address</th><th>Mobile No.</th></tr>
<%
do until rs.EOF
%>
<tr>
<td><%=rs.Fields.Item("ID").value%></td>
<td><%=rs.Fields.Item("NAME").value%></td>
<td><%=rs.Fields.Item("ADDRESS").value%></td>
<td><%=rs.Fields.Item("MOBILE NUMBER").value%></td>
</tr>
<%
rs.MoveNext
loop
%>
</table>
<%
rs.Close
con.Close
%>