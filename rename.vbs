Set objFso = CreateObject("Scripting.FileSystemObject")
Set Folder = objFSO.GetFolder("C:\Users\Username\Desktop\Folder")

For Each File In Folder.Files
    sNewFile = File.Name
    sNewFile = Replace(sNewFile,"name","newName")
    if (sNewFile<>File.Name) then 
        File.Move(File.ParentFolder+"\"+sNewFile)
    end if

Next